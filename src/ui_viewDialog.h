/********************************************************************************
** Form generated from reading UI file 'viewDialog.ui'
**
** Created: Sun Oct 28 11:01:50 2012
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWDIALOG_H
#define UI_VIEWDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QStackedWidget>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "Dialog.hpp"

QT_BEGIN_NAMESPACE

class Ui_viewDialogForm
{
public:
    QVBoxLayout *vboxLayout;
    BarFrame *TitleBar;
    QHBoxLayout *hboxLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *stelWindowTitle;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *closeStelWindow;
    QFrame *viewContent;
    QVBoxLayout *verticalLayout_5;
    QListWidget *stackListWidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout;
    QGroupBox *starGroupBox;
    QVBoxLayout *verticalLayout;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QDoubleSpinBox *starScaleRadiusDoubleSpinBox;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_7;
    QDoubleSpinBox *starRelativeScaleDoubleSpinBox;
    QFrame *frame_12;
    QHBoxLayout *horizontalLayout_9;
    QCheckBox *starTwinkleCheckBox;
    QDoubleSpinBox *starTwinkleAmountDoubleSpinBox;
    QCheckBox *adaptationCheckbox;
    QGroupBox *planetsGroupBox;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *showPlanetCheckBox;
    QCheckBox *planetMarkerCheckBox;
    QCheckBox *planetOrbitCheckBox;
    QCheckBox *planetLightSpeedCheckBox;
    QCheckBox *planetScaleMoonCheckBox;
    QGroupBox *atmosphereGroupBox;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *showAtmosphereCheckBox;
    QHBoxLayout *_2;
    QLabel *label_4;
    QSpinBox *lightPollutionSpinBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonAtmosphereDetails;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *labelsGroupBox;
    QGridLayout *gridLayoutx;
    QCheckBox *starLabelCheckBox;
    QSlider *starsLabelsHorizontalSlider;
    QCheckBox *nebulaLabelCheckBox;
    QSlider *nebulasLabelsHorizontalSlider;
    QCheckBox *planetLabelCheckBox;
    QSlider *planetsLabelsHorizontalSlider;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_5;
    QGroupBox *shootingStarsGroupBox;
    QHBoxLayout *horizontalLayout_6;
    QFrame *frame_9;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_14;
    QFrame *frame_11;
    QVBoxLayout *verticalLayout_9;
    QFrame *frame_8;
    QHBoxLayout *horizontalLayout_7;
    QRadioButton *zhrNone;
    QRadioButton *zhr10;
    QRadioButton *zhr80;
    QRadioButton *zhr10000;
    QRadioButton *zhr144000;
    QLabel *zhrLabel;
    QSpacerItem *horizontalSpacer;
    QWidget *page_2;
    QGridLayout *gridLayout_2;
    QGroupBox *constellationGroupBox;
    QVBoxLayout *verticalLayout_11;
    QCheckBox *showConstellationLinesCheckBox;
    QCheckBox *showConstellationLabelsCheckBox;
    QCheckBox *showConstellationBoundariesCheckBox;
    QCheckBox *showConstellationArtCheckBox;
    QHBoxLayout *hboxLayout1;
    QLabel *label_6;
    QDoubleSpinBox *constellationArtBrightnessSpinBox;
    QSpacerItem *verticalSpacer_3;
    QGroupBox *celestialSphereGroupBox;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_13;
    QCheckBox *showEquatorialJ2000GridCheckBox;
    QCheckBox *showEquatorialGridCheckBox;
    QCheckBox *showEclipticGridJ2000CheckBox;
    QCheckBox *showAzimuthalGridCheckBox;
    QCheckBox *showGalacticGridCheckBox;
    QVBoxLayout *verticalLayout_15;
    QCheckBox *showEquatorLineCheckBox;
    QCheckBox *showMeridianLineCheckBox;
    QCheckBox *showHorizonLineCheckBox;
    QCheckBox *showEclipticLineCheckBox;
    QCheckBox *showGalacticPlaneLineCheckBox;
    QVBoxLayout *verticalLayout_16;
    QCheckBox *showCardinalPointsCheckBox;
    QGroupBox *setProjectionGroupBox;
    QHBoxLayout *horizontalLayout_10;
    QListWidget *projectionListWidget;
    QTextBrowser *projectionTextBrowser;
    QWidget *page_3;
    QGridLayout *gridLayout_3;
    QListWidget *landscapesListWidget;
    QTextBrowser *landscapeTextBrowser;
    QPushButton *pushButtonAddRemoveLandscapes;
    QGroupBox *landscapeOptionsGroupBox;
    QGridLayout *gridLayout1;
    QCheckBox *showGroundCheckBox;
    QCheckBox *showFogCheckBox;
    QCheckBox *landscapePositionCheckBox;
    QCheckBox *useAsDefaultLandscapeCheckBox;
    QWidget *page_4;
    QGridLayout *gridLayout_4;
    QListWidget *culturesListWidget;
    QTextBrowser *skyCultureTextBrowser;
    QGroupBox *starloreOptionsgroupBox;
    QVBoxLayout *verticalLayout_8;
    QCheckBox *useAsDefaultSkyCultureCheckBox;
    QWidget *page_5;
    QVBoxLayout *verticalLayout_12;
    QFrame *frame_13;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_6;
    QListWidget *skyLayerListWidget;
    QFrame *frame_14;
    QVBoxLayout *verticalLayout_7;
    QTextBrowser *skyLayerTextBrowser;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_5;
    QCheckBox *skyLayerEnableCheckBox;

    void setupUi(QWidget *viewDialogForm)
    {
        if (viewDialogForm->objectName().isEmpty())
            viewDialogForm->setObjectName(QString::fromUtf8("viewDialogForm"));
        viewDialogForm->resize(0, 0);
        QFont font;
        viewDialogForm->setFont(font);
        viewDialogForm->setAutoFillBackground(false);
        viewDialogForm->setStyleSheet(QString::fromUtf8(""));
        vboxLayout = new QVBoxLayout(viewDialogForm);
        vboxLayout->setSpacing(0);
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        TitleBar = new BarFrame(viewDialogForm);
        TitleBar->setObjectName(QString::fromUtf8("TitleBar"));
        TitleBar->setMinimumSize(QSize(16, 25));
        TitleBar->setMaximumSize(QSize(16777215, 25));
        TitleBar->setFont(font);
        TitleBar->setFrameShape(QFrame::StyledPanel);
        hboxLayout = new QHBoxLayout(TitleBar);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 4, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(horizontalSpacer_2);

        stelWindowTitle = new QLabel(TitleBar);
        stelWindowTitle->setObjectName(QString::fromUtf8("stelWindowTitle"));
        QPalette palette;
        QBrush brush(QColor(194, 194, 195, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        stelWindowTitle->setPalette(palette);
        QFont font1;
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        stelWindowTitle->setFont(font1);
        stelWindowTitle->setStyleSheet(QString::fromUtf8(""));
        stelWindowTitle->setFrameShape(QFrame::StyledPanel);
        stelWindowTitle->setLineWidth(0);
        stelWindowTitle->setIndent(-1);

        hboxLayout->addWidget(stelWindowTitle);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(horizontalSpacer_3);

        closeStelWindow = new QPushButton(TitleBar);
        closeStelWindow->setObjectName(QString::fromUtf8("closeStelWindow"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(closeStelWindow->sizePolicy().hasHeightForWidth());
        closeStelWindow->setSizePolicy(sizePolicy);
        closeStelWindow->setMinimumSize(QSize(16, 16));
        closeStelWindow->setMaximumSize(QSize(16, 16));
        closeStelWindow->setFocusPolicy(Qt::NoFocus);
        closeStelWindow->setContextMenuPolicy(Qt::DefaultContextMenu);

        hboxLayout->addWidget(closeStelWindow);


        vboxLayout->addWidget(TitleBar);

        viewContent = new QFrame(viewDialogForm);
        viewContent->setObjectName(QString::fromUtf8("viewContent"));
        viewContent->setFrameShape(QFrame::StyledPanel);
        verticalLayout_5 = new QVBoxLayout(viewContent);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        stackListWidget = new QListWidget(viewContent);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/graphicGui/tabicon-sky.png"), QSize(), QIcon::Normal, QIcon::On);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(stackListWidget);
        __qlistwidgetitem->setIcon(icon);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/graphicGui/tabicon-markings.png"), QSize(), QIcon::Normal, QIcon::On);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(stackListWidget);
        __qlistwidgetitem1->setIcon(icon1);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/graphicGui/tabicon-landscape.png"), QSize(), QIcon::Normal, QIcon::On);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(stackListWidget);
        __qlistwidgetitem2->setIcon(icon2);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/graphicGui/tabicon-starlore.png"), QSize(), QIcon::Normal, QIcon::On);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(stackListWidget);
        __qlistwidgetitem3->setIcon(icon3);
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

        verticalLayout_5->addWidget(stackListWidget);

        stackedWidget = new QStackedWidget(viewContent);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        gridLayout = new QGridLayout(page);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        starGroupBox = new QGroupBox(page);
        starGroupBox->setObjectName(QString::fromUtf8("starGroupBox"));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setWeight(50);
        starGroupBox->setFont(font2);
        starGroupBox->setAlignment(Qt::AlignLeading);
        starGroupBox->setFlat(false);
        starGroupBox->setCheckable(false);
        starGroupBox->setChecked(false);
        verticalLayout = new QVBoxLayout(starGroupBox);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame_2 = new QFrame(starGroupBox);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        horizontalLayout_2 = new QHBoxLayout(frame_2);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_5 = new QLabel(frame_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);
        label_5->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_2->addWidget(label_5);

        starScaleRadiusDoubleSpinBox = new QDoubleSpinBox(frame_2);
        starScaleRadiusDoubleSpinBox->setObjectName(QString::fromUtf8("starScaleRadiusDoubleSpinBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(starScaleRadiusDoubleSpinBox->sizePolicy().hasHeightForWidth());
        starScaleRadiusDoubleSpinBox->setSizePolicy(sizePolicy2);
        starScaleRadiusDoubleSpinBox->setMinimumSize(QSize(0, 0));
        starScaleRadiusDoubleSpinBox->setMaximumSize(QSize(70, 16777215));
        starScaleRadiusDoubleSpinBox->setAlignment(Qt::AlignCenter);
        starScaleRadiusDoubleSpinBox->setDecimals(1);
        starScaleRadiusDoubleSpinBox->setMaximum(9);
        starScaleRadiusDoubleSpinBox->setSingleStep(0.1);
        starScaleRadiusDoubleSpinBox->setValue(1);

        horizontalLayout_2->addWidget(starScaleRadiusDoubleSpinBox);


        verticalLayout->addWidget(frame_2);

        frame_3 = new QFrame(starGroupBox);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        horizontalLayout_3 = new QHBoxLayout(frame_3);
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_7 = new QLabel(frame_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy1.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy1);
        label_7->setMinimumSize(QSize(0, 0));
        label_7->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_3->addWidget(label_7);

        starRelativeScaleDoubleSpinBox = new QDoubleSpinBox(frame_3);
        starRelativeScaleDoubleSpinBox->setObjectName(QString::fromUtf8("starRelativeScaleDoubleSpinBox"));
        sizePolicy2.setHeightForWidth(starRelativeScaleDoubleSpinBox->sizePolicy().hasHeightForWidth());
        starRelativeScaleDoubleSpinBox->setSizePolicy(sizePolicy2);
        starRelativeScaleDoubleSpinBox->setMinimumSize(QSize(0, 0));
        starRelativeScaleDoubleSpinBox->setMaximumSize(QSize(70, 16777215));
        starRelativeScaleDoubleSpinBox->setFrame(true);
        starRelativeScaleDoubleSpinBox->setAlignment(Qt::AlignCenter);
        starRelativeScaleDoubleSpinBox->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        starRelativeScaleDoubleSpinBox->setDecimals(2);
        starRelativeScaleDoubleSpinBox->setMinimum(0.25);
        starRelativeScaleDoubleSpinBox->setMaximum(5);
        starRelativeScaleDoubleSpinBox->setSingleStep(0.05);
        starRelativeScaleDoubleSpinBox->setValue(1);

        horizontalLayout_3->addWidget(starRelativeScaleDoubleSpinBox);


        verticalLayout->addWidget(frame_3);

        frame_12 = new QFrame(starGroupBox);
        frame_12->setObjectName(QString::fromUtf8("frame_12"));
        frame_12->setFrameShape(QFrame::StyledPanel);
        horizontalLayout_9 = new QHBoxLayout(frame_12);
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        starTwinkleCheckBox = new QCheckBox(frame_12);
        starTwinkleCheckBox->setObjectName(QString::fromUtf8("starTwinkleCheckBox"));
        starTwinkleCheckBox->setChecked(true);

        horizontalLayout_9->addWidget(starTwinkleCheckBox);

        starTwinkleAmountDoubleSpinBox = new QDoubleSpinBox(frame_12);
        starTwinkleAmountDoubleSpinBox->setObjectName(QString::fromUtf8("starTwinkleAmountDoubleSpinBox"));
        starTwinkleAmountDoubleSpinBox->setMaximumSize(QSize(70, 16777215));
        starTwinkleAmountDoubleSpinBox->setAlignment(Qt::AlignCenter);
        starTwinkleAmountDoubleSpinBox->setDecimals(1);
        starTwinkleAmountDoubleSpinBox->setMaximum(1.5);
        starTwinkleAmountDoubleSpinBox->setSingleStep(0.1);

        horizontalLayout_9->addWidget(starTwinkleAmountDoubleSpinBox);


        verticalLayout->addWidget(frame_12);

        adaptationCheckbox = new QCheckBox(starGroupBox);
        adaptationCheckbox->setObjectName(QString::fromUtf8("adaptationCheckbox"));
        adaptationCheckbox->setChecked(false);

        verticalLayout->addWidget(adaptationCheckbox);


        gridLayout->addWidget(starGroupBox, 0, 0, 1, 1);

        planetsGroupBox = new QGroupBox(page);
        planetsGroupBox->setObjectName(QString::fromUtf8("planetsGroupBox"));
        planetsGroupBox->setFont(font2);
        planetsGroupBox->setCheckable(false);
        verticalLayout_2 = new QVBoxLayout(planetsGroupBox);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        showPlanetCheckBox = new QCheckBox(planetsGroupBox);
        showPlanetCheckBox->setObjectName(QString::fromUtf8("showPlanetCheckBox"));
        showPlanetCheckBox->setChecked(true);

        verticalLayout_2->addWidget(showPlanetCheckBox);

        planetMarkerCheckBox = new QCheckBox(planetsGroupBox);
        planetMarkerCheckBox->setObjectName(QString::fromUtf8("planetMarkerCheckBox"));

        verticalLayout_2->addWidget(planetMarkerCheckBox);

        planetOrbitCheckBox = new QCheckBox(planetsGroupBox);
        planetOrbitCheckBox->setObjectName(QString::fromUtf8("planetOrbitCheckBox"));
        sizePolicy2.setHeightForWidth(planetOrbitCheckBox->sizePolicy().hasHeightForWidth());
        planetOrbitCheckBox->setSizePolicy(sizePolicy2);

        verticalLayout_2->addWidget(planetOrbitCheckBox);

        planetLightSpeedCheckBox = new QCheckBox(planetsGroupBox);
        planetLightSpeedCheckBox->setObjectName(QString::fromUtf8("planetLightSpeedCheckBox"));

        verticalLayout_2->addWidget(planetLightSpeedCheckBox);

        planetScaleMoonCheckBox = new QCheckBox(planetsGroupBox);
        planetScaleMoonCheckBox->setObjectName(QString::fromUtf8("planetScaleMoonCheckBox"));

        verticalLayout_2->addWidget(planetScaleMoonCheckBox);


        gridLayout->addWidget(planetsGroupBox, 0, 1, 1, 1);

        atmosphereGroupBox = new QGroupBox(page);
        atmosphereGroupBox->setObjectName(QString::fromUtf8("atmosphereGroupBox"));
        atmosphereGroupBox->setFont(font2);
        verticalLayout_3 = new QVBoxLayout(atmosphereGroupBox);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        showAtmosphereCheckBox = new QCheckBox(atmosphereGroupBox);
        showAtmosphereCheckBox->setObjectName(QString::fromUtf8("showAtmosphereCheckBox"));

        verticalLayout_3->addWidget(showAtmosphereCheckBox);

        _2 = new QHBoxLayout();
        _2->setObjectName(QString::fromUtf8("_2"));
        label_4 = new QLabel(atmosphereGroupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        _2->addWidget(label_4);

        lightPollutionSpinBox = new QSpinBox(atmosphereGroupBox);
        lightPollutionSpinBox->setObjectName(QString::fromUtf8("lightPollutionSpinBox"));
        lightPollutionSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lightPollutionSpinBox->setMinimum(1);
        lightPollutionSpinBox->setMaximum(9);
        lightPollutionSpinBox->setValue(1);

        _2->addWidget(lightPollutionSpinBox);


        verticalLayout_3->addLayout(_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButtonAtmosphereDetails = new QPushButton(atmosphereGroupBox);
        pushButtonAtmosphereDetails->setObjectName(QString::fromUtf8("pushButtonAtmosphereDetails"));

        horizontalLayout->addWidget(pushButtonAtmosphereDetails);


        verticalLayout_3->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);


        gridLayout->addWidget(atmosphereGroupBox, 1, 0, 1, 1);

        labelsGroupBox = new QGroupBox(page);
        labelsGroupBox->setObjectName(QString::fromUtf8("labelsGroupBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(labelsGroupBox->sizePolicy().hasHeightForWidth());
        labelsGroupBox->setSizePolicy(sizePolicy3);
        labelsGroupBox->setMinimumSize(QSize(0, 150));
        labelsGroupBox->setFont(font2);
        labelsGroupBox->setCheckable(false);
        gridLayoutx = new QGridLayout(labelsGroupBox);
        gridLayoutx->setContentsMargins(0, 0, 0, 0);
        gridLayoutx->setObjectName(QString::fromUtf8("gridLayoutx"));
        starLabelCheckBox = new QCheckBox(labelsGroupBox);
        starLabelCheckBox->setObjectName(QString::fromUtf8("starLabelCheckBox"));

        gridLayoutx->addWidget(starLabelCheckBox, 0, 0, 1, 1);

        starsLabelsHorizontalSlider = new QSlider(labelsGroupBox);
        starsLabelsHorizontalSlider->setObjectName(QString::fromUtf8("starsLabelsHorizontalSlider"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(starsLabelsHorizontalSlider->sizePolicy().hasHeightForWidth());
        starsLabelsHorizontalSlider->setSizePolicy(sizePolicy4);
        starsLabelsHorizontalSlider->setMinimumSize(QSize(180, 0));
        starsLabelsHorizontalSlider->setValue(33);
        starsLabelsHorizontalSlider->setOrientation(Qt::Horizontal);

        gridLayoutx->addWidget(starsLabelsHorizontalSlider, 0, 1, 1, 1);

        nebulaLabelCheckBox = new QCheckBox(labelsGroupBox);
        nebulaLabelCheckBox->setObjectName(QString::fromUtf8("nebulaLabelCheckBox"));

        gridLayoutx->addWidget(nebulaLabelCheckBox, 1, 0, 1, 1);

        nebulasLabelsHorizontalSlider = new QSlider(labelsGroupBox);
        nebulasLabelsHorizontalSlider->setObjectName(QString::fromUtf8("nebulasLabelsHorizontalSlider"));
        sizePolicy4.setHeightForWidth(nebulasLabelsHorizontalSlider->sizePolicy().hasHeightForWidth());
        nebulasLabelsHorizontalSlider->setSizePolicy(sizePolicy4);
        nebulasLabelsHorizontalSlider->setMinimumSize(QSize(180, 0));
        nebulasLabelsHorizontalSlider->setValue(33);
        nebulasLabelsHorizontalSlider->setOrientation(Qt::Horizontal);

        gridLayoutx->addWidget(nebulasLabelsHorizontalSlider, 1, 1, 1, 1);

        planetLabelCheckBox = new QCheckBox(labelsGroupBox);
        planetLabelCheckBox->setObjectName(QString::fromUtf8("planetLabelCheckBox"));

        gridLayoutx->addWidget(planetLabelCheckBox, 2, 0, 1, 1);

        planetsLabelsHorizontalSlider = new QSlider(labelsGroupBox);
        planetsLabelsHorizontalSlider->setObjectName(QString::fromUtf8("planetsLabelsHorizontalSlider"));
        sizePolicy4.setHeightForWidth(planetsLabelsHorizontalSlider->sizePolicy().hasHeightForWidth());
        planetsLabelsHorizontalSlider->setSizePolicy(sizePolicy4);
        planetsLabelsHorizontalSlider->setMinimumSize(QSize(180, 0));
        planetsLabelsHorizontalSlider->setValue(33);
        planetsLabelsHorizontalSlider->setOrientation(Qt::Horizontal);

        gridLayoutx->addWidget(planetsLabelsHorizontalSlider, 2, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(180, 0, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayoutx->addItem(horizontalSpacer_4, 3, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 0, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayoutx->addItem(horizontalSpacer_5, 3, 0, 1, 1);


        gridLayout->addWidget(labelsGroupBox, 1, 1, 1, 1);

        shootingStarsGroupBox = new QGroupBox(page);
        shootingStarsGroupBox->setObjectName(QString::fromUtf8("shootingStarsGroupBox"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(shootingStarsGroupBox->sizePolicy().hasHeightForWidth());
        shootingStarsGroupBox->setSizePolicy(sizePolicy5);
        shootingStarsGroupBox->setFont(font2);
        shootingStarsGroupBox->setCheckable(false);
        horizontalLayout_6 = new QHBoxLayout(shootingStarsGroupBox);
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        frame_9 = new QFrame(shootingStarsGroupBox);
        frame_9->setObjectName(QString::fromUtf8("frame_9"));
        frame_9->setFrameShape(QFrame::StyledPanel);
        verticalLayout_4 = new QVBoxLayout(frame_9);
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_14 = new QLabel(frame_9);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setTextFormat(Qt::PlainText);
        label_14->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout_4->addWidget(label_14);


        horizontalLayout_6->addWidget(frame_9);

        frame_11 = new QFrame(shootingStarsGroupBox);
        frame_11->setObjectName(QString::fromUtf8("frame_11"));
        frame_11->setFrameShape(QFrame::StyledPanel);
        verticalLayout_9 = new QVBoxLayout(frame_11);
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        frame_8 = new QFrame(frame_11);
        frame_8->setObjectName(QString::fromUtf8("frame_8"));
        frame_8->setFrameShape(QFrame::StyledPanel);
        horizontalLayout_7 = new QHBoxLayout(frame_8);
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        zhrNone = new QRadioButton(frame_8);
        zhrNone->setObjectName(QString::fromUtf8("zhrNone"));

        horizontalLayout_7->addWidget(zhrNone);

        zhr10 = new QRadioButton(frame_8);
        zhr10->setObjectName(QString::fromUtf8("zhr10"));
        zhr10->setChecked(true);

        horizontalLayout_7->addWidget(zhr10);

        zhr80 = new QRadioButton(frame_8);
        zhr80->setObjectName(QString::fromUtf8("zhr80"));

        horizontalLayout_7->addWidget(zhr80);

        zhr10000 = new QRadioButton(frame_8);
        zhr10000->setObjectName(QString::fromUtf8("zhr10000"));

        horizontalLayout_7->addWidget(zhr10000);

        zhr144000 = new QRadioButton(frame_8);
        zhr144000->setObjectName(QString::fromUtf8("zhr144000"));

        horizontalLayout_7->addWidget(zhr144000);


        verticalLayout_9->addWidget(frame_8);

        zhrLabel = new QLabel(frame_11);
        zhrLabel->setObjectName(QString::fromUtf8("zhrLabel"));
        zhrLabel->setTextFormat(Qt::RichText);
        zhrLabel->setScaledContents(false);

        verticalLayout_9->addWidget(zhrLabel);


        horizontalLayout_6->addWidget(frame_11);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);


        gridLayout->addWidget(shootingStarsGroupBox, 2, 0, 1, 2);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        gridLayout_2 = new QGridLayout(page_2);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        constellationGroupBox = new QGroupBox(page_2);
        constellationGroupBox->setObjectName(QString::fromUtf8("constellationGroupBox"));
        constellationGroupBox->setFont(font2);
        constellationGroupBox->setCheckable(false);
        verticalLayout_11 = new QVBoxLayout(constellationGroupBox);
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        showConstellationLinesCheckBox = new QCheckBox(constellationGroupBox);
        showConstellationLinesCheckBox->setObjectName(QString::fromUtf8("showConstellationLinesCheckBox"));

        verticalLayout_11->addWidget(showConstellationLinesCheckBox);

        showConstellationLabelsCheckBox = new QCheckBox(constellationGroupBox);
        showConstellationLabelsCheckBox->setObjectName(QString::fromUtf8("showConstellationLabelsCheckBox"));

        verticalLayout_11->addWidget(showConstellationLabelsCheckBox);

        showConstellationBoundariesCheckBox = new QCheckBox(constellationGroupBox);
        showConstellationBoundariesCheckBox->setObjectName(QString::fromUtf8("showConstellationBoundariesCheckBox"));

        verticalLayout_11->addWidget(showConstellationBoundariesCheckBox);

        showConstellationArtCheckBox = new QCheckBox(constellationGroupBox);
        showConstellationArtCheckBox->setObjectName(QString::fromUtf8("showConstellationArtCheckBox"));

        verticalLayout_11->addWidget(showConstellationArtCheckBox);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        label_6 = new QLabel(constellationGroupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        hboxLayout1->addWidget(label_6);

        constellationArtBrightnessSpinBox = new QDoubleSpinBox(constellationGroupBox);
        constellationArtBrightnessSpinBox->setObjectName(QString::fromUtf8("constellationArtBrightnessSpinBox"));
        constellationArtBrightnessSpinBox->setMaximum(1);
        constellationArtBrightnessSpinBox->setSingleStep(0.05);

        hboxLayout1->addWidget(constellationArtBrightnessSpinBox);


        verticalLayout_11->addLayout(hboxLayout1);

        verticalSpacer_3 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_11->addItem(verticalSpacer_3);


        gridLayout_2->addWidget(constellationGroupBox, 0, 2, 1, 1);

        celestialSphereGroupBox = new QGroupBox(page_2);
        celestialSphereGroupBox->setObjectName(QString::fromUtf8("celestialSphereGroupBox"));
        celestialSphereGroupBox->setFont(font2);
        celestialSphereGroupBox->setCheckable(false);
        verticalLayout_10 = new QVBoxLayout(celestialSphereGroupBox);
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        showEquatorialJ2000GridCheckBox = new QCheckBox(celestialSphereGroupBox);
        showEquatorialJ2000GridCheckBox->setObjectName(QString::fromUtf8("showEquatorialJ2000GridCheckBox"));

        verticalLayout_13->addWidget(showEquatorialJ2000GridCheckBox);

        showEquatorialGridCheckBox = new QCheckBox(celestialSphereGroupBox);
        showEquatorialGridCheckBox->setObjectName(QString::fromUtf8("showEquatorialGridCheckBox"));

        verticalLayout_13->addWidget(showEquatorialGridCheckBox);

        showEclipticGridJ2000CheckBox = new QCheckBox(celestialSphereGroupBox);
        showEclipticGridJ2000CheckBox->setObjectName(QString::fromUtf8("showEclipticGridJ2000CheckBox"));

        verticalLayout_13->addWidget(showEclipticGridJ2000CheckBox);

        showAzimuthalGridCheckBox = new QCheckBox(celestialSphereGroupBox);
        showAzimuthalGridCheckBox->setObjectName(QString::fromUtf8("showAzimuthalGridCheckBox"));

        verticalLayout_13->addWidget(showAzimuthalGridCheckBox);

        showGalacticGridCheckBox = new QCheckBox(celestialSphereGroupBox);
        showGalacticGridCheckBox->setObjectName(QString::fromUtf8("showGalacticGridCheckBox"));

        verticalLayout_13->addWidget(showGalacticGridCheckBox);


        horizontalLayout_5->addLayout(verticalLayout_13);

        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        showEquatorLineCheckBox = new QCheckBox(celestialSphereGroupBox);
        showEquatorLineCheckBox->setObjectName(QString::fromUtf8("showEquatorLineCheckBox"));

        verticalLayout_15->addWidget(showEquatorLineCheckBox);

        showMeridianLineCheckBox = new QCheckBox(celestialSphereGroupBox);
        showMeridianLineCheckBox->setObjectName(QString::fromUtf8("showMeridianLineCheckBox"));

        verticalLayout_15->addWidget(showMeridianLineCheckBox);

        showHorizonLineCheckBox = new QCheckBox(celestialSphereGroupBox);
        showHorizonLineCheckBox->setObjectName(QString::fromUtf8("showHorizonLineCheckBox"));

        verticalLayout_15->addWidget(showHorizonLineCheckBox);

        showEclipticLineCheckBox = new QCheckBox(celestialSphereGroupBox);
        showEclipticLineCheckBox->setObjectName(QString::fromUtf8("showEclipticLineCheckBox"));

        verticalLayout_15->addWidget(showEclipticLineCheckBox);

        showGalacticPlaneLineCheckBox = new QCheckBox(celestialSphereGroupBox);
        showGalacticPlaneLineCheckBox->setObjectName(QString::fromUtf8("showGalacticPlaneLineCheckBox"));

        verticalLayout_15->addWidget(showGalacticPlaneLineCheckBox);


        horizontalLayout_5->addLayout(verticalLayout_15);


        verticalLayout_10->addLayout(horizontalLayout_5);

        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        showCardinalPointsCheckBox = new QCheckBox(celestialSphereGroupBox);
        showCardinalPointsCheckBox->setObjectName(QString::fromUtf8("showCardinalPointsCheckBox"));

        verticalLayout_16->addWidget(showCardinalPointsCheckBox);


        verticalLayout_10->addLayout(verticalLayout_16);


        gridLayout_2->addWidget(celestialSphereGroupBox, 0, 0, 1, 2);

        setProjectionGroupBox = new QGroupBox(page_2);
        setProjectionGroupBox->setObjectName(QString::fromUtf8("setProjectionGroupBox"));
        sizePolicy3.setHeightForWidth(setProjectionGroupBox->sizePolicy().hasHeightForWidth());
        setProjectionGroupBox->setSizePolicy(sizePolicy3);
        setProjectionGroupBox->setMinimumSize(QSize(0, 150));
        setProjectionGroupBox->setFont(font2);
        setProjectionGroupBox->setCheckable(false);
        horizontalLayout_10 = new QHBoxLayout(setProjectionGroupBox);
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        projectionListWidget = new QListWidget(setProjectionGroupBox);
        projectionListWidget->setObjectName(QString::fromUtf8("projectionListWidget"));
        sizePolicy3.setHeightForWidth(projectionListWidget->sizePolicy().hasHeightForWidth());
        projectionListWidget->setSizePolicy(sizePolicy3);
        projectionListWidget->setMinimumSize(QSize(120, 0));
        projectionListWidget->setMaximumSize(QSize(180, 16777215));
        projectionListWidget->setFocusPolicy(Qt::NoFocus);
        projectionListWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        projectionListWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        horizontalLayout_10->addWidget(projectionListWidget);

        projectionTextBrowser = new QTextBrowser(setProjectionGroupBox);
        projectionTextBrowser->setObjectName(QString::fromUtf8("projectionTextBrowser"));
        projectionTextBrowser->setOpenExternalLinks(true);

        horizontalLayout_10->addWidget(projectionTextBrowser);


        gridLayout_2->addWidget(setProjectionGroupBox, 1, 0, 1, 3);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        gridLayout_3 = new QGridLayout(page_3);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        landscapesListWidget = new QListWidget(page_3);
        landscapesListWidget->setObjectName(QString::fromUtf8("landscapesListWidget"));
        sizePolicy3.setHeightForWidth(landscapesListWidget->sizePolicy().hasHeightForWidth());
        landscapesListWidget->setSizePolicy(sizePolicy3);
        landscapesListWidget->setMinimumSize(QSize(180, 0));
        landscapesListWidget->setMaximumSize(QSize(120, 16777215));
        landscapesListWidget->setFocusPolicy(Qt::NoFocus);
        landscapesListWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        gridLayout_3->addWidget(landscapesListWidget, 0, 0, 4, 1);

        landscapeTextBrowser = new QTextBrowser(page_3);
        landscapeTextBrowser->setObjectName(QString::fromUtf8("landscapeTextBrowser"));
        landscapeTextBrowser->setEnabled(true);
        QSizePolicy sizePolicy6(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(landscapeTextBrowser->sizePolicy().hasHeightForWidth());
        landscapeTextBrowser->setSizePolicy(sizePolicy6);
        QFont font3;
        font3.setPointSize(10);
        landscapeTextBrowser->setFont(font3);
        landscapeTextBrowser->setFrameShape(QFrame::StyledPanel);
        landscapeTextBrowser->setLineWidth(1);
        landscapeTextBrowser->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        landscapeTextBrowser->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        landscapeTextBrowser->setOpenExternalLinks(true);

        gridLayout_3->addWidget(landscapeTextBrowser, 0, 1, 1, 1);

        pushButtonAddRemoveLandscapes = new QPushButton(page_3);
        pushButtonAddRemoveLandscapes->setObjectName(QString::fromUtf8("pushButtonAddRemoveLandscapes"));
        pushButtonAddRemoveLandscapes->setMinimumSize(QSize(0, 37));
        pushButtonAddRemoveLandscapes->setStyleSheet(QString::fromUtf8("margin-left: 10px; margin-right: 10px; margin-bottom:10px;"));

        gridLayout_3->addWidget(pushButtonAddRemoveLandscapes, 2, 1, 1, 1);

        landscapeOptionsGroupBox = new QGroupBox(page_3);
        landscapeOptionsGroupBox->setObjectName(QString::fromUtf8("landscapeOptionsGroupBox"));
        QSizePolicy sizePolicy7(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(landscapeOptionsGroupBox->sizePolicy().hasHeightForWidth());
        landscapeOptionsGroupBox->setSizePolicy(sizePolicy7);
        landscapeOptionsGroupBox->setFont(font2);
        landscapeOptionsGroupBox->setCheckable(false);
        gridLayout1 = new QGridLayout(landscapeOptionsGroupBox);
        gridLayout1->setContentsMargins(0, 0, 0, 0);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        showGroundCheckBox = new QCheckBox(landscapeOptionsGroupBox);
        showGroundCheckBox->setObjectName(QString::fromUtf8("showGroundCheckBox"));

        gridLayout1->addWidget(showGroundCheckBox, 0, 0, 1, 1);

        showFogCheckBox = new QCheckBox(landscapeOptionsGroupBox);
        showFogCheckBox->setObjectName(QString::fromUtf8("showFogCheckBox"));

        gridLayout1->addWidget(showFogCheckBox, 1, 0, 1, 1);

        landscapePositionCheckBox = new QCheckBox(landscapeOptionsGroupBox);
        landscapePositionCheckBox->setObjectName(QString::fromUtf8("landscapePositionCheckBox"));

        gridLayout1->addWidget(landscapePositionCheckBox, 2, 0, 1, 1);

        useAsDefaultLandscapeCheckBox = new QCheckBox(landscapeOptionsGroupBox);
        useAsDefaultLandscapeCheckBox->setObjectName(QString::fromUtf8("useAsDefaultLandscapeCheckBox"));

        gridLayout1->addWidget(useAsDefaultLandscapeCheckBox, 3, 0, 1, 1);


        gridLayout_3->addWidget(landscapeOptionsGroupBox, 1, 1, 1, 1);

        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        gridLayout_4 = new QGridLayout(page_4);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        culturesListWidget = new QListWidget(page_4);
        culturesListWidget->setObjectName(QString::fromUtf8("culturesListWidget"));
        QSizePolicy sizePolicy8(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy8.setHorizontalStretch(100);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(culturesListWidget->sizePolicy().hasHeightForWidth());
        culturesListWidget->setSizePolicy(sizePolicy8);
        culturesListWidget->setMinimumSize(QSize(180, 0));
        culturesListWidget->setMaximumSize(QSize(120, 16777213));
        culturesListWidget->setFocusPolicy(Qt::NoFocus);
        culturesListWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        culturesListWidget->setSelectionRectVisible(false);

        gridLayout_4->addWidget(culturesListWidget, 0, 0, 2, 1);

        skyCultureTextBrowser = new QTextBrowser(page_4);
        skyCultureTextBrowser->setObjectName(QString::fromUtf8("skyCultureTextBrowser"));
        sizePolicy6.setHeightForWidth(skyCultureTextBrowser->sizePolicy().hasHeightForWidth());
        skyCultureTextBrowser->setSizePolicy(sizePolicy6);
        skyCultureTextBrowser->setMinimumSize(QSize(0, 0));
        skyCultureTextBrowser->setFont(font3);
        skyCultureTextBrowser->setFrameShape(QFrame::StyledPanel);
        skyCultureTextBrowser->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        skyCultureTextBrowser->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        skyCultureTextBrowser->setOpenExternalLinks(true);

        gridLayout_4->addWidget(skyCultureTextBrowser, 0, 1, 1, 1);

        starloreOptionsgroupBox = new QGroupBox(page_4);
        starloreOptionsgroupBox->setObjectName(QString::fromUtf8("starloreOptionsgroupBox"));
        starloreOptionsgroupBox->setEnabled(true);
        QSizePolicy sizePolicy9(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(starloreOptionsgroupBox->sizePolicy().hasHeightForWidth());
        starloreOptionsgroupBox->setSizePolicy(sizePolicy9);
        starloreOptionsgroupBox->setMinimumSize(QSize(0, 0));
        starloreOptionsgroupBox->setFont(font2);
        verticalLayout_8 = new QVBoxLayout(starloreOptionsgroupBox);
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        useAsDefaultSkyCultureCheckBox = new QCheckBox(starloreOptionsgroupBox);
        useAsDefaultSkyCultureCheckBox->setObjectName(QString::fromUtf8("useAsDefaultSkyCultureCheckBox"));

        verticalLayout_8->addWidget(useAsDefaultSkyCultureCheckBox);


        gridLayout_4->addWidget(starloreOptionsgroupBox, 1, 1, 1, 1);

        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        verticalLayout_12 = new QVBoxLayout(page_5);
        verticalLayout_12->setSpacing(0);
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        frame_13 = new QFrame(page_5);
        frame_13->setObjectName(QString::fromUtf8("frame_13"));
        frame_13->setFrameShape(QFrame::StyledPanel);
        frame_13->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame_13);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        skyLayerListWidget = new QListWidget(frame_13);
        skyLayerListWidget->setObjectName(QString::fromUtf8("skyLayerListWidget"));

        verticalLayout_6->addWidget(skyLayerListWidget);


        horizontalLayout_4->addLayout(verticalLayout_6);

        frame_14 = new QFrame(frame_13);
        frame_14->setObjectName(QString::fromUtf8("frame_14"));
        frame_14->setFrameShape(QFrame::StyledPanel);
        frame_14->setFrameShadow(QFrame::Raised);
        verticalLayout_7 = new QVBoxLayout(frame_14);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        skyLayerTextBrowser = new QTextBrowser(frame_14);
        skyLayerTextBrowser->setObjectName(QString::fromUtf8("skyLayerTextBrowser"));
        skyLayerTextBrowser->setOpenExternalLinks(true);
        skyLayerTextBrowser->setOpenLinks(true);

        verticalLayout_7->addWidget(skyLayerTextBrowser);

        groupBox = new QGroupBox(frame_14);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_5 = new QGridLayout(groupBox);
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        skyLayerEnableCheckBox = new QCheckBox(groupBox);
        skyLayerEnableCheckBox->setObjectName(QString::fromUtf8("skyLayerEnableCheckBox"));

        gridLayout_5->addWidget(skyLayerEnableCheckBox, 0, 0, 1, 1);


        verticalLayout_7->addWidget(groupBox);


        horizontalLayout_4->addWidget(frame_14);


        verticalLayout_12->addWidget(frame_13);

        stackedWidget->addWidget(page_5);

        verticalLayout_5->addWidget(stackedWidget);


        vboxLayout->addWidget(viewContent);

        QWidget::setTabOrder(starScaleRadiusDoubleSpinBox, starRelativeScaleDoubleSpinBox);
        QWidget::setTabOrder(starRelativeScaleDoubleSpinBox, starTwinkleCheckBox);
        QWidget::setTabOrder(starTwinkleCheckBox, starTwinkleAmountDoubleSpinBox);
        QWidget::setTabOrder(starTwinkleAmountDoubleSpinBox, adaptationCheckbox);
        QWidget::setTabOrder(adaptationCheckbox, showPlanetCheckBox);
        QWidget::setTabOrder(showPlanetCheckBox, planetMarkerCheckBox);
        QWidget::setTabOrder(planetMarkerCheckBox, planetOrbitCheckBox);
        QWidget::setTabOrder(planetOrbitCheckBox, planetLightSpeedCheckBox);
        QWidget::setTabOrder(planetLightSpeedCheckBox, planetScaleMoonCheckBox);
        QWidget::setTabOrder(planetScaleMoonCheckBox, showAtmosphereCheckBox);
        QWidget::setTabOrder(showAtmosphereCheckBox, lightPollutionSpinBox);
        QWidget::setTabOrder(lightPollutionSpinBox, pushButtonAtmosphereDetails);
        QWidget::setTabOrder(pushButtonAtmosphereDetails, starLabelCheckBox);
        QWidget::setTabOrder(starLabelCheckBox, starsLabelsHorizontalSlider);
        QWidget::setTabOrder(starsLabelsHorizontalSlider, nebulaLabelCheckBox);
        QWidget::setTabOrder(nebulaLabelCheckBox, nebulasLabelsHorizontalSlider);
        QWidget::setTabOrder(nebulasLabelsHorizontalSlider, planetLabelCheckBox);
        QWidget::setTabOrder(planetLabelCheckBox, planetsLabelsHorizontalSlider);
        QWidget::setTabOrder(planetsLabelsHorizontalSlider, zhrNone);
        QWidget::setTabOrder(zhrNone, zhr10);
        QWidget::setTabOrder(zhr10, zhr80);
        QWidget::setTabOrder(zhr80, zhr10000);
        QWidget::setTabOrder(zhr10000, zhr144000);
        QWidget::setTabOrder(zhr144000, showEquatorialJ2000GridCheckBox);
        QWidget::setTabOrder(showEquatorialJ2000GridCheckBox, showEquatorialGridCheckBox);
        QWidget::setTabOrder(showEquatorialGridCheckBox, showEclipticGridJ2000CheckBox);
        QWidget::setTabOrder(showEclipticGridJ2000CheckBox, showAzimuthalGridCheckBox);
        QWidget::setTabOrder(showAzimuthalGridCheckBox, showGalacticGridCheckBox);
        QWidget::setTabOrder(showGalacticGridCheckBox, showCardinalPointsCheckBox);
        QWidget::setTabOrder(showCardinalPointsCheckBox, showEquatorLineCheckBox);
        QWidget::setTabOrder(showEquatorLineCheckBox, showMeridianLineCheckBox);
        QWidget::setTabOrder(showMeridianLineCheckBox, showHorizonLineCheckBox);
        QWidget::setTabOrder(showHorizonLineCheckBox, showEclipticLineCheckBox);
        QWidget::setTabOrder(showEclipticLineCheckBox, showGalacticPlaneLineCheckBox);
        QWidget::setTabOrder(showGalacticPlaneLineCheckBox, showConstellationLinesCheckBox);
        QWidget::setTabOrder(showConstellationLinesCheckBox, showConstellationLabelsCheckBox);
        QWidget::setTabOrder(showConstellationLabelsCheckBox, showConstellationBoundariesCheckBox);
        QWidget::setTabOrder(showConstellationBoundariesCheckBox, showConstellationArtCheckBox);
        QWidget::setTabOrder(showConstellationArtCheckBox, constellationArtBrightnessSpinBox);
        QWidget::setTabOrder(constellationArtBrightnessSpinBox, projectionTextBrowser);
        QWidget::setTabOrder(projectionTextBrowser, landscapeTextBrowser);
        QWidget::setTabOrder(landscapeTextBrowser, showGroundCheckBox);
        QWidget::setTabOrder(showGroundCheckBox, showFogCheckBox);
        QWidget::setTabOrder(showFogCheckBox, landscapePositionCheckBox);
        QWidget::setTabOrder(landscapePositionCheckBox, useAsDefaultLandscapeCheckBox);
        QWidget::setTabOrder(useAsDefaultLandscapeCheckBox, pushButtonAddRemoveLandscapes);
        QWidget::setTabOrder(pushButtonAddRemoveLandscapes, skyCultureTextBrowser);
        QWidget::setTabOrder(skyCultureTextBrowser, useAsDefaultSkyCultureCheckBox);
        QWidget::setTabOrder(useAsDefaultSkyCultureCheckBox, skyLayerListWidget);
        QWidget::setTabOrder(skyLayerListWidget, skyLayerTextBrowser);
        QWidget::setTabOrder(skyLayerTextBrowser, skyLayerEnableCheckBox);

        retranslateUi(viewDialogForm);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(viewDialogForm);
    } // setupUi

    void retranslateUi(QWidget *viewDialogForm)
    {
        stelWindowTitle->setText(QApplication::translate("viewDialogForm", "View", 0, QApplication::UnicodeUTF8));
        closeStelWindow->setText(QString());

        const bool __sortingEnabled = stackListWidget->isSortingEnabled();
        stackListWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = stackListWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("viewDialogForm", "Sky", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem1 = stackListWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("viewDialogForm", "Markings", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem2 = stackListWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("viewDialogForm", "Landscape", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem3 = stackListWidget->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("viewDialogForm", "Starlore", 0, QApplication::UnicodeUTF8));
        stackListWidget->setSortingEnabled(__sortingEnabled);

        starGroupBox->setTitle(QApplication::translate("viewDialogForm", "Stars", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("viewDialogForm", "Absolute scale:", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("viewDialogForm", "Relative scale:", 0, QApplication::UnicodeUTF8));
        starTwinkleCheckBox->setText(QApplication::translate("viewDialogForm", "Twinkle:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        adaptationCheckbox->setToolTip(QApplication::translate("viewDialogForm", "Dim faint stars when a very bright object is visible", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        adaptationCheckbox->setText(QApplication::translate("viewDialogForm", "Dynamic eye adaptation", 0, QApplication::UnicodeUTF8));
        planetsGroupBox->setTitle(QApplication::translate("viewDialogForm", "Planets and satellites", 0, QApplication::UnicodeUTF8));
        showPlanetCheckBox->setText(QApplication::translate("viewDialogForm", "Show planets", 0, QApplication::UnicodeUTF8));
        planetMarkerCheckBox->setText(QApplication::translate("viewDialogForm", "Show planet markers", 0, QApplication::UnicodeUTF8));
        planetOrbitCheckBox->setText(QApplication::translate("viewDialogForm", "Show planet orbits", 0, QApplication::UnicodeUTF8));
        planetLightSpeedCheckBox->setText(QApplication::translate("viewDialogForm", "Simulate light speed", 0, QApplication::UnicodeUTF8));
        planetScaleMoonCheckBox->setText(QApplication::translate("viewDialogForm", "Scale Moon", 0, QApplication::UnicodeUTF8));
        atmosphereGroupBox->setTitle(QApplication::translate("viewDialogForm", "Atmosphere", 0, QApplication::UnicodeUTF8));
        showAtmosphereCheckBox->setText(QApplication::translate("viewDialogForm", "Show atmosphere", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("viewDialogForm", "Light pollution:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pushButtonAtmosphereDetails->setToolTip(QApplication::translate("viewDialogForm", "pressure, temperature, extinction coefficient", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pushButtonAtmosphereDetails->setText(QApplication::translate("viewDialogForm", "Refraction/Extinction settings...", 0, QApplication::UnicodeUTF8));
        labelsGroupBox->setTitle(QApplication::translate("viewDialogForm", "Labels and Markers", 0, QApplication::UnicodeUTF8));
        starLabelCheckBox->setText(QApplication::translate("viewDialogForm", "Stars", 0, QApplication::UnicodeUTF8));
        nebulaLabelCheckBox->setText(QApplication::translate("viewDialogForm", "Nebulas", 0, QApplication::UnicodeUTF8));
        planetLabelCheckBox->setText(QApplication::translate("viewDialogForm", "Planets", 0, QApplication::UnicodeUTF8));
        shootingStarsGroupBox->setTitle(QApplication::translate("viewDialogForm", "Shooting Stars", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("viewDialogForm", "Hourly zenith rate:", 0, QApplication::UnicodeUTF8));
        zhrNone->setText(QApplication::translate("viewDialogForm", "0", 0, QApplication::UnicodeUTF8));
        zhr10->setText(QApplication::translate("viewDialogForm", "10", 0, QApplication::UnicodeUTF8));
        zhr80->setText(QApplication::translate("viewDialogForm", "80", 0, QApplication::UnicodeUTF8));
        zhr10000->setText(QApplication::translate("viewDialogForm", "10000", 0, QApplication::UnicodeUTF8));
        zhr144000->setText(QApplication::translate("viewDialogForm", "144000", 0, QApplication::UnicodeUTF8));
        zhrLabel->setText(QString());
        constellationGroupBox->setTitle(QApplication::translate("viewDialogForm", "Constellations", 0, QApplication::UnicodeUTF8));
        showConstellationLinesCheckBox->setText(QApplication::translate("viewDialogForm", "Show lines", 0, QApplication::UnicodeUTF8));
        showConstellationLabelsCheckBox->setText(QApplication::translate("viewDialogForm", "Show labels", 0, QApplication::UnicodeUTF8));
        showConstellationBoundariesCheckBox->setText(QApplication::translate("viewDialogForm", "Show boundaries", 0, QApplication::UnicodeUTF8));
        showConstellationArtCheckBox->setText(QApplication::translate("viewDialogForm", "Show art", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("viewDialogForm", "Art brightness:", 0, QApplication::UnicodeUTF8));
        celestialSphereGroupBox->setTitle(QApplication::translate("viewDialogForm", "Celestial Sphere", 0, QApplication::UnicodeUTF8));
        showEquatorialJ2000GridCheckBox->setText(QApplication::translate("viewDialogForm", "Equatorial J2000 grid", 0, QApplication::UnicodeUTF8));
        showEquatorialGridCheckBox->setText(QApplication::translate("viewDialogForm", "Equatorial grid", 0, QApplication::UnicodeUTF8));
        showEclipticGridJ2000CheckBox->setText(QApplication::translate("viewDialogForm", "Ecliptic J2000 grid", 0, QApplication::UnicodeUTF8));
        showAzimuthalGridCheckBox->setText(QApplication::translate("viewDialogForm", "Azimuthal grid", 0, QApplication::UnicodeUTF8));
        showGalacticGridCheckBox->setText(QApplication::translate("viewDialogForm", "Galactic grid", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        showEquatorLineCheckBox->setToolTip(QApplication::translate("viewDialogForm", "Show equator line", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        showEquatorLineCheckBox->setText(QApplication::translate("viewDialogForm", "Equator", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        showMeridianLineCheckBox->setToolTip(QApplication::translate("viewDialogForm", "Show meridian line", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        showMeridianLineCheckBox->setText(QApplication::translate("viewDialogForm", "Meridian", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        showHorizonLineCheckBox->setToolTip(QApplication::translate("viewDialogForm", "Show horizon line", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        showHorizonLineCheckBox->setText(QApplication::translate("viewDialogForm", "Horizon", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        showEclipticLineCheckBox->setToolTip(QApplication::translate("viewDialogForm", "Show ecliptic line", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        showEclipticLineCheckBox->setText(QApplication::translate("viewDialogForm", "Ecliptic", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        showGalacticPlaneLineCheckBox->setToolTip(QApplication::translate("viewDialogForm", "Show Galactic plane line", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        showGalacticPlaneLineCheckBox->setText(QApplication::translate("viewDialogForm", "Galactic plane", 0, QApplication::UnicodeUTF8));
        showCardinalPointsCheckBox->setText(QApplication::translate("viewDialogForm", "Cardinal points", 0, QApplication::UnicodeUTF8));
        setProjectionGroupBox->setTitle(QApplication::translate("viewDialogForm", "Projection", 0, QApplication::UnicodeUTF8));
        pushButtonAddRemoveLandscapes->setText(QApplication::translate("viewDialogForm", "Add/remove landscapes...", 0, QApplication::UnicodeUTF8));
        landscapeOptionsGroupBox->setTitle(QApplication::translate("viewDialogForm", "Options", 0, QApplication::UnicodeUTF8));
        showGroundCheckBox->setText(QApplication::translate("viewDialogForm", "Show ground", 0, QApplication::UnicodeUTF8));
        showFogCheckBox->setText(QApplication::translate("viewDialogForm", "Show fog", 0, QApplication::UnicodeUTF8));
        landscapePositionCheckBox->setText(QApplication::translate("viewDialogForm", "Use associated planet and position", 0, QApplication::UnicodeUTF8));
        useAsDefaultLandscapeCheckBox->setText(QApplication::translate("viewDialogForm", "Use this landscape as default", 0, QApplication::UnicodeUTF8));
        starloreOptionsgroupBox->setTitle(QApplication::translate("viewDialogForm", "Options", 0, QApplication::UnicodeUTF8));
        useAsDefaultSkyCultureCheckBox->setText(QApplication::translate("viewDialogForm", "Use this sky culture as default", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("viewDialogForm", "Options", 0, QApplication::UnicodeUTF8));
        skyLayerEnableCheckBox->setText(QApplication::translate("viewDialogForm", "Visible", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(viewDialogForm);
    } // retranslateUi

};

namespace Ui {
    class viewDialogForm: public Ui_viewDialogForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWDIALOG_H
