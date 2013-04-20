/********************************************************************************
** Form generated from reading UI file 'searchDialogGui.ui'
**
** Created: Sat Apr 20 14:26:00 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHDIALOGGUI_H
#define UI_SEARCHDIALOGGUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "AngleSpinBox.hpp"
#include "Dialog.hpp"
#include "SearchDialog.hpp"

QT_BEGIN_NAMESPACE

class Ui_searchDialogForm
{
public:
    QVBoxLayout *verticalLayout;
    BarFrame *TitleBar;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QLabel *stelWindowTitle;
    QSpacerItem *spacerItem1;
    QPushButton *closeStelWindow;
    QTabWidget *tabWidget;
    QWidget *objectTab;
    QVBoxLayout *verticalLayout_2;
    QFrame *horizontalSearchLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEditSearchSkyObject;
    QPushButton *pushButtonGotoSearchSkyObject;
    CompletionLabel *completionLabel;
    QLabel *simbadStatusLabel;
    QFrame *greekLettersFrame;
    QGridLayout *gridLayout;
    QPushButton *iotaPushButton;
    QPushButton *alphaPushButton;
    QPushButton *betaPushButton;
    QPushButton *gammaPushButton;
    QPushButton *deltaPushButton;
    QPushButton *epsilonPushButton;
    QPushButton *zetaPushButton;
    QPushButton *etaPushButton;
    QPushButton *thetaPushButton;
    QPushButton *kappaPushButton;
    QPushButton *lambdaPushButton;
    QPushButton *muPushButton;
    QPushButton *nuPushButton;
    QPushButton *xiPushButton;
    QPushButton *omicronPushButton;
    QPushButton *piPushButton;
    QPushButton *rhoPushButton;
    QPushButton *sigmaPushButton;
    QPushButton *tauPushButton;
    QPushButton *upsilonPushButton;
    QPushButton *phiPushButton;
    QPushButton *chiPushButton;
    QPushButton *psiPushButton;
    QPushButton *omegaPushButton;
    QLabel *labelGreekLetterTitle;
    QWidget *tabPosition;
    QVBoxLayout *verticalLayout_3;
    QFrame *j2000Frame;
    QHBoxLayout *horizontalLayoutJ2000;
    QLabel *raDecLabel;
    AngleSpinBox *RAAngleSpinBox;
    QSpacerItem *horizontalSpacer;
    AngleSpinBox *DEAngleSpinBox;
    QWidget *tabOptions;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *simbadGroupBox;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *checkBoxUseSimbad;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelServer;
    QComboBox *serverListComboBox;

    void setupUi(QWidget *searchDialogForm)
    {
        if (searchDialogForm->objectName().isEmpty())
            searchDialogForm->setObjectName(QString::fromUtf8("searchDialogForm"));
        searchDialogForm->resize(528, 198);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(searchDialogForm->sizePolicy().hasHeightForWidth());
        searchDialogForm->setSizePolicy(sizePolicy);
        searchDialogForm->setMinimumSize(QSize(390, 0));
        searchDialogForm->setFocusPolicy(Qt::ClickFocus);
        searchDialogForm->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(searchDialogForm);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        TitleBar = new BarFrame(searchDialogForm);
        TitleBar->setObjectName(QString::fromUtf8("TitleBar"));
        TitleBar->setMinimumSize(QSize(16, 25));
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


        verticalLayout->addWidget(TitleBar);

        tabWidget = new QTabWidget(searchDialogForm);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        objectTab = new QWidget();
        objectTab->setObjectName(QString::fromUtf8("objectTab"));
        verticalLayout_2 = new QVBoxLayout(objectTab);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalSearchLayout = new QFrame(objectTab);
        horizontalSearchLayout->setObjectName(QString::fromUtf8("horizontalSearchLayout"));
        horizontalSearchLayout->setMinimumSize(QSize(0, 0));
        horizontalSearchLayout->setFrameShape(QFrame::StyledPanel);
        horizontalLayout = new QHBoxLayout(horizontalSearchLayout);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lineEditSearchSkyObject = new QLineEdit(horizontalSearchLayout);
        lineEditSearchSkyObject->setObjectName(QString::fromUtf8("lineEditSearchSkyObject"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEditSearchSkyObject->sizePolicy().hasHeightForWidth());
        lineEditSearchSkyObject->setSizePolicy(sizePolicy1);
        QFont font;
        lineEditSearchSkyObject->setFont(font);
        lineEditSearchSkyObject->setFocusPolicy(Qt::StrongFocus);
        lineEditSearchSkyObject->setAutoFillBackground(false);

        horizontalLayout->addWidget(lineEditSearchSkyObject);

        pushButtonGotoSearchSkyObject = new QPushButton(horizontalSearchLayout);
        pushButtonGotoSearchSkyObject->setObjectName(QString::fromUtf8("pushButtonGotoSearchSkyObject"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButtonGotoSearchSkyObject->sizePolicy().hasHeightForWidth());
        pushButtonGotoSearchSkyObject->setSizePolicy(sizePolicy2);
        pushButtonGotoSearchSkyObject->setMinimumSize(QSize(45, 30));
        pushButtonGotoSearchSkyObject->setMaximumSize(QSize(16777215, 30));
        pushButtonGotoSearchSkyObject->setFocusPolicy(Qt::NoFocus);
        pushButtonGotoSearchSkyObject->setIconSize(QSize(24, 24));
        pushButtonGotoSearchSkyObject->setCheckable(false);

        horizontalLayout->addWidget(pushButtonGotoSearchSkyObject);


        verticalLayout_2->addWidget(horizontalSearchLayout);

        completionLabel = new CompletionLabel(objectTab);
        completionLabel->setObjectName(QString::fromUtf8("completionLabel"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy3.setHorizontalStretch(35);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(completionLabel->sizePolicy().hasHeightForWidth());
        completionLabel->setSizePolicy(sizePolicy3);
        completionLabel->setMinimumSize(QSize(390, 0));
        completionLabel->setFrameShape(QFrame::NoFrame);
        completionLabel->setLineWidth(1);
        completionLabel->setScaledContents(false);
        completionLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        completionLabel->setWordWrap(true);
        completionLabel->setTextInteractionFlags(Qt::TextSelectableByMouse);

        verticalLayout_2->addWidget(completionLabel);

        simbadStatusLabel = new QLabel(objectTab);
        simbadStatusLabel->setObjectName(QString::fromUtf8("simbadStatusLabel"));
        simbadStatusLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(simbadStatusLabel);

        greekLettersFrame = new QFrame(objectTab);
        greekLettersFrame->setObjectName(QString::fromUtf8("greekLettersFrame"));
        sizePolicy.setHeightForWidth(greekLettersFrame->sizePolicy().hasHeightForWidth());
        greekLettersFrame->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(greekLettersFrame);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        iotaPushButton = new QPushButton(greekLettersFrame);
        iotaPushButton->setObjectName(QString::fromUtf8("iotaPushButton"));
        iotaPushButton->setFocusPolicy(Qt::NoFocus);
        iotaPushButton->setText(QString::fromUtf8("\316\271"));

        gridLayout->addWidget(iotaPushButton, 1, 8, 1, 1);

        alphaPushButton = new QPushButton(greekLettersFrame);
        alphaPushButton->setObjectName(QString::fromUtf8("alphaPushButton"));
        alphaPushButton->setFocusPolicy(Qt::NoFocus);
        alphaPushButton->setText(QString::fromUtf8("\316\261"));

        gridLayout->addWidget(alphaPushButton, 1, 0, 1, 1);

        betaPushButton = new QPushButton(greekLettersFrame);
        betaPushButton->setObjectName(QString::fromUtf8("betaPushButton"));
        betaPushButton->setFocusPolicy(Qt::NoFocus);
        betaPushButton->setText(QString::fromUtf8("\316\262"));

        gridLayout->addWidget(betaPushButton, 1, 1, 1, 1);

        gammaPushButton = new QPushButton(greekLettersFrame);
        gammaPushButton->setObjectName(QString::fromUtf8("gammaPushButton"));
        gammaPushButton->setFocusPolicy(Qt::NoFocus);
        gammaPushButton->setText(QString::fromUtf8("\316\263"));

        gridLayout->addWidget(gammaPushButton, 1, 2, 1, 1);

        deltaPushButton = new QPushButton(greekLettersFrame);
        deltaPushButton->setObjectName(QString::fromUtf8("deltaPushButton"));
        deltaPushButton->setFocusPolicy(Qt::NoFocus);
        deltaPushButton->setText(QString::fromUtf8("\316\264"));

        gridLayout->addWidget(deltaPushButton, 1, 3, 1, 1);

        epsilonPushButton = new QPushButton(greekLettersFrame);
        epsilonPushButton->setObjectName(QString::fromUtf8("epsilonPushButton"));
        epsilonPushButton->setFocusPolicy(Qt::NoFocus);
        epsilonPushButton->setText(QString::fromUtf8("\316\265"));

        gridLayout->addWidget(epsilonPushButton, 1, 4, 1, 1);

        zetaPushButton = new QPushButton(greekLettersFrame);
        zetaPushButton->setObjectName(QString::fromUtf8("zetaPushButton"));
        zetaPushButton->setFocusPolicy(Qt::NoFocus);
        zetaPushButton->setText(QString::fromUtf8("\316\266"));

        gridLayout->addWidget(zetaPushButton, 1, 5, 1, 1);

        etaPushButton = new QPushButton(greekLettersFrame);
        etaPushButton->setObjectName(QString::fromUtf8("etaPushButton"));
        etaPushButton->setFocusPolicy(Qt::NoFocus);
        etaPushButton->setText(QString::fromUtf8("\316\267"));

        gridLayout->addWidget(etaPushButton, 1, 6, 1, 1);

        thetaPushButton = new QPushButton(greekLettersFrame);
        thetaPushButton->setObjectName(QString::fromUtf8("thetaPushButton"));
        thetaPushButton->setFocusPolicy(Qt::NoFocus);
        thetaPushButton->setText(QString::fromUtf8("\316\270"));

        gridLayout->addWidget(thetaPushButton, 1, 7, 1, 1);

        kappaPushButton = new QPushButton(greekLettersFrame);
        kappaPushButton->setObjectName(QString::fromUtf8("kappaPushButton"));
        kappaPushButton->setFocusPolicy(Qt::NoFocus);
        kappaPushButton->setText(QString::fromUtf8("\316\272"));

        gridLayout->addWidget(kappaPushButton, 1, 9, 1, 1);

        lambdaPushButton = new QPushButton(greekLettersFrame);
        lambdaPushButton->setObjectName(QString::fromUtf8("lambdaPushButton"));
        lambdaPushButton->setFocusPolicy(Qt::NoFocus);
        lambdaPushButton->setText(QString::fromUtf8("\316\273"));

        gridLayout->addWidget(lambdaPushButton, 1, 10, 1, 1);

        muPushButton = new QPushButton(greekLettersFrame);
        muPushButton->setObjectName(QString::fromUtf8("muPushButton"));
        muPushButton->setFocusPolicy(Qt::NoFocus);
        muPushButton->setText(QString::fromUtf8("\316\274"));

        gridLayout->addWidget(muPushButton, 1, 11, 1, 1);

        nuPushButton = new QPushButton(greekLettersFrame);
        nuPushButton->setObjectName(QString::fromUtf8("nuPushButton"));
        nuPushButton->setFocusPolicy(Qt::NoFocus);
        nuPushButton->setText(QString::fromUtf8("\316\275"));

        gridLayout->addWidget(nuPushButton, 2, 0, 1, 1);

        xiPushButton = new QPushButton(greekLettersFrame);
        xiPushButton->setObjectName(QString::fromUtf8("xiPushButton"));
        xiPushButton->setFocusPolicy(Qt::NoFocus);
        xiPushButton->setText(QString::fromUtf8("\316\276"));

        gridLayout->addWidget(xiPushButton, 2, 1, 1, 1);

        omicronPushButton = new QPushButton(greekLettersFrame);
        omicronPushButton->setObjectName(QString::fromUtf8("omicronPushButton"));
        omicronPushButton->setFocusPolicy(Qt::NoFocus);
        omicronPushButton->setText(QString::fromUtf8("\316\277"));

        gridLayout->addWidget(omicronPushButton, 2, 2, 1, 1);

        piPushButton = new QPushButton(greekLettersFrame);
        piPushButton->setObjectName(QString::fromUtf8("piPushButton"));
        piPushButton->setFocusPolicy(Qt::NoFocus);
        piPushButton->setText(QString::fromUtf8("\317\200"));

        gridLayout->addWidget(piPushButton, 2, 3, 1, 1);

        rhoPushButton = new QPushButton(greekLettersFrame);
        rhoPushButton->setObjectName(QString::fromUtf8("rhoPushButton"));
        rhoPushButton->setFocusPolicy(Qt::NoFocus);
        rhoPushButton->setText(QString::fromUtf8("\317\201"));

        gridLayout->addWidget(rhoPushButton, 2, 4, 1, 1);

        sigmaPushButton = new QPushButton(greekLettersFrame);
        sigmaPushButton->setObjectName(QString::fromUtf8("sigmaPushButton"));
        sigmaPushButton->setFocusPolicy(Qt::NoFocus);
        sigmaPushButton->setText(QString::fromUtf8("\317\203"));

        gridLayout->addWidget(sigmaPushButton, 2, 5, 1, 1);

        tauPushButton = new QPushButton(greekLettersFrame);
        tauPushButton->setObjectName(QString::fromUtf8("tauPushButton"));
        tauPushButton->setFocusPolicy(Qt::NoFocus);
        tauPushButton->setText(QString::fromUtf8("\317\204"));

        gridLayout->addWidget(tauPushButton, 2, 6, 1, 1);

        upsilonPushButton = new QPushButton(greekLettersFrame);
        upsilonPushButton->setObjectName(QString::fromUtf8("upsilonPushButton"));
        upsilonPushButton->setFocusPolicy(Qt::NoFocus);
        upsilonPushButton->setText(QString::fromUtf8("\317\205"));

        gridLayout->addWidget(upsilonPushButton, 2, 7, 1, 1);

        phiPushButton = new QPushButton(greekLettersFrame);
        phiPushButton->setObjectName(QString::fromUtf8("phiPushButton"));
        phiPushButton->setFocusPolicy(Qt::NoFocus);
        phiPushButton->setText(QString::fromUtf8("\317\206"));

        gridLayout->addWidget(phiPushButton, 2, 8, 1, 1);

        chiPushButton = new QPushButton(greekLettersFrame);
        chiPushButton->setObjectName(QString::fromUtf8("chiPushButton"));
        chiPushButton->setFocusPolicy(Qt::NoFocus);
        chiPushButton->setText(QString::fromUtf8("\317\207"));

        gridLayout->addWidget(chiPushButton, 2, 9, 1, 1);

        psiPushButton = new QPushButton(greekLettersFrame);
        psiPushButton->setObjectName(QString::fromUtf8("psiPushButton"));
        psiPushButton->setFocusPolicy(Qt::NoFocus);
        psiPushButton->setText(QString::fromUtf8("\317\210"));

        gridLayout->addWidget(psiPushButton, 2, 10, 1, 1);

        omegaPushButton = new QPushButton(greekLettersFrame);
        omegaPushButton->setObjectName(QString::fromUtf8("omegaPushButton"));
        omegaPushButton->setFocusPolicy(Qt::NoFocus);
        omegaPushButton->setText(QString::fromUtf8("\317\211"));

        gridLayout->addWidget(omegaPushButton, 2, 11, 1, 1);

        labelGreekLetterTitle = new QLabel(greekLettersFrame);
        labelGreekLetterTitle->setObjectName(QString::fromUtf8("labelGreekLetterTitle"));
        labelGreekLetterTitle->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labelGreekLetterTitle, 0, 0, 1, 12);


        verticalLayout_2->addWidget(greekLettersFrame);

        tabWidget->addTab(objectTab, QString());
        tabPosition = new QWidget();
        tabPosition->setObjectName(QString::fromUtf8("tabPosition"));
        verticalLayout_3 = new QVBoxLayout(tabPosition);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        j2000Frame = new QFrame(tabPosition);
        j2000Frame->setObjectName(QString::fromUtf8("j2000Frame"));
        horizontalLayoutJ2000 = new QHBoxLayout(j2000Frame);
        horizontalLayoutJ2000->setObjectName(QString::fromUtf8("horizontalLayoutJ2000"));
        raDecLabel = new QLabel(j2000Frame);
        raDecLabel->setObjectName(QString::fromUtf8("raDecLabel"));

        horizontalLayoutJ2000->addWidget(raDecLabel);

        RAAngleSpinBox = new AngleSpinBox(j2000Frame);
        RAAngleSpinBox->setObjectName(QString::fromUtf8("RAAngleSpinBox"));
        sizePolicy1.setHeightForWidth(RAAngleSpinBox->sizePolicy().hasHeightForWidth());
        RAAngleSpinBox->setSizePolicy(sizePolicy1);

        horizontalLayoutJ2000->addWidget(RAAngleSpinBox);

        horizontalSpacer = new QSpacerItem(8, 8, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayoutJ2000->addItem(horizontalSpacer);

        DEAngleSpinBox = new AngleSpinBox(j2000Frame);
        DEAngleSpinBox->setObjectName(QString::fromUtf8("DEAngleSpinBox"));
        sizePolicy1.setHeightForWidth(DEAngleSpinBox->sizePolicy().hasHeightForWidth());
        DEAngleSpinBox->setSizePolicy(sizePolicy1);

        horizontalLayoutJ2000->addWidget(DEAngleSpinBox);


        verticalLayout_3->addWidget(j2000Frame);

        tabWidget->addTab(tabPosition, QString());
        tabOptions = new QWidget();
        tabOptions->setObjectName(QString::fromUtf8("tabOptions"));
        verticalLayout_4 = new QVBoxLayout(tabOptions);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        simbadGroupBox = new QGroupBox(tabOptions);
        simbadGroupBox->setObjectName(QString::fromUtf8("simbadGroupBox"));
        verticalLayout_5 = new QVBoxLayout(simbadGroupBox);
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        checkBoxUseSimbad = new QCheckBox(simbadGroupBox);
        checkBoxUseSimbad->setObjectName(QString::fromUtf8("checkBoxUseSimbad"));

        verticalLayout_5->addWidget(checkBoxUseSimbad);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        labelServer = new QLabel(simbadGroupBox);
        labelServer->setObjectName(QString::fromUtf8("labelServer"));

        horizontalLayout_2->addWidget(labelServer);

        serverListComboBox = new QComboBox(simbadGroupBox);
        serverListComboBox->setObjectName(QString::fromUtf8("serverListComboBox"));
        sizePolicy.setHeightForWidth(serverListComboBox->sizePolicy().hasHeightForWidth());
        serverListComboBox->setSizePolicy(sizePolicy);
        serverListComboBox->setMinimumSize(QSize(0, 24));
        serverListComboBox->setMaximumSize(QSize(16777215, 24));
        serverListComboBox->setEditable(false);

        horizontalLayout_2->addWidget(serverListComboBox);


        verticalLayout_5->addLayout(horizontalLayout_2);


        verticalLayout_4->addWidget(simbadGroupBox);

        tabWidget->addTab(tabOptions, QString());

        verticalLayout->addWidget(tabWidget);

        QWidget::setTabOrder(tabWidget, lineEditSearchSkyObject);
        QWidget::setTabOrder(lineEditSearchSkyObject, RAAngleSpinBox);
        QWidget::setTabOrder(RAAngleSpinBox, DEAngleSpinBox);

        retranslateUi(searchDialogForm);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(searchDialogForm);
    } // setupUi

    void retranslateUi(QWidget *searchDialogForm)
    {
        searchDialogForm->setWindowTitle(QApplication::translate("searchDialogForm", "Find Object", 0, QApplication::UnicodeUTF8));
        stelWindowTitle->setText(QApplication::translate("searchDialogForm", "Find Object or Position", 0, QApplication::UnicodeUTF8));
        closeStelWindow->setText(QString());
        lineEditSearchSkyObject->setText(QString());
        completionLabel->setText(QString());
        simbadStatusLabel->setText(QString());
#ifndef QT_NO_TOOLTIP
        iotaPushButton->setToolTip(QApplication::translate("searchDialogForm", "iota", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        alphaPushButton->setToolTip(QApplication::translate("searchDialogForm", "alpha", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        betaPushButton->setToolTip(QApplication::translate("searchDialogForm", "beta", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        gammaPushButton->setToolTip(QApplication::translate("searchDialogForm", "gamma", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        deltaPushButton->setToolTip(QApplication::translate("searchDialogForm", "delta", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        epsilonPushButton->setToolTip(QApplication::translate("searchDialogForm", "epsilon", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        zetaPushButton->setToolTip(QApplication::translate("searchDialogForm", "zeta", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        etaPushButton->setToolTip(QApplication::translate("searchDialogForm", "eta", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        thetaPushButton->setToolTip(QApplication::translate("searchDialogForm", "theta", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        kappaPushButton->setToolTip(QApplication::translate("searchDialogForm", "kappa", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        lambdaPushButton->setToolTip(QApplication::translate("searchDialogForm", "lambda", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        muPushButton->setToolTip(QApplication::translate("searchDialogForm", "mu", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        nuPushButton->setToolTip(QApplication::translate("searchDialogForm", "nu", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        xiPushButton->setToolTip(QApplication::translate("searchDialogForm", "xi", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        omicronPushButton->setToolTip(QApplication::translate("searchDialogForm", "omicron", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        piPushButton->setToolTip(QApplication::translate("searchDialogForm", "pi", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        rhoPushButton->setToolTip(QApplication::translate("searchDialogForm", "rho", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        sigmaPushButton->setToolTip(QApplication::translate("searchDialogForm", "sigma", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        tauPushButton->setToolTip(QApplication::translate("searchDialogForm", "tau", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        upsilonPushButton->setToolTip(QApplication::translate("searchDialogForm", "upsilon", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        phiPushButton->setToolTip(QApplication::translate("searchDialogForm", "phi", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        chiPushButton->setToolTip(QApplication::translate("searchDialogForm", "chi", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        psiPushButton->setToolTip(QApplication::translate("searchDialogForm", "psi", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        omegaPushButton->setToolTip(QApplication::translate("searchDialogForm", "omega", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        labelGreekLetterTitle->setText(QApplication::translate("searchDialogForm", "Greek letters for Bayer designations", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(objectTab), QApplication::translate("searchDialogForm", "Object", 0, QApplication::UnicodeUTF8));
        raDecLabel->setText(QApplication::translate("searchDialogForm", "RA/Dec (J2000):", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabPosition), QApplication::translate("searchDialogForm", "Position", 0, QApplication::UnicodeUTF8));
        simbadGroupBox->setTitle(QApplication::translate("searchDialogForm", "On-line astronomical database SIMBAD", 0, QApplication::UnicodeUTF8));
        checkBoxUseSimbad->setText(QApplication::translate("searchDialogForm", "Extend search with SIMBAD", 0, QApplication::UnicodeUTF8));
        labelServer->setText(QApplication::translate("searchDialogForm", "Server:", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabOptions), QApplication::translate("searchDialogForm", "Options", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class searchDialogForm: public Ui_searchDialogForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHDIALOGGUI_H
