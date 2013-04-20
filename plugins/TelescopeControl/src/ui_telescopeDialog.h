/********************************************************************************
** Form generated from reading UI file 'telescopeDialog.ui'
**
** Created: Sun Oct 28 11:03:43 2012
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELESCOPEDIALOG_H
#define UI_TELESCOPEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QTextBrowser>
#include <QtGui/QTreeView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "Dialog.hpp"

QT_BEGIN_NAMESPACE

class Ui_telescopeDialogForm
{
public:
    QVBoxLayout *verticalLayoutTelescopeDialog;
    BarFrame *TitleBar;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QLabel *stelWindowTitle;
    QSpacerItem *spacerItem1;
    QPushButton *closeStelWindow;
    QTabWidget *tabs;
    QWidget *tabTelescopes;
    QVBoxLayout *verticalLayoutTabTelescopes;
    QGroupBox *groupBoxTelescopes;
    QVBoxLayout *verticalLayout_2;
    QTreeView *telescopeTreeView;
    QFrame *frameButtons;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonChangeStatus;
    QPushButton *pushButtonConfigure;
    QPushButton *pushButtonAdd;
    QPushButton *pushButtonRemove;
    QLabel *labelWarning;
    QWidget *tabOptions;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBoxGUI;
    QVBoxLayout *verticalLayoutGUI;
    QCheckBox *checkBoxLabels;
    QCheckBox *checkBoxReticles;
    QCheckBox *checkBoxCircles;
    QGroupBox *groupBoxTelescopeServers;
    QVBoxLayout *verticalLayout_6;
    QCheckBox *checkBoxEnableLogs;
    QCheckBox *checkBoxUseExecutables;
    QFrame *frameExecutablesDirectory;
    QHBoxLayout *horizontalLayoutExecutablesDirectory;
    QLabel *labelExecutablesDirectory;
    QLineEdit *lineEditExecutablesDirectory;
    QPushButton *pushButtonPickExecutablesDirectory;
    QSpacerItem *verticalSpacer;
    QWidget *tabHelp;
    QVBoxLayout *verticalLayoutHelp;
    QTextBrowser *textBrowserHelp;
    QWidget *tabAbout;
    QVBoxLayout *verticalLayout;
    QTextBrowser *textBrowserAbout;

    void setupUi(QWidget *telescopeDialogForm)
    {
        if (telescopeDialogForm->objectName().isEmpty())
            telescopeDialogForm->setObjectName(QString::fromUtf8("telescopeDialogForm"));
        telescopeDialogForm->resize(530, 446);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(telescopeDialogForm->sizePolicy().hasHeightForWidth());
        telescopeDialogForm->setSizePolicy(sizePolicy);
        telescopeDialogForm->setMinimumSize(QSize(530, 400));
        telescopeDialogForm->setMaximumSize(QSize(800, 600));
        verticalLayoutTelescopeDialog = new QVBoxLayout(telescopeDialogForm);
        verticalLayoutTelescopeDialog->setSpacing(0);
        verticalLayoutTelescopeDialog->setContentsMargins(0, 0, 0, 0);
        verticalLayoutTelescopeDialog->setObjectName(QString::fromUtf8("verticalLayoutTelescopeDialog"));
        verticalLayoutTelescopeDialog->setSizeConstraint(QLayout::SetNoConstraint);
        TitleBar = new BarFrame(telescopeDialogForm);
        TitleBar->setObjectName(QString::fromUtf8("TitleBar"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(TitleBar->sizePolicy().hasHeightForWidth());
        TitleBar->setSizePolicy(sizePolicy1);
        TitleBar->setMinimumSize(QSize(530, 25));
        TitleBar->setMaximumSize(QSize(16777215, 30));
        TitleBar->setFocusPolicy(Qt::NoFocus);
        TitleBar->setAutoFillBackground(false);
        TitleBar->setFrameShape(QFrame::StyledPanel);
        hboxLayout = new QHBoxLayout(TitleBar);
        hboxLayout->setSpacing(6);
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


        verticalLayoutTelescopeDialog->addWidget(TitleBar);

        tabs = new QTabWidget(telescopeDialogForm);
        tabs->setObjectName(QString::fromUtf8("tabs"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tabs->sizePolicy().hasHeightForWidth());
        tabs->setSizePolicy(sizePolicy2);
        tabTelescopes = new QWidget();
        tabTelescopes->setObjectName(QString::fromUtf8("tabTelescopes"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(tabTelescopes->sizePolicy().hasHeightForWidth());
        tabTelescopes->setSizePolicy(sizePolicy3);
        verticalLayoutTabTelescopes = new QVBoxLayout(tabTelescopes);
        verticalLayoutTabTelescopes->setSpacing(0);
        verticalLayoutTabTelescopes->setContentsMargins(0, 0, 0, 0);
        verticalLayoutTabTelescopes->setObjectName(QString::fromUtf8("verticalLayoutTabTelescopes"));
        groupBoxTelescopes = new QGroupBox(tabTelescopes);
        groupBoxTelescopes->setObjectName(QString::fromUtf8("groupBoxTelescopes"));
        sizePolicy3.setHeightForWidth(groupBoxTelescopes->sizePolicy().hasHeightForWidth());
        groupBoxTelescopes->setSizePolicy(sizePolicy3);
        groupBoxTelescopes->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        verticalLayout_2 = new QVBoxLayout(groupBoxTelescopes);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        telescopeTreeView = new QTreeView(groupBoxTelescopes);
        telescopeTreeView->setObjectName(QString::fromUtf8("telescopeTreeView"));
        sizePolicy.setHeightForWidth(telescopeTreeView->sizePolicy().hasHeightForWidth());
        telescopeTreeView->setSizePolicy(sizePolicy);
        telescopeTreeView->setMinimumSize(QSize(0, 100));
        telescopeTreeView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        telescopeTreeView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        telescopeTreeView->setSelectionMode(QAbstractItemView::SingleSelection);
        telescopeTreeView->setSelectionBehavior(QAbstractItemView::SelectRows);
        telescopeTreeView->setRootIsDecorated(false);
        telescopeTreeView->setUniformRowHeights(true);
        telescopeTreeView->setItemsExpandable(false);
        telescopeTreeView->setSortingEnabled(true);
        telescopeTreeView->setAllColumnsShowFocus(true);
        telescopeTreeView->setExpandsOnDoubleClick(false);

        verticalLayout_2->addWidget(telescopeTreeView);

        frameButtons = new QFrame(groupBoxTelescopes);
        frameButtons->setObjectName(QString::fromUtf8("frameButtons"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(frameButtons->sizePolicy().hasHeightForWidth());
        frameButtons->setSizePolicy(sizePolicy4);
        frameButtons->setMinimumSize(QSize(0, 40));
        horizontalLayout = new QHBoxLayout(frameButtons);
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(10, 0, 10, 0);
        pushButtonChangeStatus = new QPushButton(frameButtons);
        pushButtonChangeStatus->setObjectName(QString::fromUtf8("pushButtonChangeStatus"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(pushButtonChangeStatus->sizePolicy().hasHeightForWidth());
        pushButtonChangeStatus->setSizePolicy(sizePolicy5);
        pushButtonChangeStatus->setMinimumSize(QSize(0, 24));

        horizontalLayout->addWidget(pushButtonChangeStatus);

        pushButtonConfigure = new QPushButton(frameButtons);
        pushButtonConfigure->setObjectName(QString::fromUtf8("pushButtonConfigure"));
        sizePolicy5.setHeightForWidth(pushButtonConfigure->sizePolicy().hasHeightForWidth());
        pushButtonConfigure->setSizePolicy(sizePolicy5);
        pushButtonConfigure->setMinimumSize(QSize(0, 24));
        pushButtonConfigure->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout->addWidget(pushButtonConfigure);

        pushButtonAdd = new QPushButton(frameButtons);
        pushButtonAdd->setObjectName(QString::fromUtf8("pushButtonAdd"));
        sizePolicy5.setHeightForWidth(pushButtonAdd->sizePolicy().hasHeightForWidth());
        pushButtonAdd->setSizePolicy(sizePolicy5);
        pushButtonAdd->setMinimumSize(QSize(0, 24));
        pushButtonAdd->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout->addWidget(pushButtonAdd);

        pushButtonRemove = new QPushButton(frameButtons);
        pushButtonRemove->setObjectName(QString::fromUtf8("pushButtonRemove"));
        pushButtonRemove->setEnabled(true);
        sizePolicy5.setHeightForWidth(pushButtonRemove->sizePolicy().hasHeightForWidth());
        pushButtonRemove->setSizePolicy(sizePolicy5);
        pushButtonRemove->setMinimumSize(QSize(0, 24));

        horizontalLayout->addWidget(pushButtonRemove);


        verticalLayout_2->addWidget(frameButtons);

        labelWarning = new QLabel(groupBoxTelescopes);
        labelWarning->setObjectName(QString::fromUtf8("labelWarning"));
        sizePolicy3.setHeightForWidth(labelWarning->sizePolicy().hasHeightForWidth());
        labelWarning->setSizePolicy(sizePolicy3);
        labelWarning->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        labelWarning->setWordWrap(true);
        labelWarning->setTextInteractionFlags(Qt::NoTextInteraction);

        verticalLayout_2->addWidget(labelWarning);


        verticalLayoutTabTelescopes->addWidget(groupBoxTelescopes);

        tabs->addTab(tabTelescopes, QString());
        tabOptions = new QWidget();
        tabOptions->setObjectName(QString::fromUtf8("tabOptions"));
        sizePolicy3.setHeightForWidth(tabOptions->sizePolicy().hasHeightForWidth());
        tabOptions->setSizePolicy(sizePolicy3);
        verticalLayout_3 = new QVBoxLayout(tabOptions);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBoxGUI = new QGroupBox(tabOptions);
        groupBoxGUI->setObjectName(QString::fromUtf8("groupBoxGUI"));
        sizePolicy3.setHeightForWidth(groupBoxGUI->sizePolicy().hasHeightForWidth());
        groupBoxGUI->setSizePolicy(sizePolicy3);
        groupBoxGUI->setFlat(false);
        groupBoxGUI->setCheckable(false);
        verticalLayoutGUI = new QVBoxLayout(groupBoxGUI);
        verticalLayoutGUI->setSpacing(0);
        verticalLayoutGUI->setContentsMargins(0, 0, 0, 0);
        verticalLayoutGUI->setObjectName(QString::fromUtf8("verticalLayoutGUI"));
        checkBoxLabels = new QCheckBox(groupBoxGUI);
        checkBoxLabels->setObjectName(QString::fromUtf8("checkBoxLabels"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(checkBoxLabels->sizePolicy().hasHeightForWidth());
        checkBoxLabels->setSizePolicy(sizePolicy6);
        checkBoxLabels->setMinimumSize(QSize(0, 26));
        checkBoxLabels->setChecked(true);

        verticalLayoutGUI->addWidget(checkBoxLabels);

        checkBoxReticles = new QCheckBox(groupBoxGUI);
        checkBoxReticles->setObjectName(QString::fromUtf8("checkBoxReticles"));
        sizePolicy6.setHeightForWidth(checkBoxReticles->sizePolicy().hasHeightForWidth());
        checkBoxReticles->setSizePolicy(sizePolicy6);
        checkBoxReticles->setMinimumSize(QSize(0, 26));
        checkBoxReticles->setChecked(true);

        verticalLayoutGUI->addWidget(checkBoxReticles);

        checkBoxCircles = new QCheckBox(groupBoxGUI);
        checkBoxCircles->setObjectName(QString::fromUtf8("checkBoxCircles"));
        sizePolicy6.setHeightForWidth(checkBoxCircles->sizePolicy().hasHeightForWidth());
        checkBoxCircles->setSizePolicy(sizePolicy6);
        checkBoxCircles->setMinimumSize(QSize(0, 26));
        checkBoxCircles->setChecked(true);

        verticalLayoutGUI->addWidget(checkBoxCircles);


        verticalLayout_3->addWidget(groupBoxGUI);

        groupBoxTelescopeServers = new QGroupBox(tabOptions);
        groupBoxTelescopeServers->setObjectName(QString::fromUtf8("groupBoxTelescopeServers"));
        verticalLayout_6 = new QVBoxLayout(groupBoxTelescopeServers);
        verticalLayout_6->setSpacing(4);
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        checkBoxEnableLogs = new QCheckBox(groupBoxTelescopeServers);
        checkBoxEnableLogs->setObjectName(QString::fromUtf8("checkBoxEnableLogs"));
        checkBoxEnableLogs->setMinimumSize(QSize(0, 24));

        verticalLayout_6->addWidget(checkBoxEnableLogs);

        checkBoxUseExecutables = new QCheckBox(groupBoxTelescopeServers);
        checkBoxUseExecutables->setObjectName(QString::fromUtf8("checkBoxUseExecutables"));
        checkBoxUseExecutables->setEnabled(true);
        checkBoxUseExecutables->setMinimumSize(QSize(0, 24));
        checkBoxUseExecutables->setChecked(true);

        verticalLayout_6->addWidget(checkBoxUseExecutables);

        frameExecutablesDirectory = new QFrame(groupBoxTelescopeServers);
        frameExecutablesDirectory->setObjectName(QString::fromUtf8("frameExecutablesDirectory"));
        horizontalLayoutExecutablesDirectory = new QHBoxLayout(frameExecutablesDirectory);
        horizontalLayoutExecutablesDirectory->setContentsMargins(0, 0, 0, 0);
        horizontalLayoutExecutablesDirectory->setObjectName(QString::fromUtf8("horizontalLayoutExecutablesDirectory"));
        labelExecutablesDirectory = new QLabel(frameExecutablesDirectory);
        labelExecutablesDirectory->setObjectName(QString::fromUtf8("labelExecutablesDirectory"));

        horizontalLayoutExecutablesDirectory->addWidget(labelExecutablesDirectory);

        lineEditExecutablesDirectory = new QLineEdit(frameExecutablesDirectory);
        lineEditExecutablesDirectory->setObjectName(QString::fromUtf8("lineEditExecutablesDirectory"));
        lineEditExecutablesDirectory->setReadOnly(true);

        horizontalLayoutExecutablesDirectory->addWidget(lineEditExecutablesDirectory);

        pushButtonPickExecutablesDirectory = new QPushButton(frameExecutablesDirectory);
        pushButtonPickExecutablesDirectory->setObjectName(QString::fromUtf8("pushButtonPickExecutablesDirectory"));
        QSizePolicy sizePolicy7(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(pushButtonPickExecutablesDirectory->sizePolicy().hasHeightForWidth());
        pushButtonPickExecutablesDirectory->setSizePolicy(sizePolicy7);

        horizontalLayoutExecutablesDirectory->addWidget(pushButtonPickExecutablesDirectory);


        verticalLayout_6->addWidget(frameExecutablesDirectory);


        verticalLayout_3->addWidget(groupBoxTelescopeServers);

        verticalSpacer = new QSpacerItem(20, 314, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        tabs->addTab(tabOptions, QString());
        tabHelp = new QWidget();
        tabHelp->setObjectName(QString::fromUtf8("tabHelp"));
        verticalLayoutHelp = new QVBoxLayout(tabHelp);
        verticalLayoutHelp->setObjectName(QString::fromUtf8("verticalLayoutHelp"));
        textBrowserHelp = new QTextBrowser(tabHelp);
        textBrowserHelp->setObjectName(QString::fromUtf8("textBrowserHelp"));
        textBrowserHelp->setOpenExternalLinks(true);

        verticalLayoutHelp->addWidget(textBrowserHelp);

        tabs->addTab(tabHelp, QString());
        tabAbout = new QWidget();
        tabAbout->setObjectName(QString::fromUtf8("tabAbout"));
        verticalLayout = new QVBoxLayout(tabAbout);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textBrowserAbout = new QTextBrowser(tabAbout);
        textBrowserAbout->setObjectName(QString::fromUtf8("textBrowserAbout"));

        verticalLayout->addWidget(textBrowserAbout);

        tabs->addTab(tabAbout, QString());

        verticalLayoutTelescopeDialog->addWidget(tabs);


        retranslateUi(telescopeDialogForm);

        tabs->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(telescopeDialogForm);
    } // setupUi

    void retranslateUi(QWidget *telescopeDialogForm)
    {
        telescopeDialogForm->setWindowTitle(QApplication::translate("telescopeDialogForm", "Form", 0, QApplication::UnicodeUTF8));
        stelWindowTitle->setText(QApplication::translate("telescopeDialogForm", "Telescopes", 0, QApplication::UnicodeUTF8));
        closeStelWindow->setText(QString());
        groupBoxTelescopes->setTitle(QApplication::translate("telescopeDialogForm", "Telescopes Controlled", 0, QApplication::UnicodeUTF8));
        pushButtonChangeStatus->setText(QApplication::translate("telescopeDialogForm", "Start", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pushButtonConfigure->setToolTip(QApplication::translate("telescopeDialogForm", "Configure the selected telescope", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pushButtonConfigure->setText(QApplication::translate("telescopeDialogForm", "Configure", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pushButtonAdd->setToolTip(QApplication::translate("telescopeDialogForm", "Add a new telescope", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pushButtonAdd->setText(QApplication::translate("telescopeDialogForm", "Add", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pushButtonRemove->setToolTip(QApplication::translate("telescopeDialogForm", "Remove the selected telescope", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pushButtonRemove->setText(QApplication::translate("telescopeDialogForm", "Remove", 0, QApplication::UnicodeUTF8));
        tabs->setTabText(tabs->indexOf(tabTelescopes), QApplication::translate("telescopeDialogForm", "Telescopes", 0, QApplication::UnicodeUTF8));
        groupBoxGUI->setTitle(QApplication::translate("telescopeDialogForm", "GUI", 0, QApplication::UnicodeUTF8));
        checkBoxLabels->setText(QApplication::translate("telescopeDialogForm", "Show telescope labels", 0, QApplication::UnicodeUTF8));
        checkBoxReticles->setText(QApplication::translate("telescopeDialogForm", "Show telescope reticles", 0, QApplication::UnicodeUTF8));
        checkBoxCircles->setText(QApplication::translate("telescopeDialogForm", "Show field of view indicators", 0, QApplication::UnicodeUTF8));
        groupBoxTelescopeServers->setTitle(QApplication::translate("telescopeDialogForm", "Files", 0, QApplication::UnicodeUTF8));
        checkBoxEnableLogs->setText(QApplication::translate("telescopeDialogForm", "Log telescope driver messages to files", 0, QApplication::UnicodeUTF8));
        checkBoxUseExecutables->setText(QApplication::translate("telescopeDialogForm", "Use telescope server executables (override built-in drivers)", 0, QApplication::UnicodeUTF8));
        labelExecutablesDirectory->setText(QApplication::translate("telescopeDialogForm", "Executables directory:", 0, QApplication::UnicodeUTF8));
        tabs->setTabText(tabs->indexOf(tabOptions), QApplication::translate("telescopeDialogForm", "Options", 0, QApplication::UnicodeUTF8));
        tabs->setTabText(tabs->indexOf(tabHelp), QApplication::translate("telescopeDialogForm", "Help", 0, QApplication::UnicodeUTF8));
        tabs->setTabText(tabs->indexOf(tabAbout), QApplication::translate("telescopeDialogForm", "About", "tab in plugin windows", QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class telescopeDialogForm: public Ui_telescopeDialogForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELESCOPEDIALOG_H
