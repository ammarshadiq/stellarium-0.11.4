/********************************************************************************
** Form generated from reading UI file 'defineTimeZone.ui'
**
** Created: Sun Oct 28 11:04:42 2012
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEFINETIMEZONE_H
#define UI_DEFINETIMEZONE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
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
#include <QtGui/QSpinBox>
#include <QtGui/QTimeEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "Dialog.hpp"

QT_BEGIN_NAMESPACE

class Ui_defineTimeZoneForm
{
public:
    QVBoxLayout *verticalLayout;
    BarFrame *TitleBar;
    QHBoxLayout *hboxLayout;
    QSpacerItem *leftSpacer;
    QLabel *stelWindowTitle;
    QSpacerItem *rightSpacer;
    QPushButton *closeStelWindow;
    QGroupBox *groupBoxTimeZone;
    QVBoxLayout *verticalLayoutTimeZone;
    QHBoxLayout *horizontalLayoutName;
    QLabel *labelName;
    QSpacerItem *horizontalSpacerName;
    QLineEdit *lineEditName;
    QHBoxLayout *horizontalLayoutOffset;
    QLabel *labelOffset;
    QSpacerItem *horizontalSpacer;
    QDoubleSpinBox *doubleSpinBoxOffset;
    QCheckBox *checkBoxDst;
    QFrame *frameDst;
    QVBoxLayout *verticalLayoutDst;
    QFrame *frame;
    QVBoxLayout *verticalLayoutDstMain;
    QHBoxLayout *horizontalLayoutNameDst;
    QLabel *labelNameDst;
    QSpacerItem *horizontalSpacerNameDst;
    QLineEdit *lineEditNameDst;
    QHBoxLayout *horizontalLayoutOffsetDst;
    QCheckBox *checkBoxOffsetDst;
    QSpacerItem *horizontalSpacerOffsetDst;
    QDoubleSpinBox *doubleSpinBoxOffsetDst;
    QGroupBox *groupBoxDstStart;
    QGridLayout *gridLayoutDstStart;
    QRadioButton *radioButtonDstStartDay;
    QComboBox *comboBoxDstStartMonth;
    QCheckBox *checkBoxDstStartTime;
    QTimeEdit *timeEditDstStart;
    QRadioButton *radioButtonDstStartDate;
    QFrame *frameDstStartDate;
    QHBoxLayout *horizontalLayout;
    QSpinBox *spinBoxDstStartDateDay;
    QComboBox *comboBoxDstStartDateMonth;
    QComboBox *comboBoxDstStartWeek;
    QComboBox *comboBoxDstStartDay;
    QGroupBox *groupBoxDstEnd;
    QGridLayout *gridLayout_4;
    QRadioButton *radioButtonDstEndDay;
    QComboBox *comboBoxDstEndMonth;
    QCheckBox *checkBoxDstEndTime;
    QTimeEdit *timeEditDstEnd;
    QRadioButton *radioButtonDstEndDate;
    QFrame *frameDstEndDate;
    QHBoxLayout *horizontalLayoutDstEndDate;
    QSpinBox *spinBoxDstEndDateDay;
    QComboBox *comboBoxDstEndDateMonth;
    QComboBox *comboBoxDstEndWeek;
    QComboBox *comboBoxDstEndDay;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButtonUseDefinition;

    void setupUi(QWidget *defineTimeZoneForm)
    {
        if (defineTimeZoneForm->objectName().isEmpty())
            defineTimeZoneForm->setObjectName(QString::fromUtf8("defineTimeZoneForm"));
        defineTimeZoneForm->resize(450, 474);
        verticalLayout = new QVBoxLayout(defineTimeZoneForm);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        TitleBar = new BarFrame(defineTimeZoneForm);
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

        groupBoxTimeZone = new QGroupBox(defineTimeZoneForm);
        groupBoxTimeZone->setObjectName(QString::fromUtf8("groupBoxTimeZone"));
        verticalLayoutTimeZone = new QVBoxLayout(groupBoxTimeZone);
        verticalLayoutTimeZone->setContentsMargins(0, 0, 0, 0);
        verticalLayoutTimeZone->setObjectName(QString::fromUtf8("verticalLayoutTimeZone"));
        horizontalLayoutName = new QHBoxLayout();
        horizontalLayoutName->setObjectName(QString::fromUtf8("horizontalLayoutName"));
        labelName = new QLabel(groupBoxTimeZone);
        labelName->setObjectName(QString::fromUtf8("labelName"));

        horizontalLayoutName->addWidget(labelName);

        horizontalSpacerName = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutName->addItem(horizontalSpacerName);

        lineEditName = new QLineEdit(groupBoxTimeZone);
        lineEditName->setObjectName(QString::fromUtf8("lineEditName"));

        horizontalLayoutName->addWidget(lineEditName);


        verticalLayoutTimeZone->addLayout(horizontalLayoutName);

        horizontalLayoutOffset = new QHBoxLayout();
        horizontalLayoutOffset->setObjectName(QString::fromUtf8("horizontalLayoutOffset"));
        labelOffset = new QLabel(groupBoxTimeZone);
        labelOffset->setObjectName(QString::fromUtf8("labelOffset"));

        horizontalLayoutOffset->addWidget(labelOffset);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutOffset->addItem(horizontalSpacer);

        doubleSpinBoxOffset = new QDoubleSpinBox(groupBoxTimeZone);
        doubleSpinBoxOffset->setObjectName(QString::fromUtf8("doubleSpinBoxOffset"));
        doubleSpinBoxOffset->setWrapping(true);
        doubleSpinBoxOffset->setMinimum(-24);
        doubleSpinBoxOffset->setMaximum(24);
        doubleSpinBoxOffset->setSingleStep(0.25);

        horizontalLayoutOffset->addWidget(doubleSpinBoxOffset);


        verticalLayoutTimeZone->addLayout(horizontalLayoutOffset);

        checkBoxDst = new QCheckBox(groupBoxTimeZone);
        checkBoxDst->setObjectName(QString::fromUtf8("checkBoxDst"));

        verticalLayoutTimeZone->addWidget(checkBoxDst);

        frameDst = new QFrame(groupBoxTimeZone);
        frameDst->setObjectName(QString::fromUtf8("frameDst"));
        verticalLayoutDst = new QVBoxLayout(frameDst);
        verticalLayoutDst->setSpacing(0);
        verticalLayoutDst->setContentsMargins(0, 0, 0, 0);
        verticalLayoutDst->setObjectName(QString::fromUtf8("verticalLayoutDst"));
        frame = new QFrame(frameDst);
        frame->setObjectName(QString::fromUtf8("frame"));
        verticalLayoutDstMain = new QVBoxLayout(frame);
        verticalLayoutDstMain->setContentsMargins(0, 0, 0, 0);
        verticalLayoutDstMain->setObjectName(QString::fromUtf8("verticalLayoutDstMain"));
        horizontalLayoutNameDst = new QHBoxLayout();
        horizontalLayoutNameDst->setObjectName(QString::fromUtf8("horizontalLayoutNameDst"));
        labelNameDst = new QLabel(frame);
        labelNameDst->setObjectName(QString::fromUtf8("labelNameDst"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelNameDst->sizePolicy().hasHeightForWidth());
        labelNameDst->setSizePolicy(sizePolicy1);

        horizontalLayoutNameDst->addWidget(labelNameDst);

        horizontalSpacerNameDst = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutNameDst->addItem(horizontalSpacerNameDst);

        lineEditNameDst = new QLineEdit(frame);
        lineEditNameDst->setObjectName(QString::fromUtf8("lineEditNameDst"));

        horizontalLayoutNameDst->addWidget(lineEditNameDst);


        verticalLayoutDstMain->addLayout(horizontalLayoutNameDst);

        horizontalLayoutOffsetDst = new QHBoxLayout();
        horizontalLayoutOffsetDst->setObjectName(QString::fromUtf8("horizontalLayoutOffsetDst"));
        checkBoxOffsetDst = new QCheckBox(frame);
        checkBoxOffsetDst->setObjectName(QString::fromUtf8("checkBoxOffsetDst"));

        horizontalLayoutOffsetDst->addWidget(checkBoxOffsetDst);

        horizontalSpacerOffsetDst = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutOffsetDst->addItem(horizontalSpacerOffsetDst);

        doubleSpinBoxOffsetDst = new QDoubleSpinBox(frame);
        doubleSpinBoxOffsetDst->setObjectName(QString::fromUtf8("doubleSpinBoxOffsetDst"));
        doubleSpinBoxOffsetDst->setWrapping(true);
        doubleSpinBoxOffsetDst->setMinimum(-24);
        doubleSpinBoxOffsetDst->setMaximum(24);
        doubleSpinBoxOffsetDst->setSingleStep(0.25);

        horizontalLayoutOffsetDst->addWidget(doubleSpinBoxOffsetDst);


        verticalLayoutDstMain->addLayout(horizontalLayoutOffsetDst);


        verticalLayoutDst->addWidget(frame);

        groupBoxDstStart = new QGroupBox(frameDst);
        groupBoxDstStart->setObjectName(QString::fromUtf8("groupBoxDstStart"));
        groupBoxDstStart->setCheckable(true);
        groupBoxDstStart->setChecked(false);
        gridLayoutDstStart = new QGridLayout(groupBoxDstStart);
        gridLayoutDstStart->setContentsMargins(0, 0, 0, 0);
        gridLayoutDstStart->setObjectName(QString::fromUtf8("gridLayoutDstStart"));
        radioButtonDstStartDay = new QRadioButton(groupBoxDstStart);
        radioButtonDstStartDay->setObjectName(QString::fromUtf8("radioButtonDstStartDay"));

        gridLayoutDstStart->addWidget(radioButtonDstStartDay, 1, 0, 1, 2);

        comboBoxDstStartMonth = new QComboBox(groupBoxDstStart);
        comboBoxDstStartMonth->setObjectName(QString::fromUtf8("comboBoxDstStartMonth"));

        gridLayoutDstStart->addWidget(comboBoxDstStartMonth, 1, 5, 1, 1);

        checkBoxDstStartTime = new QCheckBox(groupBoxDstStart);
        checkBoxDstStartTime->setObjectName(QString::fromUtf8("checkBoxDstStartTime"));

        gridLayoutDstStart->addWidget(checkBoxDstStartTime, 4, 0, 1, 2);

        timeEditDstStart = new QTimeEdit(groupBoxDstStart);
        timeEditDstStart->setObjectName(QString::fromUtf8("timeEditDstStart"));
        timeEditDstStart->setWrapping(true);
        timeEditDstStart->setTime(QTime(2, 0, 0));
        timeEditDstStart->setDisplayFormat(QString::fromUtf8("HH:mm:ss"));

        gridLayoutDstStart->addWidget(timeEditDstStart, 4, 2, 1, 4);

        radioButtonDstStartDate = new QRadioButton(groupBoxDstStart);
        radioButtonDstStartDate->setObjectName(QString::fromUtf8("radioButtonDstStartDate"));

        gridLayoutDstStart->addWidget(radioButtonDstStartDate, 2, 0, 1, 2);

        frameDstStartDate = new QFrame(groupBoxDstStart);
        frameDstStartDate->setObjectName(QString::fromUtf8("frameDstStartDate"));
        horizontalLayout = new QHBoxLayout(frameDstStartDate);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        spinBoxDstStartDateDay = new QSpinBox(frameDstStartDate);
        spinBoxDstStartDateDay->setObjectName(QString::fromUtf8("spinBoxDstStartDateDay"));

        horizontalLayout->addWidget(spinBoxDstStartDateDay);

        comboBoxDstStartDateMonth = new QComboBox(frameDstStartDate);
        comboBoxDstStartDateMonth->setObjectName(QString::fromUtf8("comboBoxDstStartDateMonth"));

        horizontalLayout->addWidget(comboBoxDstStartDateMonth);


        gridLayoutDstStart->addWidget(frameDstStartDate, 2, 2, 1, 4);

        comboBoxDstStartWeek = new QComboBox(groupBoxDstStart);
        comboBoxDstStartWeek->setObjectName(QString::fromUtf8("comboBoxDstStartWeek"));

        gridLayoutDstStart->addWidget(comboBoxDstStartWeek, 1, 3, 1, 2);

        comboBoxDstStartDay = new QComboBox(groupBoxDstStart);
        comboBoxDstStartDay->setObjectName(QString::fromUtf8("comboBoxDstStartDay"));

        gridLayoutDstStart->addWidget(comboBoxDstStartDay, 1, 2, 1, 1);


        verticalLayoutDst->addWidget(groupBoxDstStart);

        groupBoxDstEnd = new QGroupBox(frameDst);
        groupBoxDstEnd->setObjectName(QString::fromUtf8("groupBoxDstEnd"));
        groupBoxDstEnd->setCheckable(true);
        groupBoxDstEnd->setChecked(false);
        gridLayout_4 = new QGridLayout(groupBoxDstEnd);
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        radioButtonDstEndDay = new QRadioButton(groupBoxDstEnd);
        radioButtonDstEndDay->setObjectName(QString::fromUtf8("radioButtonDstEndDay"));

        gridLayout_4->addWidget(radioButtonDstEndDay, 1, 0, 1, 2);

        comboBoxDstEndMonth = new QComboBox(groupBoxDstEnd);
        comboBoxDstEndMonth->setObjectName(QString::fromUtf8("comboBoxDstEndMonth"));

        gridLayout_4->addWidget(comboBoxDstEndMonth, 1, 5, 1, 1);

        checkBoxDstEndTime = new QCheckBox(groupBoxDstEnd);
        checkBoxDstEndTime->setObjectName(QString::fromUtf8("checkBoxDstEndTime"));

        gridLayout_4->addWidget(checkBoxDstEndTime, 4, 0, 1, 2);

        timeEditDstEnd = new QTimeEdit(groupBoxDstEnd);
        timeEditDstEnd->setObjectName(QString::fromUtf8("timeEditDstEnd"));
        timeEditDstEnd->setWrapping(true);
        timeEditDstEnd->setTime(QTime(2, 0, 0));
        timeEditDstEnd->setDisplayFormat(QString::fromUtf8("HH:mm:ss"));

        gridLayout_4->addWidget(timeEditDstEnd, 4, 2, 1, 4);

        radioButtonDstEndDate = new QRadioButton(groupBoxDstEnd);
        radioButtonDstEndDate->setObjectName(QString::fromUtf8("radioButtonDstEndDate"));

        gridLayout_4->addWidget(radioButtonDstEndDate, 3, 0, 1, 2);

        frameDstEndDate = new QFrame(groupBoxDstEnd);
        frameDstEndDate->setObjectName(QString::fromUtf8("frameDstEndDate"));
        horizontalLayoutDstEndDate = new QHBoxLayout(frameDstEndDate);
        horizontalLayoutDstEndDate->setContentsMargins(0, 0, 0, 0);
        horizontalLayoutDstEndDate->setObjectName(QString::fromUtf8("horizontalLayoutDstEndDate"));
        spinBoxDstEndDateDay = new QSpinBox(frameDstEndDate);
        spinBoxDstEndDateDay->setObjectName(QString::fromUtf8("spinBoxDstEndDateDay"));

        horizontalLayoutDstEndDate->addWidget(spinBoxDstEndDateDay);

        comboBoxDstEndDateMonth = new QComboBox(frameDstEndDate);
        comboBoxDstEndDateMonth->setObjectName(QString::fromUtf8("comboBoxDstEndDateMonth"));

        horizontalLayoutDstEndDate->addWidget(comboBoxDstEndDateMonth);


        gridLayout_4->addWidget(frameDstEndDate, 3, 2, 1, 4);

        comboBoxDstEndWeek = new QComboBox(groupBoxDstEnd);
        comboBoxDstEndWeek->setObjectName(QString::fromUtf8("comboBoxDstEndWeek"));

        gridLayout_4->addWidget(comboBoxDstEndWeek, 1, 3, 1, 2);

        comboBoxDstEndDay = new QComboBox(groupBoxDstEnd);
        comboBoxDstEndDay->setObjectName(QString::fromUtf8("comboBoxDstEndDay"));

        gridLayout_4->addWidget(comboBoxDstEndDay, 1, 2, 1, 1);


        verticalLayoutDst->addWidget(groupBoxDstEnd);


        verticalLayoutTimeZone->addWidget(frameDst);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutTimeZone->addItem(verticalSpacer);

        pushButtonUseDefinition = new QPushButton(groupBoxTimeZone);
        pushButtonUseDefinition->setObjectName(QString::fromUtf8("pushButtonUseDefinition"));

        verticalLayoutTimeZone->addWidget(pushButtonUseDefinition);


        verticalLayout->addWidget(groupBoxTimeZone);

        QWidget::setTabOrder(lineEditName, doubleSpinBoxOffset);
        QWidget::setTabOrder(doubleSpinBoxOffset, checkBoxDst);
        QWidget::setTabOrder(checkBoxDst, lineEditNameDst);
        QWidget::setTabOrder(lineEditNameDst, checkBoxOffsetDst);
        QWidget::setTabOrder(checkBoxOffsetDst, doubleSpinBoxOffsetDst);
        QWidget::setTabOrder(doubleSpinBoxOffsetDst, radioButtonDstStartDay);
        QWidget::setTabOrder(radioButtonDstStartDay, groupBoxDstStart);
        QWidget::setTabOrder(groupBoxDstStart, comboBoxDstStartDay);
        QWidget::setTabOrder(comboBoxDstStartDay, comboBoxDstStartWeek);
        QWidget::setTabOrder(comboBoxDstStartWeek, comboBoxDstStartMonth);
        QWidget::setTabOrder(comboBoxDstStartMonth, radioButtonDstStartDate);
        QWidget::setTabOrder(radioButtonDstStartDate, spinBoxDstStartDateDay);
        QWidget::setTabOrder(spinBoxDstStartDateDay, comboBoxDstStartDateMonth);
        QWidget::setTabOrder(comboBoxDstStartDateMonth, checkBoxDstStartTime);
        QWidget::setTabOrder(checkBoxDstStartTime, timeEditDstStart);
        QWidget::setTabOrder(timeEditDstStart, groupBoxDstEnd);
        QWidget::setTabOrder(groupBoxDstEnd, radioButtonDstEndDay);
        QWidget::setTabOrder(radioButtonDstEndDay, comboBoxDstEndDay);
        QWidget::setTabOrder(comboBoxDstEndDay, comboBoxDstEndWeek);
        QWidget::setTabOrder(comboBoxDstEndWeek, comboBoxDstEndMonth);
        QWidget::setTabOrder(comboBoxDstEndMonth, radioButtonDstEndDate);
        QWidget::setTabOrder(radioButtonDstEndDate, spinBoxDstEndDateDay);
        QWidget::setTabOrder(spinBoxDstEndDateDay, comboBoxDstEndDateMonth);
        QWidget::setTabOrder(comboBoxDstEndDateMonth, checkBoxDstEndTime);
        QWidget::setTabOrder(checkBoxDstEndTime, timeEditDstEnd);
        QWidget::setTabOrder(timeEditDstEnd, pushButtonUseDefinition);

        retranslateUi(defineTimeZoneForm);
        QObject::connect(checkBoxDst, SIGNAL(toggled(bool)), frameDst, SLOT(setVisible(bool)));
        QObject::connect(checkBoxOffsetDst, SIGNAL(toggled(bool)), doubleSpinBoxOffsetDst, SLOT(setEnabled(bool)));
        QObject::connect(checkBoxDstEndTime, SIGNAL(toggled(bool)), timeEditDstEnd, SLOT(setEnabled(bool)));
        QObject::connect(checkBoxDstStartTime, SIGNAL(toggled(bool)), timeEditDstStart, SLOT(setEnabled(bool)));
        QObject::connect(groupBoxDstStart, SIGNAL(toggled(bool)), groupBoxDstEnd, SLOT(setChecked(bool)));
        QObject::connect(groupBoxDstEnd, SIGNAL(toggled(bool)), groupBoxDstStart, SLOT(setChecked(bool)));

        QMetaObject::connectSlotsByName(defineTimeZoneForm);
    } // setupUi

    void retranslateUi(QWidget *defineTimeZoneForm)
    {
        stelWindowTitle->setText(QApplication::translate("defineTimeZoneForm", "Define a time zone", 0, QApplication::UnicodeUTF8));
        closeStelWindow->setText(QString());
        groupBoxTimeZone->setTitle(QApplication::translate("defineTimeZoneForm", "Time zone", 0, QApplication::UnicodeUTF8));
        labelName->setText(QApplication::translate("defineTimeZoneForm", "Timezone name:", 0, QApplication::UnicodeUTF8));
        labelOffset->setText(QApplication::translate("defineTimeZoneForm", "Offset from UTC (hours):", 0, QApplication::UnicodeUTF8));
        checkBoxDst->setText(QApplication::translate("defineTimeZoneForm", "Daylight saving time (summer time)", 0, QApplication::UnicodeUTF8));
        labelNameDst->setText(QApplication::translate("defineTimeZoneForm", "DST timezone name:", 0, QApplication::UnicodeUTF8));
        checkBoxOffsetDst->setText(QApplication::translate("defineTimeZoneForm", "DST offset from UTC (hours):", 0, QApplication::UnicodeUTF8));
        groupBoxDstStart->setTitle(QApplication::translate("defineTimeZoneForm", "Daylight saving time start", 0, QApplication::UnicodeUTF8));
        radioButtonDstStartDay->setText(QApplication::translate("defineTimeZoneForm", "Day:", 0, QApplication::UnicodeUTF8));
        checkBoxDstStartTime->setText(QApplication::translate("defineTimeZoneForm", "Time of change:", 0, QApplication::UnicodeUTF8));
        radioButtonDstStartDate->setText(QApplication::translate("defineTimeZoneForm", "Date:", 0, QApplication::UnicodeUTF8));
        groupBoxDstEnd->setTitle(QApplication::translate("defineTimeZoneForm", "Daylight saving time end", 0, QApplication::UnicodeUTF8));
        radioButtonDstEndDay->setText(QApplication::translate("defineTimeZoneForm", "Day:", 0, QApplication::UnicodeUTF8));
        checkBoxDstEndTime->setText(QApplication::translate("defineTimeZoneForm", "Time of change:", 0, QApplication::UnicodeUTF8));
        radioButtonDstEndDate->setText(QApplication::translate("defineTimeZoneForm", "Date:", 0, QApplication::UnicodeUTF8));
        pushButtonUseDefinition->setText(QApplication::translate("defineTimeZoneForm", "Use this definition", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(defineTimeZoneForm);
    } // retranslateUi

};

namespace Ui {
    class defineTimeZoneForm: public Ui_defineTimeZoneForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEFINETIMEZONE_H
