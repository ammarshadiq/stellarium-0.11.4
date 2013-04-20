/*
 * Copyright (C) 2007 Fabien Chereau
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 */
//#include <stdio.h>

#include "StelProjector.hpp"
#include "StelPainter.hpp"
#include "StelApp.hpp"
#include "StelCore.hpp"
#include "StelUtils.hpp"
#include "StelFileMgr.hpp"
#include "StelLocaleMgr.hpp"
#include "StelModuleMgr.hpp"
#include "StelIniParser.hpp"
#include "StelVertexArray.hpp"
#include "KeplerMission.hpp"
#include "StelGui.hpp"
#include "StelGuiItems.hpp"
#include "KeplerMissionDialog.hpp"

#include <QtOpenGL>
#include <QDebug>
#include <QTimer>
#include <QAction>
#include <QPixmap>
#include <QtNetwork>
#include <QSettings>
#include <QKeyEvent>
#include <QMouseEvent>
#include <vector>
#include <cmath>

using namespace std;

/*************************************************************************
 This method is the one called automatically by the StelModuleMgr just
 after loading the dynamic librarya
 *************************************************************************/
StelModule* KeplerMissionStelPluginInterface::getStelModule() const {
    return new KeplerMission();
}

StelPluginInfo KeplerMissionStelPluginInterface::getPluginInfo() const {

    // Allow to load the resources when used as a static plugin
    Q_INIT_RESOURCE(KeplerMission);

    StelPluginInfo info;
    info.id = "KeplerMission";
    info.displayedName = "Kepler Mission";
    info.authors = "Ammar Shadiq";
    info.contact = "www.stellarium.org";
    info.description = "Kepler mission data presentation.";
    return info;
}

Q_EXPORT_PLUGIN2(KeplerMission, KeplerMissionStelPluginInterface);

/*************************************************************************
 Constructor
 *************************************************************************/
KeplerMission::KeplerMission() 
    : toolbarButton(NULL){
    setObjectName("KeplerMission");
    keplerMissionConfigDialog = new KeplerMissionDialog();
//    conf = StelApp::getInstance().getSettings();
//    font.setPixelSize(conf->value("gui/base_font_size", 13).toInt());
}

/*************************************************************************
 Destructor
 *************************************************************************/
KeplerMission::~KeplerMission() {
    delete keplerMissionConfigDialog;
}

/*************************************************************************
 Reimplementation of the getCallOrder method
 *************************************************************************/
double KeplerMission::getCallOrder(StelModuleActionName actionName) const {
    if (actionName == StelModule::ActionDraw)
        return StelApp::getInstance().getModuleMgr().getModule("NebulaMgr")->getCallOrder(actionName) + 10.;
    return 0;
}

/*************************************************************************
 Init our module
 *************************************************************************/
void KeplerMission::init() {
    qDebug() << "init called for KeplerMission";

    try {
        loadBoundaries(StelFileMgr::findFile(":/KeplerMission/resources/kepler_spring_boundaries.dat"));
        //loadBoundaries(StelFileMgr::findFile("data/kepler_spring_boundaries.dat"));
        //        loadBoundaries(StelFileMgr::findFile("data/kepler_fall_boundaries.dat"));
        //        loadBoundaries(StelFileMgr::findFile("data/kepler_summer_boundaries.dat"));
        //        loadBoundaries(StelFileMgr::findFile("data/kepler_winter_boundaries.dat"));
    } catch (std::runtime_error& e) {
        qWarning() << "ERROR loading kepler field of view boundaries file: " << e.what();
    }

    StelApp& app = StelApp::getInstance();

    // Create action for enable/disable & hook up signals
    QString groupName = N_("Plugin Key Bindings");
    StelGui* gui = dynamic_cast<StelGui*> (app.getGui());
    Q_ASSERT(gui);
    QAction* action = gui->addGuiActions("actionShow_Kepler_Mission",
            N_("Kepler mission"),
            "Ctrl+K",
            N_("Plugin Key Bindings"),
            true, false);
    action->setChecked(flagShowKeplerMission);
    connect(action, SIGNAL(toggled(bool)), this, SLOT(enableKeplerMission(bool)));
    gui->getGuiActions("actionShow_Kepler_Mission")->setChecked(markFader);
    // Add a toolbar button
    try {
        toolbarButton = new StelButton(
                NULL
                , QPixmap(":/KeplerMission/resources/bt_kepler_mission_on.png")
                , QPixmap(":/KeplerMission/resources/bt_kepler_mission_off.png")
                , QPixmap(":/graphicGui/glow32x32.png")
                , gui->getGuiActions("actionShow_Kepler_Mission"));
        gui->getButtonBar()->addButton(toolbarButton, "065-pluginsGroup");
    } catch (std::runtime_error& e) {
        qWarning() << "WARNING: unable create toolbar button for AngleMeasure plugin: " << e.what();
    }
    

    gui->addGuiActions("actionShow_KeplerMission_ConfigDialog", N_("Kepler Mission configuration window"), "", groupName, true, false);
    connect(gui->getGuiActions("actionShow_KeplerMission_ConfigDialog"), SIGNAL(toggled(bool)), keplerMissionConfigDialog, SLOT(setVisible(bool)));
    connect(keplerMissionConfigDialog, SIGNAL(visibleChanged(bool)), gui->getGuiActions("actionShow_KeplerMission_ConfigDialog"), SLOT(setChecked(bool)));
}

/*************************************************************************
 Draw our module. 
 *************************************************************************/
void KeplerMission::draw(StelCore* core) {

    if (markFader.getInterstate() <= 0.0) { return; }

    StelProjectorP prj = core->getProjection(StelCore::FrameJ2000, StelCore::RefractionOff); // Maybe conflict with Scenery3d branch. AW20120214
    StelPainter painter(prj);


    glColor4f(1, 0, 1, markFader.getInterstate());

    Vec3d startPoint, endPoint;
    std::vector<Vec3d> *points;

    glDisable(GL_TEXTURE_2D);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA); // Normal transparency mode
    glEnable(GL_BLEND);
    glEnable(GL_LINE_SMOOTH);

    for (unsigned int i = 0; i < allBoundarySegments.size(); i++) {
        points = allBoundarySegments[i];

        startPoint = points->at(0);
        endPoint = points->at(1);
        glDisable(GL_TEXTURE_2D);
        painter.drawGreatCircleArc(startPoint, endPoint, NULL);
    }
    glDisable(GL_LINE_SMOOTH);
}

void KeplerMission::update(double deltaTime)
{
        markFader.update((int)(deltaTime*1000));
}

void KeplerMission::enableKeplerMission(bool b)
{
    markFader = b;
}

bool KeplerMission::loadBoundaries(const QString& boundaryFile) {

    // delete existing boundaries if any exist
    vector<vector<Vec3d> *>::iterator iter;
    for (iter = allBoundarySegments.begin(); iter != allBoundarySegments.end(); ++iter) {
        delete (*iter);
    }
    allBoundarySegments.clear();

    qDebug() << "Loading Kepler boundary data ... ";

    QFile dataFile(boundaryFile);
    if (!dataFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qWarning() << "Boundary file " << boundaryFile << " not found";
        return false;
    }

    QTextStream istr(&dataFile);
    QString DE1i, RA1i, DE2i, RA2i, DE3i, RA3i, DE4i, RA4i, DE5i, RA5i;
    double DE1, RA1, DE2, RA2, DE3, RA3, DE4, RA4, DE5, RA5;
    Vec3d XYZ1, XYZ2, XYZ3, XYZ4, XYZ5;
    vector<Vec3d> *points1 = NULL;
    vector<Vec3d> *points2 = NULL;
    vector<Vec3d> *points3 = NULL;
    vector<Vec3d> *points4 = NULL;

    for (int i = 1; i <= 84; i++){
        points1 = new vector<Vec3d>;
        points2 = new vector<Vec3d>;
        points3 = new vector<Vec3d>;
        points4 = new vector<Vec3d>;

        istr >> RA1i >> DE1i >> RA2i >> DE2i >> RA3i >> DE3i >> RA4i >> DE4i >> RA5i >> DE5i; // read two entry (separated by space) at a time

        RA1 = StelUtils::getDecAngle(RA1i);
        DE1 = StelUtils::getDecAngle(DE1i);
        RA2 = StelUtils::getDecAngle(RA2i);
        DE2 = StelUtils::getDecAngle(DE2i);
        RA3 = StelUtils::getDecAngle(RA3i);
        DE3 = StelUtils::getDecAngle(DE3i);
        RA4 = StelUtils::getDecAngle(RA4i);
        DE4 = StelUtils::getDecAngle(DE4i);
        RA5 = StelUtils::getDecAngle(RA5i);
        DE5 = StelUtils::getDecAngle(DE5i);

        // Calc the Cartesian coord with RA and DE
        StelUtils::spheToRect(RA1, DE1, XYZ1);
        StelUtils::spheToRect(RA2, DE2, XYZ2);
        StelUtils::spheToRect(RA3, DE3, XYZ3);
        StelUtils::spheToRect(RA4, DE4, XYZ4);
        StelUtils::spheToRect(RA5, DE5, XYZ5);

        points1->push_back(XYZ1); // 1 to 2
        points1->push_back(XYZ2);
        allBoundarySegments.push_back(points1);

        points2->push_back(XYZ1); // 1 to 4
        points2->push_back(XYZ4);
        allBoundarySegments.push_back(points2);

        points3->push_back(XYZ2); // 2 to 5
        points3->push_back(XYZ5);
        allBoundarySegments.push_back(points3);

        points4->push_back(XYZ4); // 4 to 5
        points4->push_back(XYZ5);
        allBoundarySegments.push_back(points4);
    }

    dataFile.close();
    qDebug() << "Finished loading " << allBoundarySegments.size() << " kepler FOV boundary segments";
    return true;
}

