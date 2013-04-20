/********************************************************************************
** Form generated from reading UI file 'ocularDialog.ui'
**
** Created: Sat Apr 20 14:27:25 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OCULARDIALOG_H
#define UI_OCULARDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QFormLayout>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "Dialog.hpp"

QT_BEGIN_NAMESPACE

class Ui_ocularDialogForm
{
public:
    QVBoxLayout *verticalLayout_2;
    BarFrame *TitleBar;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *spacer_2;
    QLabel *stelWindowTitle;
    QSpacerItem *spacer;
    QPushButton *closeStelWindow;
    QFrame *Contents;
    QVBoxLayout *verticalLayout_4;
    QTabWidget *Tabs;
    QWidget *General;
    QVBoxLayout *verticalLayoutTabGeneral;
    QGroupBox *groupBoxOcularOptions;
    QVBoxLayout *verticalLayout_7;
    QCheckBox *requireSelectionCheckBox;
    QCheckBox *scaleImageCircleCheckBox;
    QGroupBox *groupBox;
    QFormLayout *formLayout_3;
    QLabel *label_11;
    QLineEdit *togglePluginLineEdit;
    QLabel *labelPopupMenuShortcut;
    QLineEdit *togglePopupNavigatorWindowLineEdit;
    QGroupBox *groupBoxInterface;
    QVBoxLayout *verticalLayout_8;
    QCheckBox *checkBoxControlPanel;
    QCheckBox *checkBoxDecimalDegrees;
    QSpacerItem *verticalSpacer_3;
    QWidget *Eyepieces;
    QHBoxLayout *horizontalLayout_5;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QListView *ocularListView;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *addOcular;
    QPushButton *pushButtonMoveOcularUp;
    QPushButton *pushButtonMoveOcularDown;
    QPushButton *deleteOcular;
    QFrame *OcularInfoFrame;
    QVBoxLayout *verticalLayout_5;
    QFrame *OcularData;
    QFormLayout *formLayout;
    QLabel *label_3;
    QLineEdit *ocularName;
    QLabel *label_4;
    QLineEdit *ocularAFov;
    QLabel *label_5;
    QLineEdit *ocularFL;
    QLabel *label_10;
    QLineEdit *ocularFieldStop;
    QCheckBox *binocularsCheckBox;
    QSpacerItem *verticalSpacer;
    QWidget *CCD;
    QHBoxLayout *CCD_horizontalLayout_1;
    QFrame *CCDListFrame;
    QVBoxLayout *CCD_verticalLayout_1;
    QLabel *CCDlabel;
    QListView *ccdListView;
    QFrame *CCDframe_add_remove;
    QHBoxLayout *CCD_horizontalLayout_2;
    QPushButton *addCCD;
    QPushButton *pushButtonMoveSensorUp;
    QPushButton *pushButtonMoveSensorDown;
    QPushButton *deleteCCD;
    QFrame *CCDInfoFrame;
    QVBoxLayout *CCD_verticalLayout_2;
    QFrame *CCDData;
    QFormLayout *CCDformLayout;
    QLabel *CCDName_lbl;
    QLineEdit *ccdName;
    QLabel *CCDResX_lbl;
    QLineEdit *ccdResX;
    QLabel *CCDResY_lbl;
    QLineEdit *ccdResY;
    QLabel *CCDChipX_lbl;
    QLineEdit *ccdChipX;
    QLabel *CCDChipY_lbl;
    QLineEdit *ccdChipY;
    QLabel *CCDPixelX_lbl;
    QLineEdit *ccdPixelX;
    QLabel *CCDPixelY_lbl;
    QLineEdit *ccdPixelY;
    QSpacerItem *CCDverticalSpacer;
    QWidget *Telescopes;
    QHBoxLayout *horizontalLayout_6;
    QFrame *ScopeListFrame;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QListView *telescopeListView;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *addTelescope;
    QPushButton *pushButtonMoveTelescopeUp;
    QPushButton *pushButtonMoveTelescopeDown;
    QPushButton *deleteTelescope;
    QFrame *ScopeDataFrame;
    QVBoxLayout *verticalLayout_6;
    QFrame *ScopeInfo;
    QFormLayout *formLayout_2;
    QLabel *label_8;
    QLineEdit *telescopeName;
    QLabel *label_9;
    QLineEdit *telescopeFL;
    QLabel *label_12;
    QLineEdit *telescopeDiameter;
    QCheckBox *telescopeHFlip;
    QCheckBox *telescopeVFlip;
    QSpacerItem *verticalSpacer_2;
    QWidget *About;
    QGridLayout *gridLayout;
    QTextBrowser *textBrowser;

    void setupUi(QWidget *ocularDialogForm)
    {
        if (ocularDialogForm->objectName().isEmpty())
            ocularDialogForm->setObjectName(QString::fromUtf8("ocularDialogForm"));
        ocularDialogForm->resize(505, 400);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ocularDialogForm->sizePolicy().hasHeightForWidth());
        ocularDialogForm->setSizePolicy(sizePolicy);
        ocularDialogForm->setMinimumSize(QSize(300, 400));
        verticalLayout_2 = new QVBoxLayout(ocularDialogForm);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        TitleBar = new BarFrame(ocularDialogForm);
        TitleBar->setObjectName(QString::fromUtf8("TitleBar"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(TitleBar->sizePolicy().hasHeightForWidth());
        TitleBar->setSizePolicy(sizePolicy1);
        TitleBar->setMaximumSize(QSize(16777215, 25));
        TitleBar->setFrameShape(QFrame::StyledPanel);
        TitleBar->setFrameShadow(QFrame::Raised);
        horizontalLayout_7 = new QHBoxLayout(TitleBar);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 4, 0);
        spacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(spacer_2);

        stelWindowTitle = new QLabel(TitleBar);
        stelWindowTitle->setObjectName(QString::fromUtf8("stelWindowTitle"));

        horizontalLayout_7->addWidget(stelWindowTitle);

        spacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(spacer);

        closeStelWindow = new QPushButton(TitleBar);
        closeStelWindow->setObjectName(QString::fromUtf8("closeStelWindow"));
        closeStelWindow->setMinimumSize(QSize(16, 16));
        closeStelWindow->setMaximumSize(QSize(16, 16));
        closeStelWindow->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_7->addWidget(closeStelWindow);


        verticalLayout_2->addWidget(TitleBar);

        Contents = new QFrame(ocularDialogForm);
        Contents->setObjectName(QString::fromUtf8("Contents"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(Contents->sizePolicy().hasHeightForWidth());
        Contents->setSizePolicy(sizePolicy2);
        Contents->setFrameShape(QFrame::StyledPanel);
        Contents->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(Contents);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        Tabs = new QTabWidget(Contents);
        Tabs->setObjectName(QString::fromUtf8("Tabs"));
        General = new QWidget();
        General->setObjectName(QString::fromUtf8("General"));
        verticalLayoutTabGeneral = new QVBoxLayout(General);
        verticalLayoutTabGeneral->setSpacing(0);
        verticalLayoutTabGeneral->setContentsMargins(0, 0, 0, 0);
        verticalLayoutTabGeneral->setObjectName(QString::fromUtf8("verticalLayoutTabGeneral"));
        groupBoxOcularOptions = new QGroupBox(General);
        groupBoxOcularOptions->setObjectName(QString::fromUtf8("groupBoxOcularOptions"));
        verticalLayout_7 = new QVBoxLayout(groupBoxOcularOptions);
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        requireSelectionCheckBox = new QCheckBox(groupBoxOcularOptions);
        requireSelectionCheckBox->setObjectName(QString::fromUtf8("requireSelectionCheckBox"));

        verticalLayout_7->addWidget(requireSelectionCheckBox);

        scaleImageCircleCheckBox = new QCheckBox(groupBoxOcularOptions);
        scaleImageCircleCheckBox->setObjectName(QString::fromUtf8("scaleImageCircleCheckBox"));

        verticalLayout_7->addWidget(scaleImageCircleCheckBox);


        verticalLayoutTabGeneral->addWidget(groupBoxOcularOptions);

        groupBox = new QGroupBox(General);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        formLayout_3 = new QFormLayout(groupBox);
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_11);

        togglePluginLineEdit = new QLineEdit(groupBox);
        togglePluginLineEdit->setObjectName(QString::fromUtf8("togglePluginLineEdit"));
        togglePluginLineEdit->setMaximumSize(QSize(100, 16777215));
        togglePluginLineEdit->setBaseSize(QSize(100, 22));
        togglePluginLineEdit->setMaxLength(50);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, togglePluginLineEdit);

        labelPopupMenuShortcut = new QLabel(groupBox);
        labelPopupMenuShortcut->setObjectName(QString::fromUtf8("labelPopupMenuShortcut"));
        labelPopupMenuShortcut->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_3->setWidget(1, QFormLayout::LabelRole, labelPopupMenuShortcut);

        togglePopupNavigatorWindowLineEdit = new QLineEdit(groupBox);
        togglePopupNavigatorWindowLineEdit->setObjectName(QString::fromUtf8("togglePopupNavigatorWindowLineEdit"));
        togglePopupNavigatorWindowLineEdit->setMaximumSize(QSize(100, 16777215));
        togglePopupNavigatorWindowLineEdit->setBaseSize(QSize(100, 22));
        togglePopupNavigatorWindowLineEdit->setMaxLength(50);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, togglePopupNavigatorWindowLineEdit);


        verticalLayoutTabGeneral->addWidget(groupBox);

        groupBoxInterface = new QGroupBox(General);
        groupBoxInterface->setObjectName(QString::fromUtf8("groupBoxInterface"));
        verticalLayout_8 = new QVBoxLayout(groupBoxInterface);
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        checkBoxControlPanel = new QCheckBox(groupBoxInterface);
        checkBoxControlPanel->setObjectName(QString::fromUtf8("checkBoxControlPanel"));

        verticalLayout_8->addWidget(checkBoxControlPanel);

        checkBoxDecimalDegrees = new QCheckBox(groupBoxInterface);
        checkBoxDecimalDegrees->setObjectName(QString::fromUtf8("checkBoxDecimalDegrees"));

        verticalLayout_8->addWidget(checkBoxDecimalDegrees);


        verticalLayoutTabGeneral->addWidget(groupBoxInterface);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutTabGeneral->addItem(verticalSpacer_3);

        Tabs->addTab(General, QString());
        Eyepieces = new QWidget();
        Eyepieces->setObjectName(QString::fromUtf8("Eyepieces"));
        horizontalLayout_5 = new QHBoxLayout(Eyepieces);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(12, 0, 12, 12);
        frame = new QFrame(Eyepieces);
        frame->setObjectName(QString::fromUtf8("frame"));
        sizePolicy2.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy2);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        ocularListView = new QListView(frame);
        ocularListView->setObjectName(QString::fromUtf8("ocularListView"));
        ocularListView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        ocularListView->setProperty("isWrapping", QVariant(false));
        ocularListView->setViewMode(QListView::ListMode);
        ocularListView->setModelColumn(0);

        verticalLayout->addWidget(ocularListView);

        frame_4 = new QFrame(frame);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_4);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 5, 0, 0);
        addOcular = new QPushButton(frame_4);
        addOcular->setObjectName(QString::fromUtf8("addOcular"));
        addOcular->setMinimumSize(QSize(0, 24));

        horizontalLayout_2->addWidget(addOcular);

        pushButtonMoveOcularUp = new QPushButton(frame_4);
        pushButtonMoveOcularUp->setObjectName(QString::fromUtf8("pushButtonMoveOcularUp"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pushButtonMoveOcularUp->sizePolicy().hasHeightForWidth());
        pushButtonMoveOcularUp->setSizePolicy(sizePolicy3);
        pushButtonMoveOcularUp->setMinimumSize(QSize(24, 24));

        horizontalLayout_2->addWidget(pushButtonMoveOcularUp);

        pushButtonMoveOcularDown = new QPushButton(frame_4);
        pushButtonMoveOcularDown->setObjectName(QString::fromUtf8("pushButtonMoveOcularDown"));
        sizePolicy3.setHeightForWidth(pushButtonMoveOcularDown->sizePolicy().hasHeightForWidth());
        pushButtonMoveOcularDown->setSizePolicy(sizePolicy3);
        pushButtonMoveOcularDown->setMinimumSize(QSize(24, 24));

        horizontalLayout_2->addWidget(pushButtonMoveOcularDown);

        deleteOcular = new QPushButton(frame_4);
        deleteOcular->setObjectName(QString::fromUtf8("deleteOcular"));
        deleteOcular->setMinimumSize(QSize(0, 24));

        horizontalLayout_2->addWidget(deleteOcular);


        verticalLayout->addWidget(frame_4);


        horizontalLayout_5->addWidget(frame);

        OcularInfoFrame = new QFrame(Eyepieces);
        OcularInfoFrame->setObjectName(QString::fromUtf8("OcularInfoFrame"));
        OcularInfoFrame->setFrameShape(QFrame::StyledPanel);
        OcularInfoFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(OcularInfoFrame);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        OcularData = new QFrame(OcularInfoFrame);
        OcularData->setObjectName(QString::fromUtf8("OcularData"));
        OcularData->setFrameShape(QFrame::StyledPanel);
        OcularData->setFrameShadow(QFrame::Raised);
        formLayout = new QFormLayout(OcularData);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
        label_3 = new QLabel(OcularData);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        ocularName = new QLineEdit(OcularData);
        ocularName->setObjectName(QString::fromUtf8("ocularName"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(ocularName->sizePolicy().hasHeightForWidth());
        ocularName->setSizePolicy(sizePolicy4);
        ocularName->setBaseSize(QSize(100, 22));
        ocularName->setMaxLength(50);

        formLayout->setWidget(0, QFormLayout::FieldRole, ocularName);

        label_4 = new QLabel(OcularData);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);

        ocularAFov = new QLineEdit(OcularData);
        ocularAFov->setObjectName(QString::fromUtf8("ocularAFov"));
        sizePolicy4.setHeightForWidth(ocularAFov->sizePolicy().hasHeightForWidth());
        ocularAFov->setSizePolicy(sizePolicy4);
        ocularAFov->setBaseSize(QSize(100, 22));
        ocularAFov->setMaxLength(5);

        formLayout->setWidget(1, QFormLayout::FieldRole, ocularAFov);

        label_5 = new QLabel(OcularData);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_5);

        ocularFL = new QLineEdit(OcularData);
        ocularFL->setObjectName(QString::fromUtf8("ocularFL"));
        ocularFL->setBaseSize(QSize(100, 22));
        ocularFL->setMaxLength(6);

        formLayout->setWidget(2, QFormLayout::FieldRole, ocularFL);

        label_10 = new QLabel(OcularData);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_10);

        ocularFieldStop = new QLineEdit(OcularData);
        ocularFieldStop->setObjectName(QString::fromUtf8("ocularFieldStop"));
        ocularFieldStop->setBaseSize(QSize(100, 22));
        ocularFieldStop->setMaxLength(6);

        formLayout->setWidget(3, QFormLayout::FieldRole, ocularFieldStop);

        binocularsCheckBox = new QCheckBox(OcularData);
        binocularsCheckBox->setObjectName(QString::fromUtf8("binocularsCheckBox"));

        formLayout->setWidget(4, QFormLayout::SpanningRole, binocularsCheckBox);


        verticalLayout_5->addWidget(OcularData);

        verticalSpacer = new QSpacerItem(20, 86, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);


        horizontalLayout_5->addWidget(OcularInfoFrame);

        Tabs->addTab(Eyepieces, QString());
        CCD = new QWidget();
        CCD->setObjectName(QString::fromUtf8("CCD"));
        CCD_horizontalLayout_1 = new QHBoxLayout(CCD);
        CCD_horizontalLayout_1->setSpacing(0);
        CCD_horizontalLayout_1->setObjectName(QString::fromUtf8("CCD_horizontalLayout_1"));
        CCD_horizontalLayout_1->setContentsMargins(12, 0, 12, 12);
        CCDListFrame = new QFrame(CCD);
        CCDListFrame->setObjectName(QString::fromUtf8("CCDListFrame"));
        sizePolicy2.setHeightForWidth(CCDListFrame->sizePolicy().hasHeightForWidth());
        CCDListFrame->setSizePolicy(sizePolicy2);
        CCDListFrame->setFrameShape(QFrame::StyledPanel);
        CCDListFrame->setFrameShadow(QFrame::Raised);
        CCD_verticalLayout_1 = new QVBoxLayout(CCDListFrame);
        CCD_verticalLayout_1->setSpacing(0);
        CCD_verticalLayout_1->setContentsMargins(0, 0, 0, 0);
        CCD_verticalLayout_1->setObjectName(QString::fromUtf8("CCD_verticalLayout_1"));
        CCDlabel = new QLabel(CCDListFrame);
        CCDlabel->setObjectName(QString::fromUtf8("CCDlabel"));

        CCD_verticalLayout_1->addWidget(CCDlabel);

        ccdListView = new QListView(CCDListFrame);
        ccdListView->setObjectName(QString::fromUtf8("ccdListView"));
        ccdListView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        ccdListView->setProperty("isWrapping", QVariant(false));
        ccdListView->setViewMode(QListView::ListMode);
        ccdListView->setModelColumn(0);

        CCD_verticalLayout_1->addWidget(ccdListView);

        CCDframe_add_remove = new QFrame(CCDListFrame);
        CCDframe_add_remove->setObjectName(QString::fromUtf8("CCDframe_add_remove"));
        CCDframe_add_remove->setFrameShape(QFrame::StyledPanel);
        CCDframe_add_remove->setFrameShadow(QFrame::Raised);
        CCD_horizontalLayout_2 = new QHBoxLayout(CCDframe_add_remove);
        CCD_horizontalLayout_2->setObjectName(QString::fromUtf8("CCD_horizontalLayout_2"));
        CCD_horizontalLayout_2->setContentsMargins(0, 5, 0, 0);
        addCCD = new QPushButton(CCDframe_add_remove);
        addCCD->setObjectName(QString::fromUtf8("addCCD"));
        addCCD->setMinimumSize(QSize(0, 24));

        CCD_horizontalLayout_2->addWidget(addCCD);

        pushButtonMoveSensorUp = new QPushButton(CCDframe_add_remove);
        pushButtonMoveSensorUp->setObjectName(QString::fromUtf8("pushButtonMoveSensorUp"));
        sizePolicy3.setHeightForWidth(pushButtonMoveSensorUp->sizePolicy().hasHeightForWidth());
        pushButtonMoveSensorUp->setSizePolicy(sizePolicy3);
        pushButtonMoveSensorUp->setMinimumSize(QSize(24, 24));

        CCD_horizontalLayout_2->addWidget(pushButtonMoveSensorUp);

        pushButtonMoveSensorDown = new QPushButton(CCDframe_add_remove);
        pushButtonMoveSensorDown->setObjectName(QString::fromUtf8("pushButtonMoveSensorDown"));
        sizePolicy3.setHeightForWidth(pushButtonMoveSensorDown->sizePolicy().hasHeightForWidth());
        pushButtonMoveSensorDown->setSizePolicy(sizePolicy3);
        pushButtonMoveSensorDown->setMinimumSize(QSize(24, 24));

        CCD_horizontalLayout_2->addWidget(pushButtonMoveSensorDown);

        deleteCCD = new QPushButton(CCDframe_add_remove);
        deleteCCD->setObjectName(QString::fromUtf8("deleteCCD"));
        deleteCCD->setMinimumSize(QSize(0, 24));

        CCD_horizontalLayout_2->addWidget(deleteCCD);


        CCD_verticalLayout_1->addWidget(CCDframe_add_remove);


        CCD_horizontalLayout_1->addWidget(CCDListFrame);

        CCDInfoFrame = new QFrame(CCD);
        CCDInfoFrame->setObjectName(QString::fromUtf8("CCDInfoFrame"));
        CCDInfoFrame->setFrameShape(QFrame::StyledPanel);
        CCDInfoFrame->setFrameShadow(QFrame::Raised);
        CCD_verticalLayout_2 = new QVBoxLayout(CCDInfoFrame);
        CCD_verticalLayout_2->setSpacing(0);
        CCD_verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        CCD_verticalLayout_2->setObjectName(QString::fromUtf8("CCD_verticalLayout_2"));
        CCDData = new QFrame(CCDInfoFrame);
        CCDData->setObjectName(QString::fromUtf8("CCDData"));
        CCDData->setFrameShape(QFrame::StyledPanel);
        CCDData->setFrameShadow(QFrame::Raised);
        CCDformLayout = new QFormLayout(CCDData);
        CCDformLayout->setObjectName(QString::fromUtf8("CCDformLayout"));
        CCDformLayout->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
        CCDName_lbl = new QLabel(CCDData);
        CCDName_lbl->setObjectName(QString::fromUtf8("CCDName_lbl"));

        CCDformLayout->setWidget(0, QFormLayout::LabelRole, CCDName_lbl);

        ccdName = new QLineEdit(CCDData);
        ccdName->setObjectName(QString::fromUtf8("ccdName"));
        sizePolicy4.setHeightForWidth(ccdName->sizePolicy().hasHeightForWidth());
        ccdName->setSizePolicy(sizePolicy4);
        ccdName->setBaseSize(QSize(100, 22));
        ccdName->setMaxLength(50);

        CCDformLayout->setWidget(0, QFormLayout::FieldRole, ccdName);

        CCDResX_lbl = new QLabel(CCDData);
        CCDResX_lbl->setObjectName(QString::fromUtf8("CCDResX_lbl"));

        CCDformLayout->setWidget(1, QFormLayout::LabelRole, CCDResX_lbl);

        ccdResX = new QLineEdit(CCDData);
        ccdResX->setObjectName(QString::fromUtf8("ccdResX"));
        sizePolicy4.setHeightForWidth(ccdResX->sizePolicy().hasHeightForWidth());
        ccdResX->setSizePolicy(sizePolicy4);
        ccdResX->setBaseSize(QSize(100, 22));
        ccdResX->setMaxLength(5);

        CCDformLayout->setWidget(1, QFormLayout::FieldRole, ccdResX);

        CCDResY_lbl = new QLabel(CCDData);
        CCDResY_lbl->setObjectName(QString::fromUtf8("CCDResY_lbl"));

        CCDformLayout->setWidget(2, QFormLayout::LabelRole, CCDResY_lbl);

        ccdResY = new QLineEdit(CCDData);
        ccdResY->setObjectName(QString::fromUtf8("ccdResY"));
        sizePolicy4.setHeightForWidth(ccdResY->sizePolicy().hasHeightForWidth());
        ccdResY->setSizePolicy(sizePolicy4);
        ccdResY->setBaseSize(QSize(100, 22));
        ccdResY->setMaxLength(5);

        CCDformLayout->setWidget(2, QFormLayout::FieldRole, ccdResY);

        CCDChipX_lbl = new QLabel(CCDData);
        CCDChipX_lbl->setObjectName(QString::fromUtf8("CCDChipX_lbl"));

        CCDformLayout->setWidget(3, QFormLayout::LabelRole, CCDChipX_lbl);

        ccdChipX = new QLineEdit(CCDData);
        ccdChipX->setObjectName(QString::fromUtf8("ccdChipX"));
        sizePolicy4.setHeightForWidth(ccdChipX->sizePolicy().hasHeightForWidth());
        ccdChipX->setSizePolicy(sizePolicy4);
        ccdChipX->setBaseSize(QSize(100, 22));
        ccdChipX->setMaxLength(5);

        CCDformLayout->setWidget(3, QFormLayout::FieldRole, ccdChipX);

        CCDChipY_lbl = new QLabel(CCDData);
        CCDChipY_lbl->setObjectName(QString::fromUtf8("CCDChipY_lbl"));

        CCDformLayout->setWidget(4, QFormLayout::LabelRole, CCDChipY_lbl);

        ccdChipY = new QLineEdit(CCDData);
        ccdChipY->setObjectName(QString::fromUtf8("ccdChipY"));
        sizePolicy4.setHeightForWidth(ccdChipY->sizePolicy().hasHeightForWidth());
        ccdChipY->setSizePolicy(sizePolicy4);
        ccdChipY->setBaseSize(QSize(100, 22));
        ccdChipY->setMaxLength(5);

        CCDformLayout->setWidget(4, QFormLayout::FieldRole, ccdChipY);

        CCDPixelX_lbl = new QLabel(CCDData);
        CCDPixelX_lbl->setObjectName(QString::fromUtf8("CCDPixelX_lbl"));

        CCDformLayout->setWidget(5, QFormLayout::LabelRole, CCDPixelX_lbl);

        ccdPixelX = new QLineEdit(CCDData);
        ccdPixelX->setObjectName(QString::fromUtf8("ccdPixelX"));
        sizePolicy4.setHeightForWidth(ccdPixelX->sizePolicy().hasHeightForWidth());
        ccdPixelX->setSizePolicy(sizePolicy4);
        ccdPixelX->setBaseSize(QSize(100, 22));
        ccdPixelX->setMaxLength(5);

        CCDformLayout->setWidget(5, QFormLayout::FieldRole, ccdPixelX);

        CCDPixelY_lbl = new QLabel(CCDData);
        CCDPixelY_lbl->setObjectName(QString::fromUtf8("CCDPixelY_lbl"));

        CCDformLayout->setWidget(6, QFormLayout::LabelRole, CCDPixelY_lbl);

        ccdPixelY = new QLineEdit(CCDData);
        ccdPixelY->setObjectName(QString::fromUtf8("ccdPixelY"));
        sizePolicy4.setHeightForWidth(ccdPixelY->sizePolicy().hasHeightForWidth());
        ccdPixelY->setSizePolicy(sizePolicy4);
        ccdPixelY->setBaseSize(QSize(100, 22));
        ccdPixelY->setMaxLength(5);

        CCDformLayout->setWidget(6, QFormLayout::FieldRole, ccdPixelY);


        CCD_verticalLayout_2->addWidget(CCDData);

        CCDverticalSpacer = new QSpacerItem(20, 86, QSizePolicy::Minimum, QSizePolicy::Expanding);

        CCD_verticalLayout_2->addItem(CCDverticalSpacer);


        CCD_horizontalLayout_1->addWidget(CCDInfoFrame);

        Tabs->addTab(CCD, QString());
        Telescopes = new QWidget();
        Telescopes->setObjectName(QString::fromUtf8("Telescopes"));
        horizontalLayout_6 = new QHBoxLayout(Telescopes);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(12, 0, 12, 12);
        ScopeListFrame = new QFrame(Telescopes);
        ScopeListFrame->setObjectName(QString::fromUtf8("ScopeListFrame"));
        sizePolicy2.setHeightForWidth(ScopeListFrame->sizePolicy().hasHeightForWidth());
        ScopeListFrame->setSizePolicy(sizePolicy2);
        ScopeListFrame->setFrameShape(QFrame::StyledPanel);
        ScopeListFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(ScopeListFrame);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_2 = new QLabel(ScopeListFrame);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_3->addWidget(label_2);

        telescopeListView = new QListView(ScopeListFrame);
        telescopeListView->setObjectName(QString::fromUtf8("telescopeListView"));
        telescopeListView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        telescopeListView->setModelColumn(0);

        verticalLayout_3->addWidget(telescopeListView);

        frame_3 = new QFrame(ScopeListFrame);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        horizontalLayout = new QHBoxLayout(frame_3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 5, 0, 0);
        addTelescope = new QPushButton(frame_3);
        addTelescope->setObjectName(QString::fromUtf8("addTelescope"));
        addTelescope->setMinimumSize(QSize(0, 24));

        horizontalLayout->addWidget(addTelescope);

        pushButtonMoveTelescopeUp = new QPushButton(frame_3);
        pushButtonMoveTelescopeUp->setObjectName(QString::fromUtf8("pushButtonMoveTelescopeUp"));
        sizePolicy3.setHeightForWidth(pushButtonMoveTelescopeUp->sizePolicy().hasHeightForWidth());
        pushButtonMoveTelescopeUp->setSizePolicy(sizePolicy3);
        pushButtonMoveTelescopeUp->setMinimumSize(QSize(24, 24));

        horizontalLayout->addWidget(pushButtonMoveTelescopeUp);

        pushButtonMoveTelescopeDown = new QPushButton(frame_3);
        pushButtonMoveTelescopeDown->setObjectName(QString::fromUtf8("pushButtonMoveTelescopeDown"));
        sizePolicy3.setHeightForWidth(pushButtonMoveTelescopeDown->sizePolicy().hasHeightForWidth());
        pushButtonMoveTelescopeDown->setSizePolicy(sizePolicy3);
        pushButtonMoveTelescopeDown->setMinimumSize(QSize(24, 24));

        horizontalLayout->addWidget(pushButtonMoveTelescopeDown);

        deleteTelescope = new QPushButton(frame_3);
        deleteTelescope->setObjectName(QString::fromUtf8("deleteTelescope"));
        deleteTelescope->setMinimumSize(QSize(0, 24));

        horizontalLayout->addWidget(deleteTelescope);


        verticalLayout_3->addWidget(frame_3);


        horizontalLayout_6->addWidget(ScopeListFrame);

        ScopeDataFrame = new QFrame(Telescopes);
        ScopeDataFrame->setObjectName(QString::fromUtf8("ScopeDataFrame"));
        ScopeDataFrame->setFrameShape(QFrame::StyledPanel);
        ScopeDataFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_6 = new QVBoxLayout(ScopeDataFrame);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        ScopeInfo = new QFrame(ScopeDataFrame);
        ScopeInfo->setObjectName(QString::fromUtf8("ScopeInfo"));
        formLayout_2 = new QFormLayout(ScopeInfo);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_8 = new QLabel(ScopeInfo);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_8);

        telescopeName = new QLineEdit(ScopeInfo);
        telescopeName->setObjectName(QString::fromUtf8("telescopeName"));
        telescopeName->setMaxLength(50);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, telescopeName);

        label_9 = new QLabel(ScopeInfo);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_9);

        telescopeFL = new QLineEdit(ScopeInfo);
        telescopeFL->setObjectName(QString::fromUtf8("telescopeFL"));
        telescopeFL->setMaxLength(5);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, telescopeFL);

        label_12 = new QLabel(ScopeInfo);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_12);

        telescopeDiameter = new QLineEdit(ScopeInfo);
        telescopeDiameter->setObjectName(QString::fromUtf8("telescopeDiameter"));
        telescopeDiameter->setMaxLength(8);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, telescopeDiameter);

        telescopeHFlip = new QCheckBox(ScopeInfo);
        telescopeHFlip->setObjectName(QString::fromUtf8("telescopeHFlip"));

        formLayout_2->setWidget(3, QFormLayout::SpanningRole, telescopeHFlip);

        telescopeVFlip = new QCheckBox(ScopeInfo);
        telescopeVFlip->setObjectName(QString::fromUtf8("telescopeVFlip"));

        formLayout_2->setWidget(4, QFormLayout::SpanningRole, telescopeVFlip);


        verticalLayout_6->addWidget(ScopeInfo);

        verticalSpacer_2 = new QSpacerItem(20, 38, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_2);


        horizontalLayout_6->addWidget(ScopeDataFrame);

        Tabs->addTab(Telescopes, QString());
        About = new QWidget();
        About->setObjectName(QString::fromUtf8("About"));
        gridLayout = new QGridLayout(About);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textBrowser = new QTextBrowser(About);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setOpenExternalLinks(true);

        gridLayout->addWidget(textBrowser, 0, 0, 1, 1);

        Tabs->addTab(About, QString());

        verticalLayout_4->addWidget(Tabs);


        verticalLayout_2->addWidget(Contents);

        QWidget::setTabOrder(Tabs, requireSelectionCheckBox);
        QWidget::setTabOrder(requireSelectionCheckBox, scaleImageCircleCheckBox);
        QWidget::setTabOrder(scaleImageCircleCheckBox, togglePluginLineEdit);
        QWidget::setTabOrder(togglePluginLineEdit, togglePopupNavigatorWindowLineEdit);
        QWidget::setTabOrder(togglePopupNavigatorWindowLineEdit, ocularListView);
        QWidget::setTabOrder(ocularListView, addOcular);
        QWidget::setTabOrder(addOcular, pushButtonMoveOcularUp);
        QWidget::setTabOrder(pushButtonMoveOcularUp, pushButtonMoveOcularDown);
        QWidget::setTabOrder(pushButtonMoveOcularDown, deleteOcular);
        QWidget::setTabOrder(deleteOcular, ocularName);
        QWidget::setTabOrder(ocularName, ocularAFov);
        QWidget::setTabOrder(ocularAFov, ocularFL);
        QWidget::setTabOrder(ocularFL, ocularFieldStop);
        QWidget::setTabOrder(ocularFieldStop, binocularsCheckBox);
        QWidget::setTabOrder(binocularsCheckBox, ccdListView);
        QWidget::setTabOrder(ccdListView, addCCD);
        QWidget::setTabOrder(addCCD, pushButtonMoveSensorUp);
        QWidget::setTabOrder(pushButtonMoveSensorUp, pushButtonMoveSensorDown);
        QWidget::setTabOrder(pushButtonMoveSensorDown, deleteCCD);
        QWidget::setTabOrder(deleteCCD, ccdName);
        QWidget::setTabOrder(ccdName, ccdResX);
        QWidget::setTabOrder(ccdResX, ccdResY);
        QWidget::setTabOrder(ccdResY, ccdChipX);
        QWidget::setTabOrder(ccdChipX, ccdChipY);
        QWidget::setTabOrder(ccdChipY, ccdPixelX);
        QWidget::setTabOrder(ccdPixelX, ccdPixelY);
        QWidget::setTabOrder(ccdPixelY, telescopeListView);
        QWidget::setTabOrder(telescopeListView, addTelescope);
        QWidget::setTabOrder(addTelescope, pushButtonMoveTelescopeUp);
        QWidget::setTabOrder(pushButtonMoveTelescopeUp, pushButtonMoveTelescopeDown);
        QWidget::setTabOrder(pushButtonMoveTelescopeDown, deleteTelescope);
        QWidget::setTabOrder(deleteTelescope, telescopeName);
        QWidget::setTabOrder(telescopeName, telescopeFL);
        QWidget::setTabOrder(telescopeFL, telescopeDiameter);
        QWidget::setTabOrder(telescopeDiameter, telescopeHFlip);
        QWidget::setTabOrder(telescopeHFlip, telescopeVFlip);
        QWidget::setTabOrder(telescopeVFlip, textBrowser);

        retranslateUi(ocularDialogForm);

        Tabs->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ocularDialogForm);
    } // setupUi

    void retranslateUi(QWidget *ocularDialogForm)
    {
        stelWindowTitle->setText(QApplication::translate("ocularDialogForm", "Oculars", 0, QApplication::UnicodeUTF8));
        closeStelWindow->setText(QString());
        groupBoxOcularOptions->setTitle(QApplication::translate("ocularDialogForm", "Ocular view", 0, QApplication::UnicodeUTF8));
        requireSelectionCheckBox->setText(QApplication::translate("ocularDialogForm", "Enable only if an object is selected", 0, QApplication::UnicodeUTF8));
        scaleImageCircleCheckBox->setText(QApplication::translate("ocularDialogForm", "Scale image circle", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("ocularDialogForm", "Key mappings", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("ocularDialogForm", "Toggle ocular view:", 0, QApplication::UnicodeUTF8));
        togglePluginLineEdit->setText(QString());
        labelPopupMenuShortcut->setText(QApplication::translate("ocularDialogForm", "Open pop-up navigation menu:", 0, QApplication::UnicodeUTF8));
        groupBoxInterface->setTitle(QApplication::translate("ocularDialogForm", "Interface", 0, QApplication::UnicodeUTF8));
        checkBoxControlPanel->setText(QApplication::translate("ocularDialogForm", "On-screen control panel", 0, QApplication::UnicodeUTF8));
        checkBoxDecimalDegrees->setText(QApplication::translate("ocularDialogForm", "Use degrees and minutes for FOV of CCD", 0, QApplication::UnicodeUTF8));
        Tabs->setTabText(Tabs->indexOf(General), QApplication::translate("ocularDialogForm", "General", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ocularDialogForm", "Eyepieces", 0, QApplication::UnicodeUTF8));
        addOcular->setText(QApplication::translate("ocularDialogForm", "Add", 0, QApplication::UnicodeUTF8));
        deleteOcular->setText(QApplication::translate("ocularDialogForm", "Delete", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ocularDialogForm", "Name:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ocularDialogForm", "aFOV:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("ocularDialogForm", "Focal length:", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("ocularDialogForm", "Field stop:", 0, QApplication::UnicodeUTF8));
        binocularsCheckBox->setText(QApplication::translate("ocularDialogForm", "Binoculars", 0, QApplication::UnicodeUTF8));
        Tabs->setTabText(Tabs->indexOf(Eyepieces), QApplication::translate("ocularDialogForm", "Eyepieces", 0, QApplication::UnicodeUTF8));
        CCDlabel->setText(QApplication::translate("ocularDialogForm", "Sensors", 0, QApplication::UnicodeUTF8));
        addCCD->setText(QApplication::translate("ocularDialogForm", "Add", 0, QApplication::UnicodeUTF8));
        deleteCCD->setText(QApplication::translate("ocularDialogForm", "Delete", 0, QApplication::UnicodeUTF8));
        CCDName_lbl->setText(QApplication::translate("ocularDialogForm", "Name:", 0, QApplication::UnicodeUTF8));
        CCDResX_lbl->setText(QApplication::translate("ocularDialogForm", "Resolution x (pixels):", 0, QApplication::UnicodeUTF8));
        CCDResY_lbl->setText(QApplication::translate("ocularDialogForm", "Resolution y (pixels):", 0, QApplication::UnicodeUTF8));
        CCDChipX_lbl->setText(QApplication::translate("ocularDialogForm", "Chip width (mm):", 0, QApplication::UnicodeUTF8));
        CCDChipY_lbl->setText(QApplication::translate("ocularDialogForm", "Chip height (mm):", 0, QApplication::UnicodeUTF8));
        CCDPixelX_lbl->setText(QApplication::translate("ocularDialogForm", "Pixel width (micron):", 0, QApplication::UnicodeUTF8));
        CCDPixelY_lbl->setText(QApplication::translate("ocularDialogForm", "Pixel height (micron):", 0, QApplication::UnicodeUTF8));
        Tabs->setTabText(Tabs->indexOf(CCD), QApplication::translate("ocularDialogForm", "Sensors", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ocularDialogForm", "Telescopes", 0, QApplication::UnicodeUTF8));
        addTelescope->setText(QApplication::translate("ocularDialogForm", "Add", 0, QApplication::UnicodeUTF8));
        deleteTelescope->setText(QApplication::translate("ocularDialogForm", "Delete", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("ocularDialogForm", "Name:", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("ocularDialogForm", "Focal length:", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("ocularDialogForm", "Diameter:", 0, QApplication::UnicodeUTF8));
        telescopeHFlip->setText(QApplication::translate("ocularDialogForm", "Horizontal flip", 0, QApplication::UnicodeUTF8));
        telescopeVFlip->setText(QApplication::translate("ocularDialogForm", "Vertical flip", 0, QApplication::UnicodeUTF8));
        Tabs->setTabText(Tabs->indexOf(Telescopes), QApplication::translate("ocularDialogForm", "Telescopes", 0, QApplication::UnicodeUTF8));
        Tabs->setTabText(Tabs->indexOf(About), QApplication::translate("ocularDialogForm", "About", "tab in plugin windows", QApplication::UnicodeUTF8));
        Q_UNUSED(ocularDialogForm);
    } // retranslateUi

};

namespace Ui {
    class ocularDialogForm: public Ui_ocularDialogForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OCULARDIALOG_H
