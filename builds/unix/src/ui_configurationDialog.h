/********************************************************************************
** Form generated from reading UI file 'configurationDialog.ui'
**
** Created: Sat Apr 20 14:26:00 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURATIONDIALOG_H
#define UI_CONFIGURATIONDIALOG_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QCommandLinkButton>
#include <QtGui/QDateTimeEdit>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStackedWidget>
#include <QtGui/QTextBrowser>
#include <QtGui/QTimeEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "Dialog.hpp"

QT_BEGIN_NAMESPACE

class Ui_configurationDialogForm
{
public:
    QVBoxLayout *vboxLayout;
    BarFrame *TitleBar;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QLabel *stelWindowTitle;
    QSpacerItem *spacerItem1;
    QPushButton *closeStelWindow;
    QFrame *viewContent;
    QGridLayout *gridLayout;
    QStackedWidget *configurationStackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_10;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *programLanguageComboBox;
    QGroupBox *groupBox_6;
    QVBoxLayout *verticalLayout_4x;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *setViewingOptionAsDefaultPushButton;
    QPushButton *restoreDefaultsButton;
    QLabel *saveDefaultOptionsLabel;
    QSpacerItem *verticalSpacer_3;
    QLabel *startupFOVLabel;
    QLabel *startupDirectionOfViewlabel;
    QWidget *pageSelectedObjectInfo;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_5;
    QRadioButton *allSelectedInfoRadio;
    QRadioButton *briefSelectedInfoRadio;
    QRadioButton *noSelectedInfoRadio;
    QRadioButton *customSelectedInfoRadio;
    QGroupBox *groupBoxDisplayedFields;
    QGridLayout *gridLayoutDisplayedFields;
    QCheckBox *checkBoxVisualMag;
    QCheckBox *checkBoxExtra1;
    QCheckBox *checkBoxExtra3;
    QCheckBox *checkBoxCatalogNumbers;
    QCheckBox *checkBoxName;
    QCheckBox *checkBoxExtra2;
    QCheckBox *checkBoxAbsoluteMag;
    QCheckBox *checkBoxAltAz;
    QCheckBox *checkBoxSize;
    QCheckBox *checkBoxRaDecOfDate;
    QCheckBox *checkBoxDistance;
    QCheckBox *checkBoxRaDecJ2000;
    QCheckBox *checkBoxHourAngle;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_11;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_X;
    QCheckBox *enableKeysNavigationCheckBox;
    QCheckBox *enableMouseNavigationCheckBox;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QRadioButton *systemTimeRadio;
    QHBoxLayout *_3;
    QRadioButton *todayRadio;
    QTimeEdit *todayTimeSpinBox;
    QHBoxLayout *_4;
    QRadioButton *fixedTimeRadio;
    QDateTimeEdit *fixedDateTimeEdit;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *fixedDateTimeCurrentButton;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *groupBox_9;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *_8;
    QCheckBox *mouseTimeoutCheckbox;
    QSpacerItem *horizontalSpacer;
    QDoubleSpinBox *mouseTimeoutSpinBox;
    QCheckBox *showFlipButtonsCheckbox;
    QCheckBox *showNebulaBgButtonCheckbox;
    QWidget *page_3;
    QVBoxLayout *verticalLayout_12;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayoutx;
    QCheckBox *sphericMirrorCheckbox;
    QCheckBox *gravityLabelCheckbox;
    QCheckBox *autoZoomResetsDirectionCheckbox;
    QCheckBox *diskViewportCheckbox;
    QCheckBox *selectSingleConstellationButton;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QLineEdit *screenshotDirEdit;
    QPushButton *screenshotBrowseButton;
    QCheckBox *invertScreenShotColorsCheckBox;
    QGroupBox *contentBox;
    QHBoxLayout *horizontalLayout;
    QCommandLinkButton *getStarsButton;
    QLabel *downloadLabel;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *downloadRetryButton;
    QPushButton *downloadCancelButton;
    QWidget *page_4;
    QHBoxLayout *horizontalLayout_7;
    QListWidget *scriptListWidget;
    QVBoxLayout *verticalLayout_8;
    QTextBrowser *scriptInfoBrowser;
    QGroupBox *groupBox_8;
    QVBoxLayout *verticalLayout_9;
    QLabel *scriptStatusLabel;
    QCheckBox *closeWindowAtScriptRunCheckbox;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *runScriptButton;
    QPushButton *stopScriptButton;
    QWidget *page_5;
    QHBoxLayout *horizontalLayout_6;
    QListWidget *pluginsListWidget;
    QVBoxLayout *pluginsVerticalLayout;
    QTextBrowser *pluginsInfoBrowser;
    QGroupBox *pluginsGroupBox;
    QHBoxLayout *horizontalLayout_8;
    QCheckBox *pluginLoadAtStartupCheckBox;
    QPushButton *pluginConfigureButton;
    QListWidget *stackListWidget;
    QButtonGroup *buttonGroupDisplayedFields;

    void setupUi(QWidget *configurationDialogForm)
    {
        if (configurationDialogForm->objectName().isEmpty())
            configurationDialogForm->setObjectName(QString::fromUtf8("configurationDialogForm"));
        configurationDialogForm->resize(523, 483);
        vboxLayout = new QVBoxLayout(configurationDialogForm);
        vboxLayout->setSpacing(0);
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        TitleBar = new BarFrame(configurationDialogForm);
        TitleBar->setObjectName(QString::fromUtf8("TitleBar"));
        TitleBar->setMinimumSize(QSize(16, 25));
        TitleBar->setMaximumSize(QSize(16777215, 25));
        TitleBar->setFrameShape(QFrame::StyledPanel);
        hboxLayout = new QHBoxLayout(TitleBar);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 4, 0);
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        stelWindowTitle = new QLabel(TitleBar);
        stelWindowTitle->setObjectName(QString::fromUtf8("stelWindowTitle"));
        QPalette palette;
        stelWindowTitle->setPalette(palette);
        QFont font;
        stelWindowTitle->setFont(font);

        hboxLayout->addWidget(stelWindowTitle);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);

        closeStelWindow = new QPushButton(TitleBar);
        closeStelWindow->setObjectName(QString::fromUtf8("closeStelWindow"));
        closeStelWindow->setMinimumSize(QSize(16, 16));
        closeStelWindow->setMaximumSize(QSize(16, 16));
        closeStelWindow->setFocusPolicy(Qt::NoFocus);

        hboxLayout->addWidget(closeStelWindow);


        vboxLayout->addWidget(TitleBar);

        viewContent = new QFrame(configurationDialogForm);
        viewContent->setObjectName(QString::fromUtf8("viewContent"));
        viewContent->setFrameShape(QFrame::StyledPanel);
        gridLayout = new QGridLayout(viewContent);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        configurationStackedWidget = new QStackedWidget(viewContent);
        configurationStackedWidget->setObjectName(QString::fromUtf8("configurationStackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        verticalLayout_10 = new QVBoxLayout(page);
        verticalLayout_10->setSpacing(0);
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        groupBox_2 = new QGroupBox(page);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_2);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        programLanguageComboBox = new QComboBox(groupBox_2);
        programLanguageComboBox->setObjectName(QString::fromUtf8("programLanguageComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(programLanguageComboBox->sizePolicy().hasHeightForWidth());
        programLanguageComboBox->setSizePolicy(sizePolicy);
        programLanguageComboBox->setMinimumSize(QSize(220, 24));
        programLanguageComboBox->setMaximumSize(QSize(220, 24));

        horizontalLayout_2->addWidget(programLanguageComboBox);


        verticalLayout_10->addWidget(groupBox_2);

        groupBox_6 = new QGroupBox(page);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        verticalLayout_4x = new QVBoxLayout(groupBox_6);
        verticalLayout_4x->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4x->setObjectName(QString::fromUtf8("verticalLayout_4x"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        setViewingOptionAsDefaultPushButton = new QPushButton(groupBox_6);
        setViewingOptionAsDefaultPushButton->setObjectName(QString::fromUtf8("setViewingOptionAsDefaultPushButton"));
        setViewingOptionAsDefaultPushButton->setMinimumSize(QSize(0, 24));

        horizontalLayout_3->addWidget(setViewingOptionAsDefaultPushButton);

        restoreDefaultsButton = new QPushButton(groupBox_6);
        restoreDefaultsButton->setObjectName(QString::fromUtf8("restoreDefaultsButton"));
        restoreDefaultsButton->setMinimumSize(QSize(0, 24));

        horizontalLayout_3->addWidget(restoreDefaultsButton);


        verticalLayout_4x->addLayout(horizontalLayout_3);

        saveDefaultOptionsLabel = new QLabel(groupBox_6);
        saveDefaultOptionsLabel->setObjectName(QString::fromUtf8("saveDefaultOptionsLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(saveDefaultOptionsLabel->sizePolicy().hasHeightForWidth());
        saveDefaultOptionsLabel->setSizePolicy(sizePolicy1);
        saveDefaultOptionsLabel->setScaledContents(false);
        saveDefaultOptionsLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        saveDefaultOptionsLabel->setWordWrap(true);
        saveDefaultOptionsLabel->setTextInteractionFlags(Qt::NoTextInteraction);

        verticalLayout_4x->addWidget(saveDefaultOptionsLabel);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4x->addItem(verticalSpacer_3);

        startupFOVLabel = new QLabel(groupBox_6);
        startupFOVLabel->setObjectName(QString::fromUtf8("startupFOVLabel"));
        startupFOVLabel->setText(QString::fromUtf8("Startup FOV: XX"));
        startupFOVLabel->setTextInteractionFlags(Qt::TextSelectableByMouse);

        verticalLayout_4x->addWidget(startupFOVLabel);

        startupDirectionOfViewlabel = new QLabel(groupBox_6);
        startupDirectionOfViewlabel->setObjectName(QString::fromUtf8("startupDirectionOfViewlabel"));
        startupDirectionOfViewlabel->setText(QString::fromUtf8("Startup direction of view: xxxx"));
        startupDirectionOfViewlabel->setTextInteractionFlags(Qt::TextSelectableByMouse);

        verticalLayout_4x->addWidget(startupDirectionOfViewlabel);


        verticalLayout_10->addWidget(groupBox_6);

        configurationStackedWidget->addWidget(page);
        pageSelectedObjectInfo = new QWidget();
        pageSelectedObjectInfo->setObjectName(QString::fromUtf8("pageSelectedObjectInfo"));
        verticalLayout_2 = new QVBoxLayout(pageSelectedObjectInfo);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox_4 = new QGroupBox(pageSelectedObjectInfo);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupBox_4->sizePolicy().hasHeightForWidth());
        groupBox_4->setSizePolicy(sizePolicy2);
        verticalLayout_5 = new QVBoxLayout(groupBox_4);
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        allSelectedInfoRadio = new QRadioButton(groupBox_4);
        allSelectedInfoRadio->setObjectName(QString::fromUtf8("allSelectedInfoRadio"));

        verticalLayout_5->addWidget(allSelectedInfoRadio);

        briefSelectedInfoRadio = new QRadioButton(groupBox_4);
        briefSelectedInfoRadio->setObjectName(QString::fromUtf8("briefSelectedInfoRadio"));

        verticalLayout_5->addWidget(briefSelectedInfoRadio);

        noSelectedInfoRadio = new QRadioButton(groupBox_4);
        noSelectedInfoRadio->setObjectName(QString::fromUtf8("noSelectedInfoRadio"));

        verticalLayout_5->addWidget(noSelectedInfoRadio);

        customSelectedInfoRadio = new QRadioButton(groupBox_4);
        customSelectedInfoRadio->setObjectName(QString::fromUtf8("customSelectedInfoRadio"));

        verticalLayout_5->addWidget(customSelectedInfoRadio);


        verticalLayout_2->addWidget(groupBox_4);

        groupBoxDisplayedFields = new QGroupBox(pageSelectedObjectInfo);
        groupBoxDisplayedFields->setObjectName(QString::fromUtf8("groupBoxDisplayedFields"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(groupBoxDisplayedFields->sizePolicy().hasHeightForWidth());
        groupBoxDisplayedFields->setSizePolicy(sizePolicy3);
        gridLayoutDisplayedFields = new QGridLayout(groupBoxDisplayedFields);
        gridLayoutDisplayedFields->setContentsMargins(0, 0, 0, 0);
        gridLayoutDisplayedFields->setObjectName(QString::fromUtf8("gridLayoutDisplayedFields"));
        checkBoxVisualMag = new QCheckBox(groupBoxDisplayedFields);
        buttonGroupDisplayedFields = new QButtonGroup(configurationDialogForm);
        buttonGroupDisplayedFields->setObjectName(QString::fromUtf8("buttonGroupDisplayedFields"));
        buttonGroupDisplayedFields->setExclusive(false);
        buttonGroupDisplayedFields->addButton(checkBoxVisualMag);
        checkBoxVisualMag->setObjectName(QString::fromUtf8("checkBoxVisualMag"));

        gridLayoutDisplayedFields->addWidget(checkBoxVisualMag, 0, 1, 1, 1);

        checkBoxExtra1 = new QCheckBox(groupBoxDisplayedFields);
        buttonGroupDisplayedFields->addButton(checkBoxExtra1);
        checkBoxExtra1->setObjectName(QString::fromUtf8("checkBoxExtra1"));

        gridLayoutDisplayedFields->addWidget(checkBoxExtra1, 6, 0, 1, 1);

        checkBoxExtra3 = new QCheckBox(groupBoxDisplayedFields);
        buttonGroupDisplayedFields->addButton(checkBoxExtra3);
        checkBoxExtra3->setObjectName(QString::fromUtf8("checkBoxExtra3"));

        gridLayoutDisplayedFields->addWidget(checkBoxExtra3, 7, 0, 1, 2);

        checkBoxCatalogNumbers = new QCheckBox(groupBoxDisplayedFields);
        buttonGroupDisplayedFields->addButton(checkBoxCatalogNumbers);
        checkBoxCatalogNumbers->setObjectName(QString::fromUtf8("checkBoxCatalogNumbers"));

        gridLayoutDisplayedFields->addWidget(checkBoxCatalogNumbers, 1, 0, 1, 1);

        checkBoxName = new QCheckBox(groupBoxDisplayedFields);
        buttonGroupDisplayedFields->addButton(checkBoxName);
        checkBoxName->setObjectName(QString::fromUtf8("checkBoxName"));

        gridLayoutDisplayedFields->addWidget(checkBoxName, 0, 0, 1, 1);

        checkBoxExtra2 = new QCheckBox(groupBoxDisplayedFields);
        buttonGroupDisplayedFields->addButton(checkBoxExtra2);
        checkBoxExtra2->setObjectName(QString::fromUtf8("checkBoxExtra2"));

        gridLayoutDisplayedFields->addWidget(checkBoxExtra2, 6, 1, 1, 1);

        checkBoxAbsoluteMag = new QCheckBox(groupBoxDisplayedFields);
        buttonGroupDisplayedFields->addButton(checkBoxAbsoluteMag);
        checkBoxAbsoluteMag->setObjectName(QString::fromUtf8("checkBoxAbsoluteMag"));

        gridLayoutDisplayedFields->addWidget(checkBoxAbsoluteMag, 1, 1, 1, 1);

        checkBoxAltAz = new QCheckBox(groupBoxDisplayedFields);
        buttonGroupDisplayedFields->addButton(checkBoxAltAz);
        checkBoxAltAz->setObjectName(QString::fromUtf8("checkBoxAltAz"));

        gridLayoutDisplayedFields->addWidget(checkBoxAltAz, 4, 1, 1, 1);

        checkBoxSize = new QCheckBox(groupBoxDisplayedFields);
        buttonGroupDisplayedFields->addButton(checkBoxSize);
        checkBoxSize->setObjectName(QString::fromUtf8("checkBoxSize"));

        gridLayoutDisplayedFields->addWidget(checkBoxSize, 5, 1, 1, 1);

        checkBoxRaDecOfDate = new QCheckBox(groupBoxDisplayedFields);
        buttonGroupDisplayedFields->addButton(checkBoxRaDecOfDate);
        checkBoxRaDecOfDate->setObjectName(QString::fromUtf8("checkBoxRaDecOfDate"));

        gridLayoutDisplayedFields->addWidget(checkBoxRaDecOfDate, 3, 0, 1, 2);

        checkBoxDistance = new QCheckBox(groupBoxDisplayedFields);
        buttonGroupDisplayedFields->addButton(checkBoxDistance);
        checkBoxDistance->setObjectName(QString::fromUtf8("checkBoxDistance"));

        gridLayoutDisplayedFields->addWidget(checkBoxDistance, 5, 0, 1, 1);

        checkBoxRaDecJ2000 = new QCheckBox(groupBoxDisplayedFields);
        buttonGroupDisplayedFields->addButton(checkBoxRaDecJ2000);
        checkBoxRaDecJ2000->setObjectName(QString::fromUtf8("checkBoxRaDecJ2000"));

        gridLayoutDisplayedFields->addWidget(checkBoxRaDecJ2000, 2, 0, 1, 2);

        checkBoxHourAngle = new QCheckBox(groupBoxDisplayedFields);
        buttonGroupDisplayedFields->addButton(checkBoxHourAngle);
        checkBoxHourAngle->setObjectName(QString::fromUtf8("checkBoxHourAngle"));

        gridLayoutDisplayedFields->addWidget(checkBoxHourAngle, 4, 0, 1, 1);


        verticalLayout_2->addWidget(groupBoxDisplayedFields);

        configurationStackedWidget->addWidget(pageSelectedObjectInfo);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        verticalLayout_11 = new QVBoxLayout(page_2);
        verticalLayout_11->setSpacing(0);
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        groupBox_5 = new QGroupBox(page_2);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        verticalLayout_X = new QVBoxLayout(groupBox_5);
        verticalLayout_X->setContentsMargins(0, 0, 0, 0);
        verticalLayout_X->setObjectName(QString::fromUtf8("verticalLayout_X"));
        enableKeysNavigationCheckBox = new QCheckBox(groupBox_5);
        enableKeysNavigationCheckBox->setObjectName(QString::fromUtf8("enableKeysNavigationCheckBox"));

        verticalLayout_X->addWidget(enableKeysNavigationCheckBox);

        enableMouseNavigationCheckBox = new QCheckBox(groupBox_5);
        enableMouseNavigationCheckBox->setObjectName(QString::fromUtf8("enableMouseNavigationCheckBox"));

        verticalLayout_X->addWidget(enableMouseNavigationCheckBox);


        verticalLayout_11->addWidget(groupBox_5);

        groupBox = new QGroupBox(page_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        systemTimeRadio = new QRadioButton(groupBox);
        systemTimeRadio->setObjectName(QString::fromUtf8("systemTimeRadio"));

        gridLayout_3->addWidget(systemTimeRadio, 0, 0, 1, 1);

        _3 = new QHBoxLayout();
        _3->setSpacing(6);
        _3->setObjectName(QString::fromUtf8("_3"));
        todayRadio = new QRadioButton(groupBox);
        todayRadio->setObjectName(QString::fromUtf8("todayRadio"));

        _3->addWidget(todayRadio);

        todayTimeSpinBox = new QTimeEdit(groupBox);
        todayTimeSpinBox->setObjectName(QString::fromUtf8("todayTimeSpinBox"));
        sizePolicy.setHeightForWidth(todayTimeSpinBox->sizePolicy().hasHeightForWidth());
        todayTimeSpinBox->setSizePolicy(sizePolicy);
        todayTimeSpinBox->setMinimumSize(QSize(0, 24));
        todayTimeSpinBox->setMaximumSize(QSize(16777215, 24));
        todayTimeSpinBox->setFont(font);
        todayTimeSpinBox->setFrame(true);
        todayTimeSpinBox->setAlignment(Qt::AlignCenter);
        todayTimeSpinBox->setTime(QTime(21, 0, 0));
        todayTimeSpinBox->setCurrentSectionIndex(0);

        _3->addWidget(todayTimeSpinBox);


        gridLayout_3->addLayout(_3, 1, 0, 1, 1);

        _4 = new QHBoxLayout();
        _4->setObjectName(QString::fromUtf8("_4"));
        fixedTimeRadio = new QRadioButton(groupBox);
        fixedTimeRadio->setObjectName(QString::fromUtf8("fixedTimeRadio"));

        _4->addWidget(fixedTimeRadio);

        fixedDateTimeEdit = new QDateTimeEdit(groupBox);
        fixedDateTimeEdit->setObjectName(QString::fromUtf8("fixedDateTimeEdit"));
        fixedDateTimeEdit->setMinimumSize(QSize(0, 24));
        fixedDateTimeEdit->setMaximumSize(QSize(16777215, 24));
        fixedDateTimeEdit->setDate(QDate(1952, 5, 11));
        fixedDateTimeEdit->setTime(QTime(0, 42, 0));
        fixedDateTimeEdit->setCalendarPopup(true);

        _4->addWidget(fixedDateTimeEdit);


        gridLayout_3->addLayout(_4, 2, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(123, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 1, 1, 1, 1);

        fixedDateTimeCurrentButton = new QPushButton(groupBox);
        fixedDateTimeCurrentButton->setObjectName(QString::fromUtf8("fixedDateTimeCurrentButton"));

        gridLayout_3->addWidget(fixedDateTimeCurrentButton, 2, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 2, 2, 1, 1);


        verticalLayout_11->addWidget(groupBox);

        groupBox_9 = new QGroupBox(page_2);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        verticalLayout = new QVBoxLayout(groupBox_9);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        _8 = new QHBoxLayout();
        _8->setObjectName(QString::fromUtf8("_8"));
        mouseTimeoutCheckbox = new QCheckBox(groupBox_9);
        mouseTimeoutCheckbox->setObjectName(QString::fromUtf8("mouseTimeoutCheckbox"));

        _8->addWidget(mouseTimeoutCheckbox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _8->addItem(horizontalSpacer);

        mouseTimeoutSpinBox = new QDoubleSpinBox(groupBox_9);
        mouseTimeoutSpinBox->setObjectName(QString::fromUtf8("mouseTimeoutSpinBox"));
        mouseTimeoutSpinBox->setMaximumSize(QSize(16777215, 24));
        mouseTimeoutSpinBox->setDecimals(1);
        mouseTimeoutSpinBox->setMinimum(0);
        mouseTimeoutSpinBox->setMaximum(3600);
        mouseTimeoutSpinBox->setValue(10);

        _8->addWidget(mouseTimeoutSpinBox);


        verticalLayout->addLayout(_8);

        showFlipButtonsCheckbox = new QCheckBox(groupBox_9);
        showFlipButtonsCheckbox->setObjectName(QString::fromUtf8("showFlipButtonsCheckbox"));

        verticalLayout->addWidget(showFlipButtonsCheckbox);

        showNebulaBgButtonCheckbox = new QCheckBox(groupBox_9);
        showNebulaBgButtonCheckbox->setObjectName(QString::fromUtf8("showNebulaBgButtonCheckbox"));

        verticalLayout->addWidget(showNebulaBgButtonCheckbox);


        verticalLayout_11->addWidget(groupBox_9);

        configurationStackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        verticalLayout_12 = new QVBoxLayout(page_3);
        verticalLayout_12->setSpacing(0);
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        groupBox_7 = new QGroupBox(page_3);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        gridLayoutx = new QGridLayout(groupBox_7);
        gridLayoutx->setContentsMargins(0, 0, 0, 0);
        gridLayoutx->setObjectName(QString::fromUtf8("gridLayoutx"));
        sphericMirrorCheckbox = new QCheckBox(groupBox_7);
        sphericMirrorCheckbox->setObjectName(QString::fromUtf8("sphericMirrorCheckbox"));

        gridLayoutx->addWidget(sphericMirrorCheckbox, 0, 0, 1, 1);

        gravityLabelCheckbox = new QCheckBox(groupBox_7);
        gravityLabelCheckbox->setObjectName(QString::fromUtf8("gravityLabelCheckbox"));

        gridLayoutx->addWidget(gravityLabelCheckbox, 2, 0, 1, 1);

        autoZoomResetsDirectionCheckbox = new QCheckBox(groupBox_7);
        autoZoomResetsDirectionCheckbox->setObjectName(QString::fromUtf8("autoZoomResetsDirectionCheckbox"));

        gridLayoutx->addWidget(autoZoomResetsDirectionCheckbox, 4, 0, 1, 2);

        diskViewportCheckbox = new QCheckBox(groupBox_7);
        diskViewportCheckbox->setObjectName(QString::fromUtf8("diskViewportCheckbox"));

        gridLayoutx->addWidget(diskViewportCheckbox, 1, 0, 1, 1);

        selectSingleConstellationButton = new QCheckBox(groupBox_7);
        selectSingleConstellationButton->setObjectName(QString::fromUtf8("selectSingleConstellationButton"));

        gridLayoutx->addWidget(selectSingleConstellationButton, 3, 0, 1, 1);


        verticalLayout_12->addWidget(groupBox_7);

        groupBox_3 = new QGroupBox(page_3);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_3 = new QVBoxLayout(groupBox_3);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label = new QLabel(groupBox_3);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_5->addWidget(label);

        screenshotDirEdit = new QLineEdit(groupBox_3);
        screenshotDirEdit->setObjectName(QString::fromUtf8("screenshotDirEdit"));

        horizontalLayout_5->addWidget(screenshotDirEdit);

        screenshotBrowseButton = new QPushButton(groupBox_3);
        screenshotBrowseButton->setObjectName(QString::fromUtf8("screenshotBrowseButton"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(screenshotBrowseButton->sizePolicy().hasHeightForWidth());
        screenshotBrowseButton->setSizePolicy(sizePolicy4);

        horizontalLayout_5->addWidget(screenshotBrowseButton);


        verticalLayout_3->addLayout(horizontalLayout_5);

        invertScreenShotColorsCheckBox = new QCheckBox(groupBox_3);
        invertScreenShotColorsCheckBox->setObjectName(QString::fromUtf8("invertScreenShotColorsCheckBox"));

        verticalLayout_3->addWidget(invertScreenShotColorsCheckBox);


        verticalLayout_12->addWidget(groupBox_3);

        contentBox = new QGroupBox(page_3);
        contentBox->setObjectName(QString::fromUtf8("contentBox"));
        horizontalLayout = new QHBoxLayout(contentBox);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        getStarsButton = new QCommandLinkButton(contentBox);
        getStarsButton->setObjectName(QString::fromUtf8("getStarsButton"));
        sizePolicy1.setHeightForWidth(getStarsButton->sizePolicy().hasHeightForWidth());
        getStarsButton->setSizePolicy(sizePolicy1);
        getStarsButton->setText(QString::fromUtf8("Get catalog x of y"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/graphicGui/btTimeRealtime-off.png"), QSize(), QIcon::Normal, QIcon::Off);
        getStarsButton->setIcon(icon);

        horizontalLayout->addWidget(getStarsButton);

        downloadLabel = new QLabel(contentBox);
        downloadLabel->setObjectName(QString::fromUtf8("downloadLabel"));
        downloadLabel->setText(QString::fromUtf8("xxx"));

        horizontalLayout->addWidget(downloadLabel);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        downloadRetryButton = new QPushButton(contentBox);
        downloadRetryButton->setObjectName(QString::fromUtf8("downloadRetryButton"));

        horizontalLayout->addWidget(downloadRetryButton);

        downloadCancelButton = new QPushButton(contentBox);
        downloadCancelButton->setObjectName(QString::fromUtf8("downloadCancelButton"));

        horizontalLayout->addWidget(downloadCancelButton);


        verticalLayout_12->addWidget(contentBox);

        configurationStackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        horizontalLayout_7 = new QHBoxLayout(page_4);
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        scriptListWidget = new QListWidget(page_4);
        scriptListWidget->setObjectName(QString::fromUtf8("scriptListWidget"));
        scriptListWidget->setMinimumSize(QSize(190, 0));
        scriptListWidget->setFocusPolicy(Qt::NoFocus);
        scriptListWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        horizontalLayout_7->addWidget(scriptListWidget);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        scriptInfoBrowser = new QTextBrowser(page_4);
        scriptInfoBrowser->setObjectName(QString::fromUtf8("scriptInfoBrowser"));

        verticalLayout_8->addWidget(scriptInfoBrowser);

        groupBox_8 = new QGroupBox(page_4);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        verticalLayout_9 = new QVBoxLayout(groupBox_8);
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        scriptStatusLabel = new QLabel(groupBox_8);
        scriptStatusLabel->setObjectName(QString::fromUtf8("scriptStatusLabel"));

        verticalLayout_9->addWidget(scriptStatusLabel);

        closeWindowAtScriptRunCheckbox = new QCheckBox(groupBox_8);
        closeWindowAtScriptRunCheckbox->setObjectName(QString::fromUtf8("closeWindowAtScriptRunCheckbox"));
        closeWindowAtScriptRunCheckbox->setChecked(true);

        verticalLayout_9->addWidget(closeWindowAtScriptRunCheckbox);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        runScriptButton = new QPushButton(groupBox_8);
        runScriptButton->setObjectName(QString::fromUtf8("runScriptButton"));
        runScriptButton->setEnabled(true);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/graphicGui/btScriptRun-on.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon1.addFile(QString::fromUtf8(":/graphicGui/btScriptRun-off.png"), QSize(), QIcon::Disabled, QIcon::Off);
        runScriptButton->setIcon(icon1);

        horizontalLayout_4->addWidget(runScriptButton);

        stopScriptButton = new QPushButton(groupBox_8);
        stopScriptButton->setObjectName(QString::fromUtf8("stopScriptButton"));
        stopScriptButton->setEnabled(true);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/graphicGui/btScriptStop-on.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon2.addFile(QString::fromUtf8(":/graphicGui/btScriptStop-off.png"), QSize(), QIcon::Disabled, QIcon::Off);
        stopScriptButton->setIcon(icon2);

        horizontalLayout_4->addWidget(stopScriptButton);


        verticalLayout_9->addLayout(horizontalLayout_4);


        verticalLayout_8->addWidget(groupBox_8);


        horizontalLayout_7->addLayout(verticalLayout_8);

        configurationStackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        horizontalLayout_6 = new QHBoxLayout(page_5);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        pluginsListWidget = new QListWidget(page_5);
        pluginsListWidget->setObjectName(QString::fromUtf8("pluginsListWidget"));
        pluginsListWidget->setMinimumSize(QSize(180, 0));
        pluginsListWidget->setMaximumSize(QSize(180, 16777215));
        pluginsListWidget->setFocusPolicy(Qt::NoFocus);
        pluginsListWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        horizontalLayout_6->addWidget(pluginsListWidget);

        pluginsVerticalLayout = new QVBoxLayout();
        pluginsVerticalLayout->setObjectName(QString::fromUtf8("pluginsVerticalLayout"));
        pluginsInfoBrowser = new QTextBrowser(page_5);
        pluginsInfoBrowser->setObjectName(QString::fromUtf8("pluginsInfoBrowser"));

        pluginsVerticalLayout->addWidget(pluginsInfoBrowser);

        pluginsGroupBox = new QGroupBox(page_5);
        pluginsGroupBox->setObjectName(QString::fromUtf8("pluginsGroupBox"));
        horizontalLayout_8 = new QHBoxLayout(pluginsGroupBox);
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        pluginLoadAtStartupCheckBox = new QCheckBox(pluginsGroupBox);
        pluginLoadAtStartupCheckBox->setObjectName(QString::fromUtf8("pluginLoadAtStartupCheckBox"));

        horizontalLayout_8->addWidget(pluginLoadAtStartupCheckBox);

        pluginConfigureButton = new QPushButton(pluginsGroupBox);
        pluginConfigureButton->setObjectName(QString::fromUtf8("pluginConfigureButton"));
        pluginConfigureButton->setEnabled(false);

        horizontalLayout_8->addWidget(pluginConfigureButton);


        pluginsVerticalLayout->addWidget(pluginsGroupBox);


        horizontalLayout_6->addLayout(pluginsVerticalLayout);

        configurationStackedWidget->addWidget(page_5);

        gridLayout->addWidget(configurationStackedWidget, 1, 0, 1, 1);

        stackListWidget = new QListWidget(viewContent);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/graphicGui/tabicon-main.png"), QSize(), QIcon::Normal, QIcon::On);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(stackListWidget);
        __qlistwidgetitem->setIcon(icon3);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/graphicGui/tabicon-info.png"), QSize(), QIcon::Normal, QIcon::On);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(stackListWidget);
        __qlistwidgetitem1->setIcon(icon4);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/graphicGui/tabicon-navigation.png"), QSize(), QIcon::Normal, QIcon::On);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(stackListWidget);
        __qlistwidgetitem2->setIcon(icon5);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/graphicGui/tabicon-tools.png"), QSize(), QIcon::Normal, QIcon::On);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(stackListWidget);
        __qlistwidgetitem3->setIcon(icon6);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/graphicGui/tabicon-scripts.png"), QSize(), QIcon::Normal, QIcon::On);
        QListWidgetItem *__qlistwidgetitem4 = new QListWidgetItem(stackListWidget);
        __qlistwidgetitem4->setIcon(icon7);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/graphicGui/tabicon-plugins.png"), QSize(), QIcon::Normal, QIcon::On);
        QListWidgetItem *__qlistwidgetitem5 = new QListWidgetItem(stackListWidget);
        __qlistwidgetitem5->setIcon(icon8);
        stackListWidget->setObjectName(QString::fromUtf8("stackListWidget"));
        stackListWidget->setMinimumSize(QSize(0, 74));
        stackListWidget->setMaximumSize(QSize(16777215, 74));
        stackListWidget->setFocusPolicy(Qt::NoFocus);
        stackListWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        stackListWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        stackListWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        stackListWidget->setIconSize(QSize(50, 50));
        stackListWidget->setMovement(QListView::Static);
        stackListWidget->setFlow(QListView::LeftToRight);
        stackListWidget->setProperty("isWrapping", QVariant(false));
        stackListWidget->setResizeMode(QListView::Adjust);
        stackListWidget->setLayoutMode(QListView::SinglePass);
        stackListWidget->setSpacing(0);
        stackListWidget->setViewMode(QListView::IconMode);
        stackListWidget->setUniformItemSizes(false);
        stackListWidget->setWordWrap(false);
        stackListWidget->setSelectionRectVisible(false);

        gridLayout->addWidget(stackListWidget, 0, 0, 1, 1);


        vboxLayout->addWidget(viewContent);

        QWidget::setTabOrder(programLanguageComboBox, setViewingOptionAsDefaultPushButton);
        QWidget::setTabOrder(setViewingOptionAsDefaultPushButton, restoreDefaultsButton);
        QWidget::setTabOrder(restoreDefaultsButton, allSelectedInfoRadio);
        QWidget::setTabOrder(allSelectedInfoRadio, briefSelectedInfoRadio);
        QWidget::setTabOrder(briefSelectedInfoRadio, noSelectedInfoRadio);
        QWidget::setTabOrder(noSelectedInfoRadio, customSelectedInfoRadio);
        QWidget::setTabOrder(customSelectedInfoRadio, checkBoxName);
        QWidget::setTabOrder(checkBoxName, checkBoxCatalogNumbers);
        QWidget::setTabOrder(checkBoxCatalogNumbers, checkBoxVisualMag);
        QWidget::setTabOrder(checkBoxVisualMag, checkBoxAbsoluteMag);
        QWidget::setTabOrder(checkBoxAbsoluteMag, checkBoxRaDecJ2000);
        QWidget::setTabOrder(checkBoxRaDecJ2000, checkBoxRaDecOfDate);
        QWidget::setTabOrder(checkBoxRaDecOfDate, checkBoxHourAngle);
        QWidget::setTabOrder(checkBoxHourAngle, checkBoxAltAz);
        QWidget::setTabOrder(checkBoxAltAz, checkBoxDistance);
        QWidget::setTabOrder(checkBoxDistance, checkBoxSize);
        QWidget::setTabOrder(checkBoxSize, checkBoxExtra1);
        QWidget::setTabOrder(checkBoxExtra1, checkBoxExtra2);
        QWidget::setTabOrder(checkBoxExtra2, checkBoxExtra3);
        QWidget::setTabOrder(checkBoxExtra3, enableKeysNavigationCheckBox);
        QWidget::setTabOrder(enableKeysNavigationCheckBox, enableMouseNavigationCheckBox);
        QWidget::setTabOrder(enableMouseNavigationCheckBox, systemTimeRadio);
        QWidget::setTabOrder(systemTimeRadio, todayRadio);
        QWidget::setTabOrder(todayRadio, todayTimeSpinBox);
        QWidget::setTabOrder(todayTimeSpinBox, fixedTimeRadio);
        QWidget::setTabOrder(fixedTimeRadio, fixedDateTimeEdit);
        QWidget::setTabOrder(fixedDateTimeEdit, fixedDateTimeCurrentButton);
        QWidget::setTabOrder(fixedDateTimeCurrentButton, mouseTimeoutCheckbox);
        QWidget::setTabOrder(mouseTimeoutCheckbox, mouseTimeoutSpinBox);
        QWidget::setTabOrder(mouseTimeoutSpinBox, showFlipButtonsCheckbox);
        QWidget::setTabOrder(showFlipButtonsCheckbox, showNebulaBgButtonCheckbox);
        QWidget::setTabOrder(showNebulaBgButtonCheckbox, sphericMirrorCheckbox);
        QWidget::setTabOrder(sphericMirrorCheckbox, diskViewportCheckbox);
        QWidget::setTabOrder(diskViewportCheckbox, gravityLabelCheckbox);
        QWidget::setTabOrder(gravityLabelCheckbox, selectSingleConstellationButton);
        QWidget::setTabOrder(selectSingleConstellationButton, autoZoomResetsDirectionCheckbox);
        QWidget::setTabOrder(autoZoomResetsDirectionCheckbox, screenshotBrowseButton);
        QWidget::setTabOrder(screenshotBrowseButton, screenshotDirEdit);
        QWidget::setTabOrder(screenshotDirEdit, invertScreenShotColorsCheckBox);
        QWidget::setTabOrder(invertScreenShotColorsCheckBox, getStarsButton);
        QWidget::setTabOrder(getStarsButton, downloadRetryButton);
        QWidget::setTabOrder(downloadRetryButton, downloadCancelButton);
        QWidget::setTabOrder(downloadCancelButton, scriptInfoBrowser);
        QWidget::setTabOrder(scriptInfoBrowser, runScriptButton);
        QWidget::setTabOrder(runScriptButton, stopScriptButton);
        QWidget::setTabOrder(stopScriptButton, closeWindowAtScriptRunCheckbox);
        QWidget::setTabOrder(closeWindowAtScriptRunCheckbox, pluginsInfoBrowser);
        QWidget::setTabOrder(pluginsInfoBrowser, pluginLoadAtStartupCheckBox);
        QWidget::setTabOrder(pluginLoadAtStartupCheckBox, pluginConfigureButton);

        retranslateUi(configurationDialogForm);
        QObject::connect(stackListWidget, SIGNAL(currentRowChanged(int)), configurationStackedWidget, SLOT(setCurrentIndex(int)));

        QMetaObject::connectSlotsByName(configurationDialogForm);
    } // setupUi

    void retranslateUi(QWidget *configurationDialogForm)
    {
        stelWindowTitle->setText(QApplication::translate("configurationDialogForm", "Configuration", 0, QApplication::UnicodeUTF8));
        closeStelWindow->setText(QString());
        groupBox_2->setTitle(QApplication::translate("configurationDialogForm", "Program language", 0, QApplication::UnicodeUTF8));
        groupBox_6->setTitle(QApplication::translate("configurationDialogForm", "Default options", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        setViewingOptionAsDefaultPushButton->setWhatsThis(QApplication::translate("configurationDialogForm", "Save the settings you've changed this session to be the same the next time you start Stellarium", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        setViewingOptionAsDefaultPushButton->setText(QApplication::translate("configurationDialogForm", "Save settings", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        restoreDefaultsButton->setWhatsThis(QApplication::translate("configurationDialogForm", "Restore the default settings that came with Stellarium", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        restoreDefaultsButton->setText(QApplication::translate("configurationDialogForm", "Restore defaults", 0, QApplication::UnicodeUTF8));
        saveDefaultOptionsLabel->setText(QApplication::translate("configurationDialogForm", "Restoring default settings requires a restart of Stellarium. Saving all the current options includes the current FOV and direction of view for use at next startup.", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        startupFOVLabel->setStatusTip(QApplication::translate("configurationDialogForm", "The width of your view when Stellarium starts", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_STATUSTIP
        startupDirectionOfViewlabel->setStatusTip(QApplication::translate("configurationDialogForm", "The direction you're looking when Stellarium starts", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        groupBox_4->setTitle(QApplication::translate("configurationDialogForm", "Selected object information", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        allSelectedInfoRadio->setToolTip(QApplication::translate("configurationDialogForm", "Display all information available", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        allSelectedInfoRadio->setText(QApplication::translate("configurationDialogForm", "All available", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        briefSelectedInfoRadio->setToolTip(QApplication::translate("configurationDialogForm", "Display less information", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        briefSelectedInfoRadio->setText(QApplication::translate("configurationDialogForm", "Short", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        noSelectedInfoRadio->setToolTip(QApplication::translate("configurationDialogForm", "Display no information", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        noSelectedInfoRadio->setText(QApplication::translate("configurationDialogForm", "None", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        customSelectedInfoRadio->setToolTip(QApplication::translate("configurationDialogForm", "Display user settings information", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        customSelectedInfoRadio->setText(QApplication::translate("configurationDialogForm", "Customized", 0, QApplication::UnicodeUTF8));
        groupBoxDisplayedFields->setTitle(QApplication::translate("configurationDialogForm", "Displayed fields", 0, QApplication::UnicodeUTF8));
        checkBoxVisualMag->setText(QApplication::translate("configurationDialogForm", "Visual magnitude", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        checkBoxExtra1->setToolTip(QApplication::translate("configurationDialogForm", "Spectral class, nebula type, etc.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        checkBoxExtra1->setText(QApplication::translate("configurationDialogForm", "Additional information 1", 0, QApplication::UnicodeUTF8));
        checkBoxExtra3->setText(QApplication::translate("configurationDialogForm", "Additional information 3", 0, QApplication::UnicodeUTF8));
        checkBoxCatalogNumbers->setText(QApplication::translate("configurationDialogForm", "Catalog number(s)", 0, QApplication::UnicodeUTF8));
        checkBoxName->setText(QApplication::translate("configurationDialogForm", "Name", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        checkBoxExtra2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        checkBoxExtra2->setText(QApplication::translate("configurationDialogForm", "Additional information 2", 0, QApplication::UnicodeUTF8));
        checkBoxAbsoluteMag->setText(QApplication::translate("configurationDialogForm", "Absolute magnitude", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        checkBoxAltAz->setToolTip(QApplication::translate("configurationDialogForm", "Horizontal coordinates", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        checkBoxAltAz->setText(QApplication::translate("configurationDialogForm", "Altitude/Azimuth", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        checkBoxSize->setToolTip(QApplication::translate("configurationDialogForm", "Angular or physical size", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        checkBoxSize->setText(QApplication::translate("configurationDialogForm", "Size", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        checkBoxRaDecOfDate->setToolTip(QApplication::translate("configurationDialogForm", "Geocentric equatorial coordinates, equinox of date", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        checkBoxRaDecOfDate->setText(QApplication::translate("configurationDialogForm", "Right ascension/Declination (of date)", 0, QApplication::UnicodeUTF8));
        checkBoxDistance->setText(QApplication::translate("configurationDialogForm", "Distance", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        checkBoxRaDecJ2000->setToolTip(QApplication::translate("configurationDialogForm", "Geocentric equatorial coordinates, equinox of J2000.0", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        checkBoxRaDecJ2000->setText(QApplication::translate("configurationDialogForm", "Right ascension/Declination (J2000)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        checkBoxHourAngle->setToolTip(QApplication::translate("configurationDialogForm", "Topocentric equatorial coordinates", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        checkBoxHourAngle->setText(QApplication::translate("configurationDialogForm", "Hour angle/Declination", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("configurationDialogForm", "Control", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        enableKeysNavigationCheckBox->setToolTip(QApplication::translate("configurationDialogForm", "Allow keyboard to pan and zoom", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        enableKeysNavigationCheckBox->setText(QApplication::translate("configurationDialogForm", "Enable keyboard navigation", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        enableMouseNavigationCheckBox->setToolTip(QApplication::translate("configurationDialogForm", "Allow mouse to pan (drag) and zoom (mousewheel)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        enableMouseNavigationCheckBox->setText(QApplication::translate("configurationDialogForm", "Enable mouse navigation", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("configurationDialogForm", "Startup date and time", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        systemTimeRadio->setToolTip(QApplication::translate("configurationDialogForm", "Starts Stellarium at system clock date and time", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        systemTimeRadio->setText(QApplication::translate("configurationDialogForm", "System date and time", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        todayRadio->setToolTip(QApplication::translate("configurationDialogForm", "Sets the simulation time to the next instance of this time of day when Stellarium starts", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        todayRadio->setText(QApplication::translate("configurationDialogForm", "System date at:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        fixedTimeRadio->setToolTip(QApplication::translate("configurationDialogForm", "Use a specific date and time when Stellarium starts up", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        fixedTimeRadio->setText(QApplication::translate("configurationDialogForm", "Other:", 0, QApplication::UnicodeUTF8));
        fixedDateTimeCurrentButton->setText(QApplication::translate("configurationDialogForm", "use current", 0, QApplication::UnicodeUTF8));
        groupBox_9->setTitle(QApplication::translate("configurationDialogForm", "Other", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mouseTimeoutCheckbox->setToolTip(QApplication::translate("configurationDialogForm", "Hides the mouse cursor when inactive", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mouseTimeoutCheckbox->setText(QApplication::translate("configurationDialogForm", "Mouse cursor timeout (seconds):", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        showFlipButtonsCheckbox->setToolTip(QApplication::translate("configurationDialogForm", "Toggle vertical and horizontal image flip buttons.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        showFlipButtonsCheckbox->setText(QApplication::translate("configurationDialogForm", "Show flip buttons", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        showNebulaBgButtonCheckbox->setToolTip(QApplication::translate("configurationDialogForm", "Toggle display backgrounds of the nebulae.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        showNebulaBgButtonCheckbox->setText(QApplication::translate("configurationDialogForm", "Show nebula background button", 0, QApplication::UnicodeUTF8));
        groupBox_7->setTitle(QApplication::translate("configurationDialogForm", "Planetarium options", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        sphericMirrorCheckbox->setToolTip(QApplication::translate("configurationDialogForm", "Spheric mirror distortion is used when projecting Stellarium onto a spheric mirror for low-cost planetarium systems.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        sphericMirrorCheckbox->setText(QApplication::translate("configurationDialogForm", "Spheric mirror distortion", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        gravityLabelCheckbox->setToolTip(QApplication::translate("configurationDialogForm", "Align labels with the horizon", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        gravityLabelCheckbox->setText(QApplication::translate("configurationDialogForm", "Gravity labels", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        autoZoomResetsDirectionCheckbox->setToolTip(QApplication::translate("configurationDialogForm", "When enabled, the \"auto zoom out\" key will also set the initial viewing direction", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        autoZoomResetsDirectionCheckbox->setText(QApplication::translate("configurationDialogForm", "Auto zoom out returns to initial direction of view", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        diskViewportCheckbox->setToolTip(QApplication::translate("configurationDialogForm", "Mask out everything outside a central circle in the main view", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        diskViewportCheckbox->setText(QApplication::translate("configurationDialogForm", "Disc viewport", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        selectSingleConstellationButton->setStatusTip(QApplication::translate("configurationDialogForm", "Hide other constellations when you click one", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        selectSingleConstellationButton->setText(QApplication::translate("configurationDialogForm", "Select single constellation", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("configurationDialogForm", "Screenshots", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("configurationDialogForm", "Screenshot Directory", 0, QApplication::UnicodeUTF8));
        screenshotBrowseButton->setText(QString());
        invertScreenShotColorsCheckBox->setText(QApplication::translate("configurationDialogForm", "Invert colors", 0, QApplication::UnicodeUTF8));
        contentBox->setTitle(QApplication::translate("configurationDialogForm", "Star catalog updates", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        getStarsButton->setToolTip(QApplication::translate("configurationDialogForm", "Click here to start downloading", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        getStarsButton->setDescription(QApplication::translate("configurationDialogForm", "Download this file to view even more stars", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        downloadRetryButton->setToolTip(QApplication::translate("configurationDialogForm", "Restart the download", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        downloadRetryButton->setText(QApplication::translate("configurationDialogForm", "Retry", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        downloadCancelButton->setToolTip(QApplication::translate("configurationDialogForm", "Stop the download. You can always restart it later", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        downloadCancelButton->setText(QApplication::translate("configurationDialogForm", "Cancel", 0, QApplication::UnicodeUTF8));
        groupBox_8->setTitle(QApplication::translate("configurationDialogForm", "Options", 0, QApplication::UnicodeUTF8));
        scriptStatusLabel->setText(QString());
        closeWindowAtScriptRunCheckbox->setText(QApplication::translate("configurationDialogForm", "Close window when script runs", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        runScriptButton->setToolTip(QApplication::translate("configurationDialogForm", "Run the selected script", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        runScriptButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        stopScriptButton->setToolTip(QApplication::translate("configurationDialogForm", "Stop a running script", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        stopScriptButton->setText(QString());
        pluginsGroupBox->setTitle(QApplication::translate("configurationDialogForm", "Options", 0, QApplication::UnicodeUTF8));
        pluginLoadAtStartupCheckBox->setText(QApplication::translate("configurationDialogForm", "Load at startup", 0, QApplication::UnicodeUTF8));
        pluginConfigureButton->setText(QApplication::translate("configurationDialogForm", "configure", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = stackListWidget->isSortingEnabled();
        stackListWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = stackListWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("configurationDialogForm", "Main", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem1 = stackListWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("configurationDialogForm", "Information", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem1->setToolTip(QApplication::translate("configurationDialogForm", "Selected object information", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem2 = stackListWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("configurationDialogForm", "Navigation", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem3 = stackListWidget->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("configurationDialogForm", "Tools", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem4 = stackListWidget->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("configurationDialogForm", "Scripts", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem5 = stackListWidget->item(5);
        ___qlistwidgetitem5->setText(QApplication::translate("configurationDialogForm", "Plugins", 0, QApplication::UnicodeUTF8));
        stackListWidget->setSortingEnabled(__sortingEnabled);

        Q_UNUSED(configurationDialogForm);
    } // retranslateUi

};

namespace Ui {
    class configurationDialogForm: public Ui_configurationDialogForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURATIONDIALOG_H
