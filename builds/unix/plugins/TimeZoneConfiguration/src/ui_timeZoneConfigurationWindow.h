/********************************************************************************
** Form generated from reading UI file 'timeZoneConfigurationWindow.ui'
**
** Created: Sat Apr 20 14:29:34 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIMEZONECONFIGURATIONWINDOW_H
#define UI_TIMEZONECONFIGURATIONWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "Dialog.hpp"

QT_BEGIN_NAMESPACE

class Ui_timeZoneConfigurationWindowForm
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
    QWidget *tabTimeZone;
    QVBoxLayout *verticalLayoutTimeZone;
    QGroupBox *groupBoxTimeZone;
    QGridLayout *gridLayoutCurrent;
    QLabel *labelTimeZoneInfo;
    QRadioButton *radioButtonLocalSettings;
    QRadioButton *radioButtonUtc;
    QRadioButton *radioButtonOffset;
    QDoubleSpinBox *doubleSpinBoxOffset;
    QLabel *labelOffset;
    QRadioButton *radioButtonUserDefined;
    QFrame *frameUserDefined;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEditUserDefined;
    QPushButton *pushButtonEditTimeZone;
    QPushButton *pushButtonSave;
    QLabel *labelRestart;
    QSpacerItem *verticalSpacerTimeZone;
    QWidget *tabDisplayFormats;
    QVBoxLayout *verticalLayoutTabTimeFormat;
    QGroupBox *groupBoxDisplayFormats;
    QVBoxLayout *verticalLayout_4;
    QLabel *labelDisplayFormats;
    QGroupBox *groupBoxTimeFormat;
    QVBoxLayout *verticalLayoutTimeFormat;
    QRadioButton *radioButtonTimeDefault;
    QRadioButton *radioButtonTime12Hour;
    QRadioButton *radioButtonTime24Hour;
    QGroupBox *groupBoxDateFormat;
    QVBoxLayout *verticalLayoutDateFormat;
    QRadioButton *radioButtonDateDefault;
    QRadioButton *radioButtonDateYMD;
    QRadioButton *radioButtonDateDMY;
    QRadioButton *radioButtonDateMDY;
    QSpacerItem *verticalSpacerDisplayFormats;
    QWidget *tabAbout;
    QVBoxLayout *verticalLayout_3;
    QLabel *labelTitle;
    QLabel *labelVersion;
    QLabel *labelCopyright;
    QLabel *labelLicense;

    void setupUi(QWidget *timeZoneConfigurationWindowForm)
    {
        if (timeZoneConfigurationWindowForm->objectName().isEmpty())
            timeZoneConfigurationWindowForm->setObjectName(QString::fromUtf8("timeZoneConfigurationWindowForm"));
        timeZoneConfigurationWindowForm->resize(448, 398);
        verticalLayout = new QVBoxLayout(timeZoneConfigurationWindowForm);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        TitleBar = new BarFrame(timeZoneConfigurationWindowForm);
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

        tabWidget = new QTabWidget(timeZoneConfigurationWindowForm);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabTimeZone = new QWidget();
        tabTimeZone->setObjectName(QString::fromUtf8("tabTimeZone"));
        verticalLayoutTimeZone = new QVBoxLayout(tabTimeZone);
        verticalLayoutTimeZone->setSpacing(0);
        verticalLayoutTimeZone->setContentsMargins(0, 0, 0, 0);
        verticalLayoutTimeZone->setObjectName(QString::fromUtf8("verticalLayoutTimeZone"));
        groupBoxTimeZone = new QGroupBox(tabTimeZone);
        groupBoxTimeZone->setObjectName(QString::fromUtf8("groupBoxTimeZone"));
        gridLayoutCurrent = new QGridLayout(groupBoxTimeZone);
        gridLayoutCurrent->setContentsMargins(0, 0, 0, 0);
        gridLayoutCurrent->setObjectName(QString::fromUtf8("gridLayoutCurrent"));
        gridLayoutCurrent->setVerticalSpacing(8);
        labelTimeZoneInfo = new QLabel(groupBoxTimeZone);
        labelTimeZoneInfo->setObjectName(QString::fromUtf8("labelTimeZoneInfo"));
        labelTimeZoneInfo->setWordWrap(true);

        gridLayoutCurrent->addWidget(labelTimeZoneInfo, 0, 0, 1, 2);

        radioButtonLocalSettings = new QRadioButton(groupBoxTimeZone);
        radioButtonLocalSettings->setObjectName(QString::fromUtf8("radioButtonLocalSettings"));

        gridLayoutCurrent->addWidget(radioButtonLocalSettings, 1, 0, 1, 2);

        radioButtonUtc = new QRadioButton(groupBoxTimeZone);
        radioButtonUtc->setObjectName(QString::fromUtf8("radioButtonUtc"));

        gridLayoutCurrent->addWidget(radioButtonUtc, 2, 0, 1, 2);

        radioButtonOffset = new QRadioButton(groupBoxTimeZone);
        radioButtonOffset->setObjectName(QString::fromUtf8("radioButtonOffset"));

        gridLayoutCurrent->addWidget(radioButtonOffset, 3, 0, 1, 1);

        doubleSpinBoxOffset = new QDoubleSpinBox(groupBoxTimeZone);
        doubleSpinBoxOffset->setObjectName(QString::fromUtf8("doubleSpinBoxOffset"));
        doubleSpinBoxOffset->setWrapping(true);
        doubleSpinBoxOffset->setDecimals(2);
        doubleSpinBoxOffset->setMinimum(-24);
        doubleSpinBoxOffset->setMaximum(24);
        doubleSpinBoxOffset->setSingleStep(0.25);

        gridLayoutCurrent->addWidget(doubleSpinBoxOffset, 3, 1, 1, 1);

        labelOffset = new QLabel(groupBoxTimeZone);
        labelOffset->setObjectName(QString::fromUtf8("labelOffset"));
        labelOffset->setAlignment(Qt::AlignCenter);

        gridLayoutCurrent->addWidget(labelOffset, 4, 0, 1, 2);

        radioButtonUserDefined = new QRadioButton(groupBoxTimeZone);
        radioButtonUserDefined->setObjectName(QString::fromUtf8("radioButtonUserDefined"));

        gridLayoutCurrent->addWidget(radioButtonUserDefined, 5, 0, 1, 1);

        frameUserDefined = new QFrame(groupBoxTimeZone);
        frameUserDefined->setObjectName(QString::fromUtf8("frameUserDefined"));
        horizontalLayout = new QHBoxLayout(frameUserDefined);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lineEditUserDefined = new QLineEdit(frameUserDefined);
        lineEditUserDefined->setObjectName(QString::fromUtf8("lineEditUserDefined"));

        horizontalLayout->addWidget(lineEditUserDefined);

        pushButtonEditTimeZone = new QPushButton(frameUserDefined);
        pushButtonEditTimeZone->setObjectName(QString::fromUtf8("pushButtonEditTimeZone"));
        pushButtonEditTimeZone->setText(QString::fromUtf8("..."));

        horizontalLayout->addWidget(pushButtonEditTimeZone);


        gridLayoutCurrent->addWidget(frameUserDefined, 5, 1, 1, 1);

        pushButtonSave = new QPushButton(groupBoxTimeZone);
        pushButtonSave->setObjectName(QString::fromUtf8("pushButtonSave"));

        gridLayoutCurrent->addWidget(pushButtonSave, 7, 0, 1, 2);

        labelRestart = new QLabel(groupBoxTimeZone);
        labelRestart->setObjectName(QString::fromUtf8("labelRestart"));
        labelRestart->setAlignment(Qt::AlignCenter);
        labelRestart->setWordWrap(true);

        gridLayoutCurrent->addWidget(labelRestart, 8, 0, 1, 2);

        verticalSpacerTimeZone = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayoutCurrent->addItem(verticalSpacerTimeZone, 9, 0, 1, 2);


        verticalLayoutTimeZone->addWidget(groupBoxTimeZone);

        tabWidget->addTab(tabTimeZone, QString());
        tabDisplayFormats = new QWidget();
        tabDisplayFormats->setObjectName(QString::fromUtf8("tabDisplayFormats"));
        verticalLayoutTabTimeFormat = new QVBoxLayout(tabDisplayFormats);
        verticalLayoutTabTimeFormat->setSpacing(0);
        verticalLayoutTabTimeFormat->setContentsMargins(0, 0, 0, 0);
        verticalLayoutTabTimeFormat->setObjectName(QString::fromUtf8("verticalLayoutTabTimeFormat"));
        groupBoxDisplayFormats = new QGroupBox(tabDisplayFormats);
        groupBoxDisplayFormats->setObjectName(QString::fromUtf8("groupBoxDisplayFormats"));
        groupBoxDisplayFormats->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        verticalLayout_4 = new QVBoxLayout(groupBoxDisplayFormats);
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        labelDisplayFormats = new QLabel(groupBoxDisplayFormats);
        labelDisplayFormats->setObjectName(QString::fromUtf8("labelDisplayFormats"));
        labelDisplayFormats->setWordWrap(true);

        verticalLayout_4->addWidget(labelDisplayFormats);

        groupBoxTimeFormat = new QGroupBox(groupBoxDisplayFormats);
        groupBoxTimeFormat->setObjectName(QString::fromUtf8("groupBoxTimeFormat"));
        verticalLayoutTimeFormat = new QVBoxLayout(groupBoxTimeFormat);
        verticalLayoutTimeFormat->setContentsMargins(0, 0, 0, 0);
        verticalLayoutTimeFormat->setObjectName(QString::fromUtf8("verticalLayoutTimeFormat"));
        radioButtonTimeDefault = new QRadioButton(groupBoxTimeFormat);
        radioButtonTimeDefault->setObjectName(QString::fromUtf8("radioButtonTimeDefault"));

        verticalLayoutTimeFormat->addWidget(radioButtonTimeDefault);

        radioButtonTime12Hour = new QRadioButton(groupBoxTimeFormat);
        radioButtonTime12Hour->setObjectName(QString::fromUtf8("radioButtonTime12Hour"));

        verticalLayoutTimeFormat->addWidget(radioButtonTime12Hour);

        radioButtonTime24Hour = new QRadioButton(groupBoxTimeFormat);
        radioButtonTime24Hour->setObjectName(QString::fromUtf8("radioButtonTime24Hour"));

        verticalLayoutTimeFormat->addWidget(radioButtonTime24Hour);


        verticalLayout_4->addWidget(groupBoxTimeFormat);

        groupBoxDateFormat = new QGroupBox(groupBoxDisplayFormats);
        groupBoxDateFormat->setObjectName(QString::fromUtf8("groupBoxDateFormat"));
        verticalLayoutDateFormat = new QVBoxLayout(groupBoxDateFormat);
        verticalLayoutDateFormat->setContentsMargins(0, 0, 0, 0);
        verticalLayoutDateFormat->setObjectName(QString::fromUtf8("verticalLayoutDateFormat"));
        radioButtonDateDefault = new QRadioButton(groupBoxDateFormat);
        radioButtonDateDefault->setObjectName(QString::fromUtf8("radioButtonDateDefault"));

        verticalLayoutDateFormat->addWidget(radioButtonDateDefault);

        radioButtonDateYMD = new QRadioButton(groupBoxDateFormat);
        radioButtonDateYMD->setObjectName(QString::fromUtf8("radioButtonDateYMD"));

        verticalLayoutDateFormat->addWidget(radioButtonDateYMD);

        radioButtonDateDMY = new QRadioButton(groupBoxDateFormat);
        radioButtonDateDMY->setObjectName(QString::fromUtf8("radioButtonDateDMY"));

        verticalLayoutDateFormat->addWidget(radioButtonDateDMY);

        radioButtonDateMDY = new QRadioButton(groupBoxDateFormat);
        radioButtonDateMDY->setObjectName(QString::fromUtf8("radioButtonDateMDY"));

        verticalLayoutDateFormat->addWidget(radioButtonDateMDY);


        verticalLayout_4->addWidget(groupBoxDateFormat);


        verticalLayoutTabTimeFormat->addWidget(groupBoxDisplayFormats);

        verticalSpacerDisplayFormats = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutTabTimeFormat->addItem(verticalSpacerDisplayFormats);

        tabWidget->addTab(tabDisplayFormats, QString());
        tabAbout = new QWidget();
        tabAbout->setObjectName(QString::fromUtf8("tabAbout"));
        verticalLayout_3 = new QVBoxLayout(tabAbout);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        labelTitle = new QLabel(tabAbout);
        labelTitle->setObjectName(QString::fromUtf8("labelTitle"));
        labelTitle->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: bold 18pt ;\n"
"}"));
        labelTitle->setText(QString::fromUtf8("Time Zone plug-in"));

        verticalLayout_3->addWidget(labelTitle);

        labelVersion = new QLabel(tabAbout);
        labelVersion->setObjectName(QString::fromUtf8("labelVersion"));
        labelVersion->setText(QString::fromUtf8("Version %1"));

        verticalLayout_3->addWidget(labelVersion);

        labelCopyright = new QLabel(tabAbout);
        labelCopyright->setObjectName(QString::fromUtf8("labelCopyright"));
        labelCopyright->setText(QString::fromUtf8("Copyright &copy; 2010 Bogdan Marinov"));
        labelCopyright->setTextFormat(Qt::RichText);

        verticalLayout_3->addWidget(labelCopyright);

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

        verticalLayout_3->addWidget(labelLicense);

        tabWidget->addTab(tabAbout, QString());

        verticalLayout->addWidget(tabWidget);

        QWidget::setTabOrder(tabWidget, radioButtonLocalSettings);
        QWidget::setTabOrder(radioButtonLocalSettings, radioButtonUtc);
        QWidget::setTabOrder(radioButtonUtc, radioButtonOffset);
        QWidget::setTabOrder(radioButtonOffset, doubleSpinBoxOffset);
        QWidget::setTabOrder(doubleSpinBoxOffset, radioButtonUserDefined);
        QWidget::setTabOrder(radioButtonUserDefined, lineEditUserDefined);
        QWidget::setTabOrder(lineEditUserDefined, pushButtonEditTimeZone);
        QWidget::setTabOrder(pushButtonEditTimeZone, pushButtonSave);
        QWidget::setTabOrder(pushButtonSave, radioButtonTimeDefault);
        QWidget::setTabOrder(radioButtonTimeDefault, radioButtonTime12Hour);
        QWidget::setTabOrder(radioButtonTime12Hour, radioButtonTime24Hour);
        QWidget::setTabOrder(radioButtonTime24Hour, radioButtonDateDefault);
        QWidget::setTabOrder(radioButtonDateDefault, radioButtonDateYMD);
        QWidget::setTabOrder(radioButtonDateYMD, radioButtonDateDMY);
        QWidget::setTabOrder(radioButtonDateDMY, radioButtonDateMDY);

        retranslateUi(timeZoneConfigurationWindowForm);
        QObject::connect(radioButtonUserDefined, SIGNAL(toggled(bool)), frameUserDefined, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(timeZoneConfigurationWindowForm);
    } // setupUi

    void retranslateUi(QWidget *timeZoneConfigurationWindowForm)
    {
        stelWindowTitle->setText(QApplication::translate("timeZoneConfigurationWindowForm", "Time zone", 0, QApplication::UnicodeUTF8));
        closeStelWindow->setText(QString());
        groupBoxTimeZone->setTitle(QApplication::translate("timeZoneConfigurationWindowForm", "Time zone", 0, QApplication::UnicodeUTF8));
        labelTimeZoneInfo->setText(QApplication::translate("timeZoneConfigurationWindowForm", "By default, the time displayed in Stellarium is interpreted as the local time in the system's time zone, not in the displayed location's time zone. This behaviour can be changed by changing Stellarium's global time zone settings.", 0, QApplication::UnicodeUTF8));
        radioButtonLocalSettings->setText(QApplication::translate("timeZoneConfigurationWindowForm", "Use system settings (default)", 0, QApplication::UnicodeUTF8));
        radioButtonUtc->setText(QApplication::translate("timeZoneConfigurationWindowForm", "Universal Coordinated Time (UTC)", 0, QApplication::UnicodeUTF8));
        radioButtonOffset->setText(QApplication::translate("timeZoneConfigurationWindowForm", "Offset from UTC (hours):", 0, QApplication::UnicodeUTF8));
        labelOffset->setText(QApplication::translate("timeZoneConfigurationWindowForm", "(offset = local time - UTC time)", 0, QApplication::UnicodeUTF8));
        radioButtonUserDefined->setText(QApplication::translate("timeZoneConfigurationWindowForm", "User-defined:", 0, QApplication::UnicodeUTF8));
        pushButtonSave->setText(QApplication::translate("timeZoneConfigurationWindowForm", "Save settings", 0, QApplication::UnicodeUTF8));
        labelRestart->setText(QApplication::translate("timeZoneConfigurationWindowForm", "Any changes will take effect the next time Stellarium is started.", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabTimeZone), QApplication::translate("timeZoneConfigurationWindowForm", "Time zone", 0, QApplication::UnicodeUTF8));
        groupBoxDisplayFormats->setTitle(QApplication::translate("timeZoneConfigurationWindowForm", "Display formats", 0, QApplication::UnicodeUTF8));
        labelDisplayFormats->setText(QApplication::translate("timeZoneConfigurationWindowForm", "These settings control the way time and date are displayed in the bottom bar.", 0, QApplication::UnicodeUTF8));
        groupBoxTimeFormat->setTitle(QApplication::translate("timeZoneConfigurationWindowForm", "Time display format", 0, QApplication::UnicodeUTF8));
        radioButtonTimeDefault->setText(QApplication::translate("timeZoneConfigurationWindowForm", "System default", 0, QApplication::UnicodeUTF8));
        radioButtonTime12Hour->setText(QApplication::translate("timeZoneConfigurationWindowForm", "12-hour format", 0, QApplication::UnicodeUTF8));
        radioButtonTime24Hour->setText(QApplication::translate("timeZoneConfigurationWindowForm", "24-hour format", 0, QApplication::UnicodeUTF8));
        groupBoxDateFormat->setTitle(QApplication::translate("timeZoneConfigurationWindowForm", "Date display format", 0, QApplication::UnicodeUTF8));
        radioButtonDateDefault->setText(QApplication::translate("timeZoneConfigurationWindowForm", "System default", 0, QApplication::UnicodeUTF8));
        radioButtonDateYMD->setText(QApplication::translate("timeZoneConfigurationWindowForm", "yyyy-mm-dd (ISO 8601)", 0, QApplication::UnicodeUTF8));
        radioButtonDateDMY->setText(QApplication::translate("timeZoneConfigurationWindowForm", "dd-mm-yyyy", 0, QApplication::UnicodeUTF8));
        radioButtonDateMDY->setText(QApplication::translate("timeZoneConfigurationWindowForm", "mm-dd-yyyy", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabDisplayFormats), QApplication::translate("timeZoneConfigurationWindowForm", "Display formats", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabAbout), QApplication::translate("timeZoneConfigurationWindowForm", "About", "tab in plugin windows", QApplication::UnicodeUTF8));
        Q_UNUSED(timeZoneConfigurationWindowForm);
    } // retranslateUi

};

namespace Ui {
    class timeZoneConfigurationWindowForm: public Ui_timeZoneConfigurationWindowForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIMEZONECONFIGURATIONWINDOW_H
