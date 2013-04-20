/********************************************************************************
** Form generated from reading UI file 'KeplerMissionDialog.ui'
**
** Created: Sat Apr 20 14:27:17 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KEPLERMISSIONDIALOG_H
#define UI_KEPLERMISSIONDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "Dialog.hpp"

QT_BEGIN_NAMESPACE

class Ui_KeplerMissionDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    BarFrame *TitleBar;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QLabel *stelWindowTitle;
    QSpacerItem *spacerItem1;
    QPushButton *closeStelWindow;
    QTabWidget *tabs;
    QWidget *settingsTab;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *updatesGroup;
    QVBoxLayout *verticalLayout_12;
    QGridLayout *gridLayout;
    QLabel *updateFrequencyLabel;
    QLabel *nextUpdateLabel;
    QSpacerItem *horizontalSpacer;
    QLabel *lastUpdateLabel;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_7;
    QWidget *aboutTab;
    QVBoxLayout *verticalLayout_11;
    QTextBrowser *aboutTextBrowser;

    void setupUi(QWidget *KeplerMissionDialog)
    {
        if (KeplerMissionDialog->objectName().isEmpty())
            KeplerMissionDialog->setObjectName(QString::fromUtf8("KeplerMissionDialog"));
        KeplerMissionDialog->resize(530, 483);
        verticalLayout_2 = new QVBoxLayout(KeplerMissionDialog);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        TitleBar = new BarFrame(KeplerMissionDialog);
        TitleBar->setObjectName(QString::fromUtf8("TitleBar"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TitleBar->sizePolicy().hasHeightForWidth());
        TitleBar->setSizePolicy(sizePolicy);
        TitleBar->setMinimumSize(QSize(530, 25));
        TitleBar->setMaximumSize(QSize(16777215, 25));
        TitleBar->setFocusPolicy(Qt::NoFocus);
        TitleBar->setAutoFillBackground(false);
        TitleBar->setFrameShape(QFrame::StyledPanel);
        hboxLayout = new QHBoxLayout(TitleBar);
        hboxLayout->setSpacing(0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 4, 0);
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        stelWindowTitle = new QLabel(TitleBar);
        stelWindowTitle->setObjectName(QString::fromUtf8("stelWindowTitle"));

        hboxLayout->addWidget(stelWindowTitle);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);

        closeStelWindow = new QPushButton(TitleBar);
        closeStelWindow->setObjectName(QString::fromUtf8("closeStelWindow"));
        closeStelWindow->setMinimumSize(QSize(16, 16));
        closeStelWindow->setMaximumSize(QSize(16, 16));
        closeStelWindow->setFocusPolicy(Qt::NoFocus);

        hboxLayout->addWidget(closeStelWindow);


        verticalLayout_2->addWidget(TitleBar);

        tabs = new QTabWidget(KeplerMissionDialog);
        tabs->setObjectName(QString::fromUtf8("tabs"));
        tabs->setDocumentMode(false);
        settingsTab = new QWidget();
        settingsTab->setObjectName(QString::fromUtf8("settingsTab"));
        verticalLayout_3 = new QVBoxLayout(settingsTab);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        updatesGroup = new QGroupBox(settingsTab);
        updatesGroup->setObjectName(QString::fromUtf8("updatesGroup"));
        updatesGroup->setFlat(true);
        updatesGroup->setCheckable(false);
        verticalLayout_12 = new QVBoxLayout(updatesGroup);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        updateFrequencyLabel = new QLabel(updatesGroup);
        updateFrequencyLabel->setObjectName(QString::fromUtf8("updateFrequencyLabel"));

        gridLayout->addWidget(updateFrequencyLabel, 1, 0, 1, 1);

        nextUpdateLabel = new QLabel(updatesGroup);
        nextUpdateLabel->setObjectName(QString::fromUtf8("nextUpdateLabel"));

        gridLayout->addWidget(nextUpdateLabel, 2, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(17, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 1, 1, 1);

        lastUpdateLabel = new QLabel(updatesGroup);
        lastUpdateLabel->setObjectName(QString::fromUtf8("lastUpdateLabel"));

        gridLayout->addWidget(lastUpdateLabel, 0, 0, 1, 1);


        verticalLayout_12->addLayout(gridLayout);


        verticalLayout_3->addWidget(updatesGroup);

        verticalSpacer_3 = new QSpacerItem(20, 120, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));

        verticalLayout_3->addLayout(horizontalLayout_7);

        tabs->addTab(settingsTab, QString());
        aboutTab = new QWidget();
        aboutTab->setObjectName(QString::fromUtf8("aboutTab"));
        verticalLayout_11 = new QVBoxLayout(aboutTab);
        verticalLayout_11->setSpacing(9);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        aboutTextBrowser = new QTextBrowser(aboutTab);
        aboutTextBrowser->setObjectName(QString::fromUtf8("aboutTextBrowser"));
        aboutTextBrowser->setOpenExternalLinks(true);
        aboutTextBrowser->setOpenLinks(true);

        verticalLayout_11->addWidget(aboutTextBrowser);

        tabs->addTab(aboutTab, QString());

        verticalLayout_2->addWidget(tabs);


        retranslateUi(KeplerMissionDialog);

        tabs->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(KeplerMissionDialog);
    } // setupUi

    void retranslateUi(QWidget *KeplerMissionDialog)
    {
        KeplerMissionDialog->setWindowTitle(QApplication::translate("KeplerMissionDialog", "Exoplanets Configuration", 0, QApplication::UnicodeUTF8));
        stelWindowTitle->setText(QApplication::translate("KeplerMissionDialog", "Kepler Mission Plug-in Configuration", 0, QApplication::UnicodeUTF8));
        closeStelWindow->setText(QString());
        updatesGroup->setTitle(QApplication::translate("KeplerMissionDialog", "Update Kepler Mission data from Internet", 0, QApplication::UnicodeUTF8));
        updateFrequencyLabel->setText(QApplication::translate("KeplerMissionDialog", "Update frequency (hours):", 0, QApplication::UnicodeUTF8));
        nextUpdateLabel->setText(QApplication::translate("KeplerMissionDialog", "[next update info]", 0, QApplication::UnicodeUTF8));
        lastUpdateLabel->setText(QApplication::translate("KeplerMissionDialog", "Last update:", 0, QApplication::UnicodeUTF8));
        tabs->setTabText(tabs->indexOf(settingsTab), QApplication::translate("KeplerMissionDialog", "Settings", 0, QApplication::UnicodeUTF8));
        tabs->setTabText(tabs->indexOf(aboutTab), QApplication::translate("KeplerMissionDialog", "About", "tab in plugin windows", QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class KeplerMissionDialog: public Ui_KeplerMissionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KEPLERMISSIONDIALOG_H
