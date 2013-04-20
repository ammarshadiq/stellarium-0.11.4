/********************************************************************************
** Form generated from reading UI file 'solarSystemManagerWindow.ui'
**
** Created: Sat Apr 20 14:28:15 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SOLARSYSTEMMANAGERWINDOW_H
#define UI_SOLARSYSTEMMANAGERWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "Dialog.hpp"

QT_BEGIN_NAMESPACE

class Ui_solarSystemManagerWindow
{
public:
    QVBoxLayout *verticalLayout;
    BarFrame *TitleBar;
    QHBoxLayout *hboxLayout;
    QSpacerItem *leftSpacer;
    QLabel *stelWindowTitle;
    QSpacerItem *rightSpacer;
    QPushButton *closeStelWindow;
    QTabWidget *tabWidget;
    QWidget *tabConfigurationFile;
    QVBoxLayout *verticalLayoutTabConfigurationFile;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayoutWarning;
    QLabel *labelFileWarning;
    QLineEdit *lineEditUserFilePath;
    QLabel *labelResetWarning;
    QPushButton *pushButtonReset;
    QGroupBox *groupBoxSystemFile;
    QVBoxLayout *verticalLayoutImportExport;
    QLabel *label;
    QPushButton *pushButtonCopyFile;
    QPushButton *pushButtonReplaceFile;
    QWidget *tabSolarSystem;
    QVBoxLayout *verticalLayoutTabSolarSystem;
    QGroupBox *groupBoxObjectsList;
    QVBoxLayout *verticalLayout_2;
    QListWidget *listWidgetObjects;
    QPushButton *pushButtonRemove;
    QGroupBox *groupBoxMPC;
    QVBoxLayout *verticalLayoutMPC;
    QLabel *labelMPC;
    QPushButton *pushButtonImportMPC;
    QSpacerItem *verticalSpacer;
    QWidget *tabAbout;
    QVBoxLayout *verticalLayout_4;
    QLabel *labelTitle;
    QLabel *labelVersion;
    QLabel *labelCopyright;
    QLabel *labelLicense;

    void setupUi(QWidget *solarSystemManagerWindow)
    {
        if (solarSystemManagerWindow->objectName().isEmpty())
            solarSystemManagerWindow->setObjectName(QString::fromUtf8("solarSystemManagerWindow"));
        solarSystemManagerWindow->resize(498, 478);
        verticalLayout = new QVBoxLayout(solarSystemManagerWindow);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        TitleBar = new BarFrame(solarSystemManagerWindow);
        TitleBar->setObjectName(QString::fromUtf8("TitleBar"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TitleBar->sizePolicy().hasHeightForWidth());
        TitleBar->setSizePolicy(sizePolicy);
        TitleBar->setMinimumSize(QSize(0, 25));
        TitleBar->setMaximumSize(QSize(16777215, 30));
        TitleBar->setFocusPolicy(Qt::NoFocus);
        TitleBar->setAutoFillBackground(false);
        TitleBar->setFrameShape(QFrame::StyledPanel);
        hboxLayout = new QHBoxLayout(TitleBar);
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 4, 0);
        leftSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(leftSpacer);

        stelWindowTitle = new QLabel(TitleBar);
        stelWindowTitle->setObjectName(QString::fromUtf8("stelWindowTitle"));

        hboxLayout->addWidget(stelWindowTitle);

        rightSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(rightSpacer);

        closeStelWindow = new QPushButton(TitleBar);
        closeStelWindow->setObjectName(QString::fromUtf8("closeStelWindow"));
        closeStelWindow->setMinimumSize(QSize(16, 16));
        closeStelWindow->setMaximumSize(QSize(16, 16));
        closeStelWindow->setFocusPolicy(Qt::NoFocus);

        hboxLayout->addWidget(closeStelWindow);


        verticalLayout->addWidget(TitleBar);

        tabWidget = new QTabWidget(solarSystemManagerWindow);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabConfigurationFile = new QWidget();
        tabConfigurationFile->setObjectName(QString::fromUtf8("tabConfigurationFile"));
        verticalLayoutTabConfigurationFile = new QVBoxLayout(tabConfigurationFile);
        verticalLayoutTabConfigurationFile->setSpacing(0);
        verticalLayoutTabConfigurationFile->setContentsMargins(0, 0, 0, 0);
        verticalLayoutTabConfigurationFile->setObjectName(QString::fromUtf8("verticalLayoutTabConfigurationFile"));
        groupBox = new QGroupBox(tabConfigurationFile);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayoutWarning = new QVBoxLayout(groupBox);
        verticalLayoutWarning->setContentsMargins(0, 0, 0, 0);
        verticalLayoutWarning->setObjectName(QString::fromUtf8("verticalLayoutWarning"));
        labelFileWarning = new QLabel(groupBox);
        labelFileWarning->setObjectName(QString::fromUtf8("labelFileWarning"));
        labelFileWarning->setWordWrap(true);

        verticalLayoutWarning->addWidget(labelFileWarning);

        lineEditUserFilePath = new QLineEdit(groupBox);
        lineEditUserFilePath->setObjectName(QString::fromUtf8("lineEditUserFilePath"));
        lineEditUserFilePath->setReadOnly(true);

        verticalLayoutWarning->addWidget(lineEditUserFilePath);

        labelResetWarning = new QLabel(groupBox);
        labelResetWarning->setObjectName(QString::fromUtf8("labelResetWarning"));
        labelResetWarning->setWordWrap(true);

        verticalLayoutWarning->addWidget(labelResetWarning);

        pushButtonReset = new QPushButton(groupBox);
        pushButtonReset->setObjectName(QString::fromUtf8("pushButtonReset"));

        verticalLayoutWarning->addWidget(pushButtonReset);


        verticalLayoutTabConfigurationFile->addWidget(groupBox);

        groupBoxSystemFile = new QGroupBox(tabConfigurationFile);
        groupBoxSystemFile->setObjectName(QString::fromUtf8("groupBoxSystemFile"));
        verticalLayoutImportExport = new QVBoxLayout(groupBoxSystemFile);
        verticalLayoutImportExport->setObjectName(QString::fromUtf8("verticalLayoutImportExport"));
        label = new QLabel(groupBoxSystemFile);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        verticalLayoutImportExport->addWidget(label);

        pushButtonCopyFile = new QPushButton(groupBoxSystemFile);
        pushButtonCopyFile->setObjectName(QString::fromUtf8("pushButtonCopyFile"));

        verticalLayoutImportExport->addWidget(pushButtonCopyFile);

        pushButtonReplaceFile = new QPushButton(groupBoxSystemFile);
        pushButtonReplaceFile->setObjectName(QString::fromUtf8("pushButtonReplaceFile"));

        verticalLayoutImportExport->addWidget(pushButtonReplaceFile);


        verticalLayoutTabConfigurationFile->addWidget(groupBoxSystemFile);

        tabWidget->addTab(tabConfigurationFile, QString());
        tabSolarSystem = new QWidget();
        tabSolarSystem->setObjectName(QString::fromUtf8("tabSolarSystem"));
        verticalLayoutTabSolarSystem = new QVBoxLayout(tabSolarSystem);
        verticalLayoutTabSolarSystem->setSpacing(0);
        verticalLayoutTabSolarSystem->setContentsMargins(0, 0, 0, 0);
        verticalLayoutTabSolarSystem->setObjectName(QString::fromUtf8("verticalLayoutTabSolarSystem"));
        groupBoxObjectsList = new QGroupBox(tabSolarSystem);
        groupBoxObjectsList->setObjectName(QString::fromUtf8("groupBoxObjectsList"));
        verticalLayout_2 = new QVBoxLayout(groupBoxObjectsList);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        listWidgetObjects = new QListWidget(groupBoxObjectsList);
        listWidgetObjects->setObjectName(QString::fromUtf8("listWidgetObjects"));
        listWidgetObjects->setSortingEnabled(true);

        verticalLayout_2->addWidget(listWidgetObjects);

        pushButtonRemove = new QPushButton(groupBoxObjectsList);
        pushButtonRemove->setObjectName(QString::fromUtf8("pushButtonRemove"));

        verticalLayout_2->addWidget(pushButtonRemove);


        verticalLayoutTabSolarSystem->addWidget(groupBoxObjectsList);

        groupBoxMPC = new QGroupBox(tabSolarSystem);
        groupBoxMPC->setObjectName(QString::fromUtf8("groupBoxMPC"));
        verticalLayoutMPC = new QVBoxLayout(groupBoxMPC);
        verticalLayoutMPC->setContentsMargins(0, 0, 0, 0);
        verticalLayoutMPC->setObjectName(QString::fromUtf8("verticalLayoutMPC"));
        labelMPC = new QLabel(groupBoxMPC);
        labelMPC->setObjectName(QString::fromUtf8("labelMPC"));
        labelMPC->setText(QString::fromUtf8("You can import comet and asteroid data formatted in the export formats of the IAU's <a href=\"http://www.minorplanetcenter.net/\">Minor Planet Center</a> (MPC). You can import files with lists of objects, download such lists from the Internet or search the online Minor Planet and Comet Ephemeris Service (MPES)."));
        labelMPC->setTextFormat(Qt::AutoText);
        labelMPC->setWordWrap(true);
        labelMPC->setOpenExternalLinks(true);

        verticalLayoutMPC->addWidget(labelMPC);

        pushButtonImportMPC = new QPushButton(groupBoxMPC);
        pushButtonImportMPC->setObjectName(QString::fromUtf8("pushButtonImportMPC"));

        verticalLayoutMPC->addWidget(pushButtonImportMPC);


        verticalLayoutTabSolarSystem->addWidget(groupBoxMPC);

        verticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutTabSolarSystem->addItem(verticalSpacer);

        tabWidget->addTab(tabSolarSystem, QString());
        tabAbout = new QWidget();
        tabAbout->setObjectName(QString::fromUtf8("tabAbout"));
        verticalLayout_4 = new QVBoxLayout(tabAbout);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        labelTitle = new QLabel(tabAbout);
        labelTitle->setObjectName(QString::fromUtf8("labelTitle"));
        labelTitle->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: bold 18pt ;\n"
"}"));
        labelTitle->setText(QString::fromUtf8("Solar System Editor plug-in"));

        verticalLayout_4->addWidget(labelTitle);

        labelVersion = new QLabel(tabAbout);
        labelVersion->setObjectName(QString::fromUtf8("labelVersion"));
        labelVersion->setText(QString::fromUtf8("Version %1"));

        verticalLayout_4->addWidget(labelVersion);

        labelCopyright = new QLabel(tabAbout);
        labelCopyright->setObjectName(QString::fromUtf8("labelCopyright"));
        labelCopyright->setText(QString::fromUtf8("Copyright &copy; 2010 Bogdan Marinov"));
        labelCopyright->setTextFormat(Qt::RichText);

        verticalLayout_4->addWidget(labelCopyright);

        labelLicense = new QLabel(tabAbout);
        labelLicense->setObjectName(QString::fromUtf8("labelLicense"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelLicense->sizePolicy().hasHeightForWidth());
        labelLicense->setSizePolicy(sizePolicy1);
        labelLicense->setText(QString::fromUtf8("This program is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation; either version 2 of the License, or (at your option) any later version.\n"
"\n"
"This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.\n"
"\n"
"You should have received a copy of the GNU General Public License along with this program. If not, see http://www.gnu.org/licenses/."));
        labelLicense->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        labelLicense->setWordWrap(true);
        labelLicense->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout_4->addWidget(labelLicense);

        tabWidget->addTab(tabAbout, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(solarSystemManagerWindow);

        QMetaObject::connectSlotsByName(solarSystemManagerWindow);
    } // setupUi

    void retranslateUi(QWidget *solarSystemManagerWindow)
    {
        stelWindowTitle->setText(QApplication::translate("solarSystemManagerWindow", "Solar System objects", 0, QApplication::UnicodeUTF8));
        closeStelWindow->setText(QString());
        groupBox->setTitle(QApplication::translate("solarSystemManagerWindow", "Warning", 0, QApplication::UnicodeUTF8));
        labelFileWarning->setText(QApplication::translate("solarSystemManagerWindow", "This plug-in uses a custom Solar System configuration file. If something goes wrong and Stellarium crashes and/or doesn't start, you can delete manually that file from:", 0, QApplication::UnicodeUTF8));
        labelResetWarning->setText(QApplication::translate("solarSystemManagerWindow", "You can also reset all changes and return to the default configuration:", 0, QApplication::UnicodeUTF8));
        pushButtonReset->setText(QApplication::translate("solarSystemManagerWindow", "Reset to defaults", 0, QApplication::UnicodeUTF8));
        groupBoxSystemFile->setTitle(QApplication::translate("solarSystemManagerWindow", "Copy/replace the Solar System file", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("solarSystemManagerWindow", "You can create a backup copy of the custom Solar System configuration file in a convenient location, or replace it with such a copy.", 0, QApplication::UnicodeUTF8));
        pushButtonCopyFile->setText(QApplication::translate("solarSystemManagerWindow", "Copy the Solar System file...", 0, QApplication::UnicodeUTF8));
        pushButtonReplaceFile->setText(QApplication::translate("solarSystemManagerWindow", "Replace the Solar System file...", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabConfigurationFile), QApplication::translate("solarSystemManagerWindow", "Configuration file", 0, QApplication::UnicodeUTF8));
        groupBoxObjectsList->setTitle(QApplication::translate("solarSystemManagerWindow", "Solar System objects", 0, QApplication::UnicodeUTF8));
        pushButtonRemove->setText(QApplication::translate("solarSystemManagerWindow", "Remove", 0, QApplication::UnicodeUTF8));
        groupBoxMPC->setTitle(QApplication::translate("solarSystemManagerWindow", "Add new Solar System objects", 0, QApplication::UnicodeUTF8));
        pushButtonImportMPC->setText(QApplication::translate("solarSystemManagerWindow", "Import orbital elements in MPC format...", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabSolarSystem), QApplication::translate("solarSystemManagerWindow", "Solar System", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabAbout), QApplication::translate("solarSystemManagerWindow", "About", "tab in plugin windows", QApplication::UnicodeUTF8));
        Q_UNUSED(solarSystemManagerWindow);
    } // retranslateUi

};

namespace Ui {
    class solarSystemManagerWindow: public Ui_solarSystemManagerWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SOLARSYSTEMMANAGERWINDOW_H
