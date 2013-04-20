/********************************************************************************
** Form generated from reading UI file 'dateTimeDialogGui.ui'
**
** Created: Sun Oct 28 11:01:50 2012
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATETIMEDIALOGGUI_H
#define UI_DATETIMEDIALOGGUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "Dialog.hpp"

QT_BEGIN_NAMESPACE

class Ui_dateTimeDialogForm
{
public:
    QVBoxLayout *vboxLayout;
    BarFrame *TitleBar;
    QHBoxLayout *hboxLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *stelWindowTitle;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *closeStelWindow;
    QFrame *dateTimeBox;
    QHBoxLayout *horizontalLayout_3;
    QFrame *dateFrame;
    QHBoxLayout *horizontalLayout;
    QSpinBox *spinner_year;
    QLabel *label;
    QSpinBox *spinner_month;
    QLabel *label_2;
    QSpinBox *spinner_day;
    QFrame *timeFrame;
    QHBoxLayout *horizontalLayout_2;
    QSpinBox *spinner_hour;
    QLabel *label_3;
    QSpinBox *spinner_minute;
    QLabel *label_4;
    QSpinBox *spinner_second;

    void setupUi(QWidget *dateTimeDialogForm)
    {
        if (dateTimeDialogForm->objectName().isEmpty())
            dateTimeDialogForm->setObjectName(QString::fromUtf8("dateTimeDialogForm"));
        dateTimeDialogForm->resize(396, 86);
        dateTimeDialogForm->setStyleSheet(QString::fromUtf8(""));
        vboxLayout = new QVBoxLayout(dateTimeDialogForm);
        vboxLayout->setSpacing(1);
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        TitleBar = new BarFrame(dateTimeDialogForm);
        TitleBar->setObjectName(QString::fromUtf8("TitleBar"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TitleBar->sizePolicy().hasHeightForWidth());
        TitleBar->setSizePolicy(sizePolicy);
        TitleBar->setMinimumSize(QSize(16, 25));
        TitleBar->setMaximumSize(QSize(16777215, 25));
        TitleBar->setFrameShape(QFrame::StyledPanel);
        hboxLayout = new QHBoxLayout(TitleBar);
        hboxLayout->setSpacing(0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 4, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(horizontalSpacer);

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
        QFont font;
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        stelWindowTitle->setFont(font);

        hboxLayout->addWidget(stelWindowTitle);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(horizontalSpacer_2);

        closeStelWindow = new QPushButton(TitleBar);
        closeStelWindow->setObjectName(QString::fromUtf8("closeStelWindow"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(closeStelWindow->sizePolicy().hasHeightForWidth());
        closeStelWindow->setSizePolicy(sizePolicy1);
        closeStelWindow->setMinimumSize(QSize(16, 16));
        closeStelWindow->setMaximumSize(QSize(16, 16));
        closeStelWindow->setFocusPolicy(Qt::NoFocus);

        hboxLayout->addWidget(closeStelWindow);


        vboxLayout->addWidget(TitleBar);

        dateTimeBox = new QFrame(dateTimeDialogForm);
        dateTimeBox->setObjectName(QString::fromUtf8("dateTimeBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(1);
        sizePolicy2.setHeightForWidth(dateTimeBox->sizePolicy().hasHeightForWidth());
        dateTimeBox->setSizePolicy(sizePolicy2);
        dateTimeBox->setFrameShape(QFrame::StyledPanel);
        horizontalLayout_3 = new QHBoxLayout(dateTimeBox);
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        dateFrame = new QFrame(dateTimeBox);
        dateFrame->setObjectName(QString::fromUtf8("dateFrame"));
        dateFrame->setFrameShape(QFrame::StyledPanel);
        horizontalLayout = new QHBoxLayout(dateFrame);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        spinner_year = new QSpinBox(dateFrame);
        spinner_year->setObjectName(QString::fromUtf8("spinner_year"));
        sizePolicy1.setHeightForWidth(spinner_year->sizePolicy().hasHeightForWidth());
        spinner_year->setSizePolicy(sizePolicy1);
        spinner_year->setFocusPolicy(Qt::StrongFocus);
        spinner_year->setContextMenuPolicy(Qt::NoContextMenu);
        spinner_year->setWrapping(false);
        spinner_year->setFrame(true);
        spinner_year->setAlignment(Qt::AlignCenter);
        spinner_year->setMinimum(-1000000);
        spinner_year->setMaximum(1000000);

        horizontalLayout->addWidget(spinner_year);

        label = new QLabel(dateFrame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setEnabled(true);
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy3);
        label->setMaximumSize(QSize(10, 16777215));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        spinner_month = new QSpinBox(dateFrame);
        spinner_month->setObjectName(QString::fromUtf8("spinner_month"));
        sizePolicy1.setHeightForWidth(spinner_month->sizePolicy().hasHeightForWidth());
        spinner_month->setSizePolicy(sizePolicy1);
        spinner_month->setFocusPolicy(Qt::StrongFocus);
        spinner_month->setContextMenuPolicy(Qt::NoContextMenu);
        spinner_month->setFrame(true);
        spinner_month->setAlignment(Qt::AlignCenter);
        spinner_month->setMinimum(0);
        spinner_month->setMaximum(13);

        horizontalLayout->addWidget(spinner_month);

        label_2 = new QLabel(dateFrame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setMaximumSize(QSize(10, 16777215));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_2);

        spinner_day = new QSpinBox(dateFrame);
        spinner_day->setObjectName(QString::fromUtf8("spinner_day"));
        sizePolicy1.setHeightForWidth(spinner_day->sizePolicy().hasHeightForWidth());
        spinner_day->setSizePolicy(sizePolicy1);
        spinner_day->setFocusPolicy(Qt::StrongFocus);
        spinner_day->setContextMenuPolicy(Qt::NoContextMenu);
        spinner_day->setFrame(true);
        spinner_day->setAlignment(Qt::AlignCenter);
        spinner_day->setMinimum(0);
        spinner_day->setMaximum(32);

        horizontalLayout->addWidget(spinner_day);


        horizontalLayout_3->addWidget(dateFrame);

        timeFrame = new QFrame(dateTimeBox);
        timeFrame->setObjectName(QString::fromUtf8("timeFrame"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(timeFrame->sizePolicy().hasHeightForWidth());
        timeFrame->setSizePolicy(sizePolicy4);
        QFont font1;
        timeFrame->setFont(font1);
        timeFrame->setFrameShape(QFrame::StyledPanel);
        horizontalLayout_2 = new QHBoxLayout(timeFrame);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        spinner_hour = new QSpinBox(timeFrame);
        spinner_hour->setObjectName(QString::fromUtf8("spinner_hour"));
        sizePolicy1.setHeightForWidth(spinner_hour->sizePolicy().hasHeightForWidth());
        spinner_hour->setSizePolicy(sizePolicy1);
        spinner_hour->setFocusPolicy(Qt::StrongFocus);
        spinner_hour->setContextMenuPolicy(Qt::NoContextMenu);
        spinner_hour->setAlignment(Qt::AlignCenter);
        spinner_hour->setMinimum(-1);
        spinner_hour->setMaximum(24);

        horizontalLayout_2->addWidget(spinner_hour);

        label_3 = new QLabel(timeFrame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setMaximumSize(QSize(10, 16777215));
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_3);

        spinner_minute = new QSpinBox(timeFrame);
        spinner_minute->setObjectName(QString::fromUtf8("spinner_minute"));
        sizePolicy1.setHeightForWidth(spinner_minute->sizePolicy().hasHeightForWidth());
        spinner_minute->setSizePolicy(sizePolicy1);
        spinner_minute->setFocusPolicy(Qt::StrongFocus);
        spinner_minute->setContextMenuPolicy(Qt::NoContextMenu);
        spinner_minute->setAlignment(Qt::AlignCenter);
        spinner_minute->setMinimum(-1);
        spinner_minute->setMaximum(60);

        horizontalLayout_2->addWidget(spinner_minute);

        label_4 = new QLabel(timeFrame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setMaximumSize(QSize(10, 16777215));
        label_4->setAutoFillBackground(false);
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_4);

        spinner_second = new QSpinBox(timeFrame);
        spinner_second->setObjectName(QString::fromUtf8("spinner_second"));
        sizePolicy1.setHeightForWidth(spinner_second->sizePolicy().hasHeightForWidth());
        spinner_second->setSizePolicy(sizePolicy1);
        spinner_second->setFocusPolicy(Qt::StrongFocus);
        spinner_second->setContextMenuPolicy(Qt::NoContextMenu);
        spinner_second->setFrame(true);
        spinner_second->setAlignment(Qt::AlignCenter);
        spinner_second->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        spinner_second->setAccelerated(true);
        spinner_second->setMinimum(-1);
        spinner_second->setMaximum(60);

        horizontalLayout_2->addWidget(spinner_second);


        horizontalLayout_3->addWidget(timeFrame);


        vboxLayout->addWidget(dateTimeBox);


        retranslateUi(dateTimeDialogForm);

        QMetaObject::connectSlotsByName(dateTimeDialogForm);
    } // setupUi

    void retranslateUi(QWidget *dateTimeDialogForm)
    {
        stelWindowTitle->setText(QApplication::translate("dateTimeDialogForm", "Date and Time", 0, QApplication::UnicodeUTF8));
        closeStelWindow->setText(QString());
        label->setText(QApplication::translate("dateTimeDialogForm", "/", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("dateTimeDialogForm", "/", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("dateTimeDialogForm", ":", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("dateTimeDialogForm", ":", 0, QApplication::UnicodeUTF8));
        spinner_second->setPrefix(QString());
        Q_UNUSED(dateTimeDialogForm);
    } // retranslateUi

};

namespace Ui {
    class dateTimeDialogForm: public Ui_dateTimeDialogForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATETIMEDIALOGGUI_H
