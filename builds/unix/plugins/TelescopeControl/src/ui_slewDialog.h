/********************************************************************************
** Form generated from reading UI file 'slewDialog.ui'
**
** Created: Sat Apr 20 14:28:34 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SLEWDIALOG_H
#define UI_SLEWDIALOG_H

#include <AngleSpinBox.hpp>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "Dialog.hpp"

QT_BEGIN_NAMESPACE

class Ui_slewDialog
{
public:
    QVBoxLayout *verticalLayout;
    BarFrame *TitleBar;
    QHBoxLayout *hboxLayout;
    QSpacerItem *leftSpacer;
    QLabel *stelWindowTitle;
    QSpacerItem *rightSpacer;
    QPushButton *closeStelWindow;
    QLabel *labelNoTelescopes;
    QGroupBox *groupBoxSlew;
    QVBoxLayout *verticalLayout_2;
    QFrame *frameCoordinates;
    QGridLayout *gridLayout;
    QLabel *labelRA;
    QLabel *labelDec;
    AngleSpinBox *spinBoxDec;
    AngleSpinBox *spinBoxRA;
    QFrame *frameFormat;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButtonHMS;
    QRadioButton *radioButtonDMS;
    QRadioButton *radioButtonDecimal;
    QFrame *frameTelescope;
    QVBoxLayout *verticalLayout_3;
    QComboBox *comboBoxTelescope;
    QPushButton *pushButtonSlew;
    QPushButton *pushButtonConfigure;

    void setupUi(QWidget *slewDialog)
    {
        if (slewDialog->objectName().isEmpty())
            slewDialog->setObjectName(QString::fromUtf8("slewDialog"));
        slewDialog->resize(400, 291);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(slewDialog->sizePolicy().hasHeightForWidth());
        slewDialog->setSizePolicy(sizePolicy);
        slewDialog->setMinimumSize(QSize(400, 0));
        verticalLayout = new QVBoxLayout(slewDialog);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        TitleBar = new BarFrame(slewDialog);
        TitleBar->setObjectName(QString::fromUtf8("TitleBar"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(TitleBar->sizePolicy().hasHeightForWidth());
        TitleBar->setSizePolicy(sizePolicy1);
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

        labelNoTelescopes = new QLabel(slewDialog);
        labelNoTelescopes->setObjectName(QString::fromUtf8("labelNoTelescopes"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(labelNoTelescopes->sizePolicy().hasHeightForWidth());
        labelNoTelescopes->setSizePolicy(sizePolicy2);
        labelNoTelescopes->setAlignment(Qt::AlignCenter);
        labelNoTelescopes->setTextInteractionFlags(Qt::NoTextInteraction);

        verticalLayout->addWidget(labelNoTelescopes);

        groupBoxSlew = new QGroupBox(slewDialog);
        groupBoxSlew->setObjectName(QString::fromUtf8("groupBoxSlew"));
        sizePolicy1.setHeightForWidth(groupBoxSlew->sizePolicy().hasHeightForWidth());
        groupBoxSlew->setSizePolicy(sizePolicy1);
        verticalLayout_2 = new QVBoxLayout(groupBoxSlew);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frameCoordinates = new QFrame(groupBoxSlew);
        frameCoordinates->setObjectName(QString::fromUtf8("frameCoordinates"));
        sizePolicy1.setHeightForWidth(frameCoordinates->sizePolicy().hasHeightForWidth());
        frameCoordinates->setSizePolicy(sizePolicy1);
        gridLayout = new QGridLayout(frameCoordinates);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        labelRA = new QLabel(frameCoordinates);
        labelRA->setObjectName(QString::fromUtf8("labelRA"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(labelRA->sizePolicy().hasHeightForWidth());
        labelRA->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(labelRA, 0, 0, 1, 1);

        labelDec = new QLabel(frameCoordinates);
        labelDec->setObjectName(QString::fromUtf8("labelDec"));
        sizePolicy3.setHeightForWidth(labelDec->sizePolicy().hasHeightForWidth());
        labelDec->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(labelDec, 1, 0, 1, 1);

        spinBoxDec = new AngleSpinBox(frameCoordinates);
        spinBoxDec->setObjectName(QString::fromUtf8("spinBoxDec"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(spinBoxDec->sizePolicy().hasHeightForWidth());
        spinBoxDec->setSizePolicy(sizePolicy4);

        gridLayout->addWidget(spinBoxDec, 1, 1, 1, 1);

        spinBoxRA = new AngleSpinBox(frameCoordinates);
        spinBoxRA->setObjectName(QString::fromUtf8("spinBoxRA"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(spinBoxRA->sizePolicy().hasHeightForWidth());
        spinBoxRA->setSizePolicy(sizePolicy5);

        gridLayout->addWidget(spinBoxRA, 0, 1, 1, 1);


        verticalLayout_2->addWidget(frameCoordinates);

        frameFormat = new QFrame(groupBoxSlew);
        frameFormat->setObjectName(QString::fromUtf8("frameFormat"));
        QSizePolicy sizePolicy6(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(frameFormat->sizePolicy().hasHeightForWidth());
        frameFormat->setSizePolicy(sizePolicy6);
        frameFormat->setFrameShape(QFrame::NoFrame);
        frameFormat->setFrameShadow(QFrame::Plain);
        horizontalLayout = new QHBoxLayout(frameFormat);
#ifndef Q_OS_MAC
        horizontalLayout->setSpacing(6);
#endif
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        radioButtonHMS = new QRadioButton(frameFormat);
        radioButtonHMS->setObjectName(QString::fromUtf8("radioButtonHMS"));

        horizontalLayout->addWidget(radioButtonHMS);

        radioButtonDMS = new QRadioButton(frameFormat);
        radioButtonDMS->setObjectName(QString::fromUtf8("radioButtonDMS"));

        horizontalLayout->addWidget(radioButtonDMS);

        radioButtonDecimal = new QRadioButton(frameFormat);
        radioButtonDecimal->setObjectName(QString::fromUtf8("radioButtonDecimal"));

        horizontalLayout->addWidget(radioButtonDecimal);


        verticalLayout_2->addWidget(frameFormat);

        frameTelescope = new QFrame(groupBoxSlew);
        frameTelescope->setObjectName(QString::fromUtf8("frameTelescope"));
        sizePolicy6.setHeightForWidth(frameTelescope->sizePolicy().hasHeightForWidth());
        frameTelescope->setSizePolicy(sizePolicy6);
        verticalLayout_3 = new QVBoxLayout(frameTelescope);
#ifndef Q_OS_MAC
        verticalLayout_3->setSpacing(6);
#endif
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        comboBoxTelescope = new QComboBox(frameTelescope);
        comboBoxTelescope->setObjectName(QString::fromUtf8("comboBoxTelescope"));
        QSizePolicy sizePolicy7(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(comboBoxTelescope->sizePolicy().hasHeightForWidth());
        comboBoxTelescope->setSizePolicy(sizePolicy7);
        comboBoxTelescope->setInsertPolicy(QComboBox::InsertAlphabetically);

        verticalLayout_3->addWidget(comboBoxTelescope);

        pushButtonSlew = new QPushButton(frameTelescope);
        pushButtonSlew->setObjectName(QString::fromUtf8("pushButtonSlew"));
        pushButtonSlew->setMinimumSize(QSize(50, 48));
        pushButtonSlew->setDefault(true);

        verticalLayout_3->addWidget(pushButtonSlew);


        verticalLayout_2->addWidget(frameTelescope);


        verticalLayout->addWidget(groupBoxSlew);

        pushButtonConfigure = new QPushButton(slewDialog);
        pushButtonConfigure->setObjectName(QString::fromUtf8("pushButtonConfigure"));
        sizePolicy5.setHeightForWidth(pushButtonConfigure->sizePolicy().hasHeightForWidth());
        pushButtonConfigure->setSizePolicy(sizePolicy5);
        pushButtonConfigure->setMinimumSize(QSize(0, 34));
        pushButtonConfigure->setStyleSheet(QString::fromUtf8("margin-left:10px;\n"
"margin-right:10px;\n"
"margin-bottom:10px;"));

        verticalLayout->addWidget(pushButtonConfigure);

#ifndef QT_NO_SHORTCUT
        labelRA->setBuddy(spinBoxRA);
        labelDec->setBuddy(spinBoxDec);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(spinBoxRA, spinBoxDec);
        QWidget::setTabOrder(spinBoxDec, radioButtonHMS);
        QWidget::setTabOrder(radioButtonHMS, radioButtonDMS);
        QWidget::setTabOrder(radioButtonDMS, radioButtonDecimal);
        QWidget::setTabOrder(radioButtonDecimal, comboBoxTelescope);
        QWidget::setTabOrder(comboBoxTelescope, pushButtonSlew);
        QWidget::setTabOrder(pushButtonSlew, pushButtonConfigure);

        retranslateUi(slewDialog);

        QMetaObject::connectSlotsByName(slewDialog);
    } // setupUi

    void retranslateUi(QWidget *slewDialog)
    {
        slewDialog->setWindowTitle(QApplication::translate("slewDialog", "Form", 0, QApplication::UnicodeUTF8));
        stelWindowTitle->setText(QApplication::translate("slewDialog", "Slew telescope to", 0, QApplication::UnicodeUTF8));
        closeStelWindow->setText(QString());
        labelNoTelescopes->setText(QApplication::translate("slewDialog", "There are no active devices.", 0, QApplication::UnicodeUTF8));
        groupBoxSlew->setTitle(QApplication::translate("slewDialog", "Slew telescope to coordinates", 0, QApplication::UnicodeUTF8));
        labelRA->setText(QApplication::translate("slewDialog", "&Right Ascension (J2000):", 0, QApplication::UnicodeUTF8));
        labelDec->setText(QApplication::translate("slewDialog", "De&clination (J2000):", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        radioButtonHMS->setToolTip(QApplication::translate("slewDialog", "Hours-minutes-seconds format", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        radioButtonHMS->setText(QApplication::translate("slewDialog", "&HMS", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        radioButtonDMS->setToolTip(QApplication::translate("slewDialog", "Degrees-minutes-seconds format", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        radioButtonDMS->setText(QApplication::translate("slewDialog", "&DMS", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        radioButtonDecimal->setToolTip(QApplication::translate("slewDialog", "Decimal degrees", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        radioButtonDecimal->setText(QApplication::translate("slewDialog", "D&ecimal", 0, QApplication::UnicodeUTF8));
        pushButtonSlew->setText(QApplication::translate("slewDialog", "&Slew", 0, QApplication::UnicodeUTF8));
        pushButtonConfigure->setText(QApplication::translate("slewDialog", "Configure &telescopes...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class slewDialog: public Ui_slewDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SLEWDIALOG_H
