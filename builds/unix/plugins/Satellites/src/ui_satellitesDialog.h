/********************************************************************************
** Form generated from reading UI file 'satellitesDialog.ui'
**
** Created: Sat Apr 20 14:27:46 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SATELLITESDIALOG_H
#define UI_SATELLITESDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDateTimeEdit>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListView>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QTextBrowser>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "Dialog.hpp"

QT_BEGIN_NAMESPACE

class Ui_satellitesDialog
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
    QVBoxLayout *verticalLayoutSettungsTab;
    QGroupBox *updatesGroup;
    QVBoxLayout *verticalLayout_12;
    QCheckBox *internetUpdatesCheckbox;
    QGridLayout *gridLayout;
    QLabel *label_7;
    QDateTimeEdit *lastUpdateDateTimeEdit;
    QLabel *label_9;
    QSpinBox *updateFrequencySpinBox;
    QLabel *nextUpdateLabel;
    QSpacerItem *horizontalSpacer;
    QPushButton *updateButton;
    QGroupBox *labelsGroup;
    QGridLayout *gridLayout_2;
    QLabel *label_10;
    QSpinBox *fontSizeSpinBox;
    QGroupBox *orbitLinesGroup;
    QGridLayout *gridLayout_3;
    QLabel *label_5;
    QSpinBox *orbitSegmentsSpin;
    QLabel *label_8;
    QSpinBox *orbitDurationSpin;
    QSpinBox *orbitFadeSpin;
    QLabel *label_6;
    QSpacerItem *verticalSpacer_3;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *restoreDefaultsButton;
    QPushButton *saveSettingsButton;
    QWidget *satellitesTab;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout;
    QComboBox *groupsCombo;
    QLineEdit *lineEditSearch;
    QListView *satellitesList;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *visibleCheckbox;
    QCheckBox *orbitCheckbox;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLineEdit *idLineEdit;
    QHBoxLayout *horizontalLayoutCatalogNumber;
    QLabel *labelCatalogNumber;
    QLineEdit *lineEditCatalogNumber;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_4;
    QTextEdit *descriptionTextEdit;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_3;
    QTextEdit *groupsTextEdit;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_2;
    QTextEdit *tleTextEdit;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *removeSatellitesButton;
    QPushButton *addSatellitesButton;
    QPushButton *commsButton;
    QPushButton *saveSatellitesButton;
    QWidget *sourcesTab;
    QVBoxLayout *verticalLayout_10;
    QListWidget *sourceList;
    QHBoxLayout *horizontalLayout;
    QLineEdit *sourceEdit;
    QPushButton *addSourceButton;
    QPushButton *deleteSourceButton;
    QWidget *aboutTab;
    QVBoxLayout *verticalLayout_11;
    QTextBrowser *aboutTextBrowser;

    void setupUi(QWidget *satellitesDialog)
    {
        if (satellitesDialog->objectName().isEmpty())
            satellitesDialog->setObjectName(QString::fromUtf8("satellitesDialog"));
        satellitesDialog->resize(528, 494);
        verticalLayout_2 = new QVBoxLayout(satellitesDialog);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        TitleBar = new BarFrame(satellitesDialog);
        TitleBar->setObjectName(QString::fromUtf8("TitleBar"));
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

        tabs = new QTabWidget(satellitesDialog);
        tabs->setObjectName(QString::fromUtf8("tabs"));
        tabs->setDocumentMode(false);
        settingsTab = new QWidget();
        settingsTab->setObjectName(QString::fromUtf8("settingsTab"));
        verticalLayoutSettungsTab = new QVBoxLayout(settingsTab);
        verticalLayoutSettungsTab->setSpacing(0);
        verticalLayoutSettungsTab->setContentsMargins(0, 0, 0, 0);
        verticalLayoutSettungsTab->setObjectName(QString::fromUtf8("verticalLayoutSettungsTab"));
        updatesGroup = new QGroupBox(settingsTab);
        updatesGroup->setObjectName(QString::fromUtf8("updatesGroup"));
        updatesGroup->setFlat(true);
        updatesGroup->setCheckable(false);
        verticalLayout_12 = new QVBoxLayout(updatesGroup);
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        internetUpdatesCheckbox = new QCheckBox(updatesGroup);
        internetUpdatesCheckbox->setObjectName(QString::fromUtf8("internetUpdatesCheckbox"));

        verticalLayout_12->addWidget(internetUpdatesCheckbox);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_7 = new QLabel(updatesGroup);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 0, 0, 1, 1);

        lastUpdateDateTimeEdit = new QDateTimeEdit(updatesGroup);
        lastUpdateDateTimeEdit->setObjectName(QString::fromUtf8("lastUpdateDateTimeEdit"));
        lastUpdateDateTimeEdit->setEnabled(false);
        lastUpdateDateTimeEdit->setFrame(false);
        lastUpdateDateTimeEdit->setButtonSymbols(QAbstractSpinBox::NoButtons);

        gridLayout->addWidget(lastUpdateDateTimeEdit, 0, 2, 1, 1);

        label_9 = new QLabel(updatesGroup);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 1, 0, 1, 1);

        updateFrequencySpinBox = new QSpinBox(updatesGroup);
        updateFrequencySpinBox->setObjectName(QString::fromUtf8("updateFrequencySpinBox"));
        updateFrequencySpinBox->setMinimum(1);
        updateFrequencySpinBox->setMaximum(9999);
        updateFrequencySpinBox->setValue(1);

        gridLayout->addWidget(updateFrequencySpinBox, 1, 2, 1, 1);

        nextUpdateLabel = new QLabel(updatesGroup);
        nextUpdateLabel->setObjectName(QString::fromUtf8("nextUpdateLabel"));
        nextUpdateLabel->setText(QString::fromUtf8("[next update info]"));

        gridLayout->addWidget(nextUpdateLabel, 2, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(17, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 1, 1, 1);

        updateButton = new QPushButton(updatesGroup);
        updateButton->setObjectName(QString::fromUtf8("updateButton"));

        gridLayout->addWidget(updateButton, 2, 2, 1, 1);


        verticalLayout_12->addLayout(gridLayout);


        verticalLayoutSettungsTab->addWidget(updatesGroup);

        labelsGroup = new QGroupBox(settingsTab);
        labelsGroup->setObjectName(QString::fromUtf8("labelsGroup"));
        labelsGroup->setFlat(true);
        labelsGroup->setCheckable(true);
        gridLayout_2 = new QGridLayout(labelsGroup);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_10 = new QLabel(labelsGroup);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_2->addWidget(label_10, 0, 0, 1, 1);

        fontSizeSpinBox = new QSpinBox(labelsGroup);
        fontSizeSpinBox->setObjectName(QString::fromUtf8("fontSizeSpinBox"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(fontSizeSpinBox->sizePolicy().hasHeightForWidth());
        fontSizeSpinBox->setSizePolicy(sizePolicy);
        fontSizeSpinBox->setMinimum(-100);
        fontSizeSpinBox->setMaximum(200);
        fontSizeSpinBox->setValue(10);

        gridLayout_2->addWidget(fontSizeSpinBox, 0, 1, 1, 1);


        verticalLayoutSettungsTab->addWidget(labelsGroup);

        orbitLinesGroup = new QGroupBox(settingsTab);
        orbitLinesGroup->setObjectName(QString::fromUtf8("orbitLinesGroup"));
        orbitLinesGroup->setFlat(true);
        orbitLinesGroup->setCheckable(true);
        gridLayout_3 = new QGridLayout(orbitLinesGroup);
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_5 = new QLabel(orbitLinesGroup);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_3->addWidget(label_5, 0, 0, 1, 1);

        orbitSegmentsSpin = new QSpinBox(orbitLinesGroup);
        orbitSegmentsSpin->setObjectName(QString::fromUtf8("orbitSegmentsSpin"));
        orbitSegmentsSpin->setMinimum(3);
        orbitSegmentsSpin->setMaximum(200);
        orbitSegmentsSpin->setValue(60);

        gridLayout_3->addWidget(orbitSegmentsSpin, 0, 1, 1, 1);

        label_8 = new QLabel(orbitLinesGroup);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_3->addWidget(label_8, 0, 2, 1, 1);

        orbitDurationSpin = new QSpinBox(orbitLinesGroup);
        orbitDurationSpin->setObjectName(QString::fromUtf8("orbitDurationSpin"));
        orbitDurationSpin->setMinimum(5);
        orbitDurationSpin->setMaximum(120);
        orbitDurationSpin->setValue(15);

        gridLayout_3->addWidget(orbitDurationSpin, 0, 3, 1, 1);

        orbitFadeSpin = new QSpinBox(orbitLinesGroup);
        orbitFadeSpin->setObjectName(QString::fromUtf8("orbitFadeSpin"));
        orbitFadeSpin->setMaximum(50);
        orbitFadeSpin->setValue(5);

        gridLayout_3->addWidget(orbitFadeSpin, 1, 1, 1, 1);

        label_6 = new QLabel(orbitLinesGroup);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_3->addWidget(label_6, 1, 0, 1, 1);


        verticalLayoutSettungsTab->addWidget(orbitLinesGroup);

        verticalSpacer_3 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutSettungsTab->addItem(verticalSpacer_3);

        frame = new QFrame(settingsTab);
        frame->setObjectName(QString::fromUtf8("frame"));
        horizontalLayout_7 = new QHBoxLayout(frame);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(9, 0, 9, 9);
        restoreDefaultsButton = new QPushButton(frame);
        restoreDefaultsButton->setObjectName(QString::fromUtf8("restoreDefaultsButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(restoreDefaultsButton->sizePolicy().hasHeightForWidth());
        restoreDefaultsButton->setSizePolicy(sizePolicy1);

        horizontalLayout_7->addWidget(restoreDefaultsButton);

        saveSettingsButton = new QPushButton(frame);
        saveSettingsButton->setObjectName(QString::fromUtf8("saveSettingsButton"));
        sizePolicy1.setHeightForWidth(saveSettingsButton->sizePolicy().hasHeightForWidth());
        saveSettingsButton->setSizePolicy(sizePolicy1);

        horizontalLayout_7->addWidget(saveSettingsButton);


        verticalLayoutSettungsTab->addWidget(frame);

        tabs->addTab(settingsTab, QString());
        satellitesTab = new QWidget();
        satellitesTab->setObjectName(QString::fromUtf8("satellitesTab"));
        horizontalLayout_5 = new QHBoxLayout(satellitesTab);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupsCombo = new QComboBox(satellitesTab);
        groupsCombo->setObjectName(QString::fromUtf8("groupsCombo"));

        verticalLayout->addWidget(groupsCombo);

        lineEditSearch = new QLineEdit(satellitesTab);
        lineEditSearch->setObjectName(QString::fromUtf8("lineEditSearch"));

        verticalLayout->addWidget(lineEditSearch);

        satellitesList = new QListView(satellitesTab);
        satellitesList->setObjectName(QString::fromUtf8("satellitesList"));
        satellitesList->setSelectionMode(QAbstractItemView::ExtendedSelection);

        verticalLayout->addWidget(satellitesList);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        visibleCheckbox = new QCheckBox(satellitesTab);
        visibleCheckbox->setObjectName(QString::fromUtf8("visibleCheckbox"));
        visibleCheckbox->setTristate(false);

        horizontalLayout_3->addWidget(visibleCheckbox);

        orbitCheckbox = new QCheckBox(satellitesTab);
        orbitCheckbox->setObjectName(QString::fromUtf8("orbitCheckbox"));
        orbitCheckbox->setTristate(false);

        horizontalLayout_3->addWidget(orbitCheckbox);


        verticalLayout->addLayout(horizontalLayout_3);


        horizontalLayout_5->addLayout(verticalLayout);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label = new QLabel(satellitesTab);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_4->addWidget(label);

        idLineEdit = new QLineEdit(satellitesTab);
        idLineEdit->setObjectName(QString::fromUtf8("idLineEdit"));
        idLineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        idLineEdit->setReadOnly(true);

        horizontalLayout_4->addWidget(idLineEdit);


        verticalLayout_7->addLayout(horizontalLayout_4);

        horizontalLayoutCatalogNumber = new QHBoxLayout();
        horizontalLayoutCatalogNumber->setObjectName(QString::fromUtf8("horizontalLayoutCatalogNumber"));
        labelCatalogNumber = new QLabel(satellitesTab);
        labelCatalogNumber->setObjectName(QString::fromUtf8("labelCatalogNumber"));

        horizontalLayoutCatalogNumber->addWidget(labelCatalogNumber);

        lineEditCatalogNumber = new QLineEdit(satellitesTab);
        lineEditCatalogNumber->setObjectName(QString::fromUtf8("lineEditCatalogNumber"));
        lineEditCatalogNumber->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEditCatalogNumber->setReadOnly(true);

        horizontalLayoutCatalogNumber->addWidget(lineEditCatalogNumber);


        verticalLayout_7->addLayout(horizontalLayoutCatalogNumber);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_4 = new QLabel(satellitesTab);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_6->addWidget(label_4);

        descriptionTextEdit = new QTextEdit(satellitesTab);
        descriptionTextEdit->setObjectName(QString::fromUtf8("descriptionTextEdit"));
        QFont font;
        font.setFamily(QString::fromUtf8("Bitstream Vera Sans"));
        descriptionTextEdit->setFont(font);
        descriptionTextEdit->setReadOnly(true);

        verticalLayout_6->addWidget(descriptionTextEdit);


        verticalLayout_7->addLayout(verticalLayout_6);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_3 = new QLabel(satellitesTab);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_4->addWidget(label_3);

        groupsTextEdit = new QTextEdit(satellitesTab);
        groupsTextEdit->setObjectName(QString::fromUtf8("groupsTextEdit"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(20);
        sizePolicy2.setHeightForWidth(groupsTextEdit->sizePolicy().hasHeightForWidth());
        groupsTextEdit->setSizePolicy(sizePolicy2);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Bitstream Vera Sans"));
        font1.setPointSize(10);
        groupsTextEdit->setFont(font1);
        groupsTextEdit->setReadOnly(true);

        verticalLayout_4->addWidget(groupsTextEdit);


        verticalLayout_7->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_2 = new QLabel(satellitesTab);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_5->addWidget(label_2);

        tleTextEdit = new QTextEdit(satellitesTab);
        tleTextEdit->setObjectName(QString::fromUtf8("tleTextEdit"));
        sizePolicy2.setHeightForWidth(tleTextEdit->sizePolicy().hasHeightForWidth());
        tleTextEdit->setSizePolicy(sizePolicy2);
        QFont font2;
        font2.setFamily(QString::fromUtf8("Bitstream Vera Sans Mono"));
        font2.setPointSize(8);
        tleTextEdit->setFont(font2);
        tleTextEdit->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        tleTextEdit->setLineWrapMode(QTextEdit::NoWrap);
        tleTextEdit->setReadOnly(true);

        verticalLayout_5->addWidget(tleTextEdit);


        verticalLayout_7->addLayout(verticalLayout_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        removeSatellitesButton = new QPushButton(satellitesTab);
        removeSatellitesButton->setObjectName(QString::fromUtf8("removeSatellitesButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(removeSatellitesButton->sizePolicy().hasHeightForWidth());
        removeSatellitesButton->setSizePolicy(sizePolicy3);

        horizontalLayout_2->addWidget(removeSatellitesButton);

        addSatellitesButton = new QPushButton(satellitesTab);
        addSatellitesButton->setObjectName(QString::fromUtf8("addSatellitesButton"));
        sizePolicy3.setHeightForWidth(addSatellitesButton->sizePolicy().hasHeightForWidth());
        addSatellitesButton->setSizePolicy(sizePolicy3);

        horizontalLayout_2->addWidget(addSatellitesButton);

        commsButton = new QPushButton(satellitesTab);
        commsButton->setObjectName(QString::fromUtf8("commsButton"));
        commsButton->setEnabled(false);
        sizePolicy3.setHeightForWidth(commsButton->sizePolicy().hasHeightForWidth());
        commsButton->setSizePolicy(sizePolicy3);
        commsButton->setCheckable(true);

        horizontalLayout_2->addWidget(commsButton);

        saveSatellitesButton = new QPushButton(satellitesTab);
        saveSatellitesButton->setObjectName(QString::fromUtf8("saveSatellitesButton"));
        saveSatellitesButton->setEnabled(true);
        sizePolicy3.setHeightForWidth(saveSatellitesButton->sizePolicy().hasHeightForWidth());
        saveSatellitesButton->setSizePolicy(sizePolicy3);

        horizontalLayout_2->addWidget(saveSatellitesButton);


        verticalLayout_7->addLayout(horizontalLayout_2);


        horizontalLayout_5->addLayout(verticalLayout_7);

        tabs->addTab(satellitesTab, QString());
        sourcesTab = new QWidget();
        sourcesTab->setObjectName(QString::fromUtf8("sourcesTab"));
        verticalLayout_10 = new QVBoxLayout(sourcesTab);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        sourceList = new QListWidget(sourcesTab);
        sourceList->setObjectName(QString::fromUtf8("sourceList"));
        sourceList->setEditTriggers(QAbstractItemView::DoubleClicked);
        sourceList->setSortingEnabled(false);

        verticalLayout_10->addWidget(sourceList);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        sourceEdit = new QLineEdit(sourcesTab);
        sourceEdit->setObjectName(QString::fromUtf8("sourceEdit"));

        horizontalLayout->addWidget(sourceEdit);

        addSourceButton = new QPushButton(sourcesTab);
        addSourceButton->setObjectName(QString::fromUtf8("addSourceButton"));

        horizontalLayout->addWidget(addSourceButton);

        deleteSourceButton = new QPushButton(sourcesTab);
        deleteSourceButton->setObjectName(QString::fromUtf8("deleteSourceButton"));

        horizontalLayout->addWidget(deleteSourceButton);


        verticalLayout_10->addLayout(horizontalLayout);

        tabs->addTab(sourcesTab, QString());
        aboutTab = new QWidget();
        aboutTab->setObjectName(QString::fromUtf8("aboutTab"));
        verticalLayout_11 = new QVBoxLayout(aboutTab);
        verticalLayout_11->setSpacing(9);
#ifndef Q_OS_MAC
        verticalLayout_11->setContentsMargins(9, 9, 9, 9);
#endif
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        aboutTextBrowser = new QTextBrowser(aboutTab);
        aboutTextBrowser->setObjectName(QString::fromUtf8("aboutTextBrowser"));
        aboutTextBrowser->setOpenExternalLinks(true);
        aboutTextBrowser->setOpenLinks(true);

        verticalLayout_11->addWidget(aboutTextBrowser);

        tabs->addTab(aboutTab, QString());

        verticalLayout_2->addWidget(tabs);

        QWidget::setTabOrder(tabs, internetUpdatesCheckbox);
        QWidget::setTabOrder(internetUpdatesCheckbox, lastUpdateDateTimeEdit);
        QWidget::setTabOrder(lastUpdateDateTimeEdit, updateFrequencySpinBox);
        QWidget::setTabOrder(updateFrequencySpinBox, updateButton);
        QWidget::setTabOrder(updateButton, labelsGroup);
        QWidget::setTabOrder(labelsGroup, fontSizeSpinBox);
        QWidget::setTabOrder(fontSizeSpinBox, orbitLinesGroup);
        QWidget::setTabOrder(orbitLinesGroup, orbitSegmentsSpin);
        QWidget::setTabOrder(orbitSegmentsSpin, orbitDurationSpin);
        QWidget::setTabOrder(orbitDurationSpin, orbitFadeSpin);
        QWidget::setTabOrder(orbitFadeSpin, restoreDefaultsButton);
        QWidget::setTabOrder(restoreDefaultsButton, saveSettingsButton);
        QWidget::setTabOrder(saveSettingsButton, groupsCombo);
        QWidget::setTabOrder(groupsCombo, lineEditSearch);
        QWidget::setTabOrder(lineEditSearch, satellitesList);
        QWidget::setTabOrder(satellitesList, visibleCheckbox);
        QWidget::setTabOrder(visibleCheckbox, orbitCheckbox);
        QWidget::setTabOrder(orbitCheckbox, idLineEdit);
        QWidget::setTabOrder(idLineEdit, lineEditCatalogNumber);
        QWidget::setTabOrder(lineEditCatalogNumber, descriptionTextEdit);
        QWidget::setTabOrder(descriptionTextEdit, groupsTextEdit);
        QWidget::setTabOrder(groupsTextEdit, tleTextEdit);
        QWidget::setTabOrder(tleTextEdit, removeSatellitesButton);
        QWidget::setTabOrder(removeSatellitesButton, addSatellitesButton);
        QWidget::setTabOrder(addSatellitesButton, commsButton);
        QWidget::setTabOrder(commsButton, saveSatellitesButton);
        QWidget::setTabOrder(saveSatellitesButton, sourceList);
        QWidget::setTabOrder(sourceList, sourceEdit);
        QWidget::setTabOrder(sourceEdit, addSourceButton);
        QWidget::setTabOrder(addSourceButton, deleteSourceButton);
        QWidget::setTabOrder(deleteSourceButton, aboutTextBrowser);

        retranslateUi(satellitesDialog);

        tabs->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(satellitesDialog);
    } // setupUi

    void retranslateUi(QWidget *satellitesDialog)
    {
        satellitesDialog->setWindowTitle(QApplication::translate("satellitesDialog", "Satellites Configuration", 0, QApplication::UnicodeUTF8));
        stelWindowTitle->setText(QApplication::translate("satellitesDialog", "Satellites Configuration", 0, QApplication::UnicodeUTF8));
        closeStelWindow->setText(QString());
        updatesGroup->setTitle(QApplication::translate("satellitesDialog", "Update TLE lists from Internet sources", 0, QApplication::UnicodeUTF8));
        internetUpdatesCheckbox->setText(QApplication::translate("satellitesDialog", "Update from Internet sources", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("satellitesDialog", "Last update:", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("satellitesDialog", "Update frequency (hours):", 0, QApplication::UnicodeUTF8));
        updateButton->setText(QApplication::translate("satellitesDialog", "Update now", 0, QApplication::UnicodeUTF8));
        labelsGroup->setTitle(QApplication::translate("satellitesDialog", "Labels", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("satellitesDialog", "Label font size (pixels):", 0, QApplication::UnicodeUTF8));
        orbitLinesGroup->setTitle(QApplication::translate("satellitesDialog", "Orbit lines", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_5->setToolTip(QApplication::translate("satellitesDialog", "Number of segments used to draw the line", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_5->setText(QApplication::translate("satellitesDialog", "Number of  segments:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        orbitSegmentsSpin->setToolTip(QApplication::translate("satellitesDialog", "Number of segments used to draw the line", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        label_8->setToolTip(QApplication::translate("satellitesDialog", "Duration of a single segment in seconds", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_8->setText(QApplication::translate("satellitesDialog", "Segment length (s):", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        orbitDurationSpin->setToolTip(QApplication::translate("satellitesDialog", "Duration of a single segment in seconds", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        orbitFadeSpin->setToolTip(QApplication::translate("satellitesDialog", "Number of segments used to draw each end of the line", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        label_6->setToolTip(QApplication::translate("satellitesDialog", "Number of segments used to draw each end of the line", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_6->setText(QApplication::translate("satellitesDialog", "Fade length:", 0, QApplication::UnicodeUTF8));
        restoreDefaultsButton->setText(QApplication::translate("satellitesDialog", "Restore default settings", 0, QApplication::UnicodeUTF8));
        saveSettingsButton->setText(QApplication::translate("satellitesDialog", "Save settings as default", 0, QApplication::UnicodeUTF8));
        tabs->setTabText(tabs->indexOf(settingsTab), QApplication::translate("satellitesDialog", "Settings", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        visibleCheckbox->setToolTip(QApplication::translate("satellitesDialog", "Display the selected satellite(s)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        visibleCheckbox->setText(QApplication::translate("satellitesDialog", "Displayed", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        orbitCheckbox->setToolTip(QApplication::translate("satellitesDialog", "Display orbit line(s) for the selected satellite(s)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        orbitCheckbox->setText(QApplication::translate("satellitesDialog", "Orbit", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("satellitesDialog", "Name:", 0, QApplication::UnicodeUTF8));
        labelCatalogNumber->setText(QApplication::translate("satellitesDialog", "Catalog number:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("satellitesDialog", "Description:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("satellitesDialog", "Groups:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        groupsTextEdit->setToolTip(QApplication::translate("satellitesDialog", "Comma separated list of groups", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("satellitesDialog", "TLE data:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        tleTextEdit->setToolTip(QApplication::translate("satellitesDialog", "NORAD two line element orbit data", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        removeSatellitesButton->setToolTip(QApplication::translate("satellitesDialog", "Remove the selected satellites", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        addSatellitesButton->setToolTip(QApplication::translate("satellitesDialog", "Add more satellites", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        commsButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        saveSatellitesButton->setToolTip(QApplication::translate("satellitesDialog", "Save changes", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        saveSatellitesButton->setText(QString());
        tabs->setTabText(tabs->indexOf(satellitesTab), QApplication::translate("satellitesDialog", "Satellites", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        sourceEdit->setToolTip(QApplication::translate("satellitesDialog", "Enter or edit the URL of the selected source. Changes are saved by pressing Enter.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        addSourceButton->setToolTip(QApplication::translate("satellitesDialog", "Add new source", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        addSourceButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        deleteSourceButton->setToolTip(QApplication::translate("satellitesDialog", "Remove selected source", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        deleteSourceButton->setText(QString());
        tabs->setTabText(tabs->indexOf(sourcesTab), QApplication::translate("satellitesDialog", "Sources", 0, QApplication::UnicodeUTF8));
        tabs->setTabText(tabs->indexOf(aboutTab), QApplication::translate("satellitesDialog", "About", "tab in plugin windows", QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class satellitesDialog: public Ui_satellitesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SATELLITESDIALOG_H
