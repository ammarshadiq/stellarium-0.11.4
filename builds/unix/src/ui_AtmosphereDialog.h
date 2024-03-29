/********************************************************************************
** Form generated from reading UI file 'AtmosphereDialog.ui'
**
** Created: Sat Apr 20 14:26:00 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ATMOSPHEREDIALOG_H
#define UI_ATMOSPHEREDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "Dialog.hpp"

QT_BEGIN_NAMESPACE

class Ui_AtmosphereDialogForm
{
public:
    QVBoxLayout *verticalLayout;
    BarFrame *TitleBar;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QLabel *stelWindowTitle;
    QSpacerItem *spacerItem1;
    QPushButton *closeStelWindow;
    QGroupBox *atmosphereGroupBox;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *pressureLayout;
    QLabel *pressureLabel;
    QDoubleSpinBox *pressureDoubleSpinBox;
    QHBoxLayout *temperatureLayout;
    QLabel *temperatureLabel;
    QDoubleSpinBox *temperatureDoubleSpinBox;
    QHBoxLayout *extinctionLayout;
    QLabel *extinctionLabel;
    QDoubleSpinBox *extinctionDoubleSpinBox;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *AtmosphereDialogForm)
    {
        if (AtmosphereDialogForm->objectName().isEmpty())
            AtmosphereDialogForm->setObjectName(QString::fromUtf8("AtmosphereDialogForm"));
        AtmosphereDialogForm->resize(330, 190);
        verticalLayout = new QVBoxLayout(AtmosphereDialogForm);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        TitleBar = new BarFrame(AtmosphereDialogForm);
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


        verticalLayout->addWidget(TitleBar);

        atmosphereGroupBox = new QGroupBox(AtmosphereDialogForm);
        atmosphereGroupBox->setObjectName(QString::fromUtf8("atmosphereGroupBox"));
        verticalLayout_3 = new QVBoxLayout(atmosphereGroupBox);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        pressureLayout = new QHBoxLayout();
        pressureLayout->setObjectName(QString::fromUtf8("pressureLayout"));
        pressureLabel = new QLabel(atmosphereGroupBox);
        pressureLabel->setObjectName(QString::fromUtf8("pressureLabel"));

        pressureLayout->addWidget(pressureLabel);

        pressureDoubleSpinBox = new QDoubleSpinBox(atmosphereGroupBox);
        pressureDoubleSpinBox->setObjectName(QString::fromUtf8("pressureDoubleSpinBox"));
        pressureDoubleSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pressureDoubleSpinBox->setMaximum(1500);
        pressureDoubleSpinBox->setValue(1013.25);

        pressureLayout->addWidget(pressureDoubleSpinBox);


        verticalLayout_3->addLayout(pressureLayout);

        temperatureLayout = new QHBoxLayout();
        temperatureLayout->setObjectName(QString::fromUtf8("temperatureLayout"));
        temperatureLabel = new QLabel(atmosphereGroupBox);
        temperatureLabel->setObjectName(QString::fromUtf8("temperatureLabel"));
        temperatureLabel->setInputMethodHints(Qt::ImhNone);
        temperatureLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        temperatureLayout->addWidget(temperatureLabel);

        temperatureDoubleSpinBox = new QDoubleSpinBox(atmosphereGroupBox);
        temperatureDoubleSpinBox->setObjectName(QString::fromUtf8("temperatureDoubleSpinBox"));
        temperatureDoubleSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        temperatureDoubleSpinBox->setDecimals(1);
        temperatureDoubleSpinBox->setMinimum(-100);
        temperatureDoubleSpinBox->setValue(10);

        temperatureLayout->addWidget(temperatureDoubleSpinBox);


        verticalLayout_3->addLayout(temperatureLayout);

        extinctionLayout = new QHBoxLayout();
        extinctionLayout->setObjectName(QString::fromUtf8("extinctionLayout"));
        extinctionLabel = new QLabel(atmosphereGroupBox);
        extinctionLabel->setObjectName(QString::fromUtf8("extinctionLabel"));

        extinctionLayout->addWidget(extinctionLabel);

        extinctionDoubleSpinBox = new QDoubleSpinBox(atmosphereGroupBox);
        extinctionDoubleSpinBox->setObjectName(QString::fromUtf8("extinctionDoubleSpinBox"));
        extinctionDoubleSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        extinctionDoubleSpinBox->setMaximum(3);
        extinctionDoubleSpinBox->setSingleStep(0.01);
        extinctionDoubleSpinBox->setValue(0.22);

        extinctionLayout->addWidget(extinctionDoubleSpinBox);


        verticalLayout_3->addLayout(extinctionLayout);

        verticalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);


        verticalLayout->addWidget(atmosphereGroupBox);


        retranslateUi(AtmosphereDialogForm);

        QMetaObject::connectSlotsByName(AtmosphereDialogForm);
    } // setupUi

    void retranslateUi(QWidget *AtmosphereDialogForm)
    {
        stelWindowTitle->setText(QApplication::translate("AtmosphereDialogForm", "Atmosphere Details", 0, QApplication::UnicodeUTF8));
        closeStelWindow->setText(QString());
        atmosphereGroupBox->setTitle(QApplication::translate("AtmosphereDialogForm", "Refraction Settings", 0, QApplication::UnicodeUTF8));
        pressureLabel->setText(QApplication::translate("AtmosphereDialogForm", "Pressure (mbar):", 0, QApplication::UnicodeUTF8));
        temperatureLabel->setText(QApplication::translate("AtmosphereDialogForm", "Temperature (C):", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        extinctionLabel->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        extinctionLabel->setWhatsThis(QApplication::translate("AtmosphereDialogForm", "Extinction is the loss of star brightness due to Earth's atmosphere. It is given in mag/airmass, where airmass is number of atmospheres light has to pass. (zenith: 1; horizon: about 40)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        extinctionLabel->setText(QApplication::translate("AtmosphereDialogForm", "Extinction Coefficient:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        extinctionDoubleSpinBox->setToolTip(QApplication::translate("AtmosphereDialogForm", "Use about 0.12 for superb mountaintops, 0.2 for good rural landscape, 0.35 for murky conditions.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        Q_UNUSED(AtmosphereDialogForm);
    } // retranslateUi

};

namespace Ui {
    class AtmosphereDialogForm: public Ui_AtmosphereDialogForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATMOSPHEREDIALOG_H
