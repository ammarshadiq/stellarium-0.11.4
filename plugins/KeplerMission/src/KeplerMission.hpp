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

#ifndef KEPLERMISSION_HPP_
#define KEPLERMISSION_HPP_

#include "StelModule.hpp"
#include <QFont>
#include <vector>
#include "StelFader.hpp"

#include "StelObjectModule.hpp"

class StelButton;
class QPixmap;
class KeplerMissionDialog;

//class StelPainter;

//! This is an example of a plug-in which can be dynamically loaded into stellarium

class KeplerMission : public StelModule {
    Q_OBJECT
public:
    KeplerMission();
    virtual ~KeplerMission();

    ///////////////////////////////////////////////////////////////////////////
    // Methods defined in the StelModule class
    virtual void init();

//    virtual void update(double) {
//        ;
//    }
    virtual void update(double deltaTime);
    virtual void draw(StelCore* core);
    virtual double getCallOrder(StelModuleActionName actionName) const;
    virtual bool loadBoundaries(const QString& boundaryFile);

public slots:
    void enableKeplerMission(bool b);
    
private:
    bool flagShowKeplerMission;
    std::vector<std::vector<Vec3d> *> allBoundarySegments;
    StelButton* toolbarButton;
    LinearFader markFader;
    Vec3f markColor;
    Vec3d pos;
    
    KeplerMissionDialog* keplerMissionConfigDialog;
};


#include "fixx11h.h"
#include <QObject>
#include "StelPluginInterface.hpp"

//! This class is used by Qt to manage a plug-in interface

class KeplerMissionStelPluginInterface : public QObject, public StelPluginInterface {
    Q_OBJECT
    Q_INTERFACES(StelPluginInterface)
public:
    virtual StelModule* getStelModule() const;
    virtual StelPluginInfo getPluginInfo() const;

};

#endif /*KEPLERMISSION_HPP_*/
