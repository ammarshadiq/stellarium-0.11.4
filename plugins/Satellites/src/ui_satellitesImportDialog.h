/********************************************************************************
** Form generated from reading UI file 'satellitesImportDialog.ui'
**
** Created: Sun Oct 28 11:03:07 2012
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SATELLITESIMPORTDIALOG_H
#define UI_SATELLITESIMPORTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStackedWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "Dialog.hpp"

QT_BEGIN_NAMESPACE

class Ui_satellitesImportDialog
{
public:
    QVBoxLayout *verticalLayoutMain;
    BarFrame *TitleBar;
    QHBoxLayout *_2;
    QSpacerItem *leftSpacer;
    QLabel *stelWindowTitle;
    QSpacerItem *rightSpacer;
    QPushButton *closeStelWindow;
    QStackedWidget *stackedWidget;
    QWidget *pageStart;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBoxWorking;
    QVBoxLayout *verticalLayout_3;
    QLabel *labelMessage;
    QPushButton *pushButtonGetData;
    QPushButton *pushButtonAbort;
    QWidget *pageResults;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBoxResults;
    QGridLayout *gridLayout;
    QPushButton *pushButtonMarkAll;
    QPushButton *pushButtonMarkNone;
    QPushButton *pushButtonDiscard;
    QPushButton *pushButtonAdd;
    QListView *listView;
    QLineEdit *lineEditSearch;

    void setupUi(QWidget *satellitesImportDialog)
    {
        if (satellitesImportDialog->objectName().isEmpty())
            satellitesImportDialog->setObjectName(QString::fromUtf8("satellitesImportDialog"));
        satellitesImportDialog->resize(398, 298);
        verticalLayoutMain = new QVBoxLayout(satellitesImportDialog);
        verticalLayoutMain->setSpacing(0);
        verticalLayoutMain->setContentsMargins(0, 0, 0, 0);
        verticalLayoutMain->setObjectName(QString::fromUtf8("verticalLayoutMain"));
        TitleBar = new BarFrame(satellitesImportDialog);
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
        _2 = new QHBoxLayout(TitleBar);
        _2->setSpacing(6);
        _2->setObjectName(QString::fromUtf8("_2"));
        _2->setContentsMargins(0, 0, 4, 0);
        leftSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _2->addItem(leftSpacer);

        stelWindowTitle = new QLabel(TitleBar);
        stelWindowTitle->setObjectName(QString::fromUtf8("stelWindowTitle"));

        _2->addWidget(stelWindowTitle);

        rightSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _2->addItem(rightSpacer);

        closeStelWindow = new QPushButton(TitleBar);
        closeStelWindow->setObjectName(QString::fromUtf8("closeStelWindow"));
        closeStelWindow->setMinimumSize(QSize(16, 16));
        closeStelWindow->setMaximumSize(QSize(16, 16));
        closeStelWindow->setFocusPolicy(Qt::NoFocus);

        _2->addWidget(closeStelWindow);


        verticalLayoutMain->addWidget(TitleBar);

        stackedWidget = new QStackedWidget(satellitesImportDialog);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        pageStart = new QWidget();
        pageStart->setObjectName(QString::fromUtf8("pageStart"));
        verticalLayout = new QVBoxLayout(pageStart);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBoxWorking = new QGroupBox(pageStart);
        groupBoxWorking->setObjectName(QString::fromUtf8("groupBoxWorking"));
        verticalLayout_3 = new QVBoxLayout(groupBoxWorking);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        labelMessage = new QLabel(groupBoxWorking);
        labelMessage->setObjectName(QString::fromUtf8("labelMessage"));
        labelMessage->setAlignment(Qt::AlignCenter);
        labelMessage->setWordWrap(true);

        verticalLayout_3->addWidget(labelMessage);

        pushButtonGetData = new QPushButton(groupBoxWorking);
        pushButtonGetData->setObjectName(QString::fromUtf8("pushButtonGetData"));

        verticalLayout_3->addWidget(pushButtonGetData);

        pushButtonAbort = new QPushButton(groupBoxWorking);
        pushButtonAbort->setObjectName(QString::fromUtf8("pushButtonAbort"));

        verticalLayout_3->addWidget(pushButtonAbort);


        verticalLayout->addWidget(groupBoxWorking);

        stackedWidget->addWidget(pageStart);
        pageResults = new QWidget();
        pageResults->setObjectName(QString::fromUtf8("pageResults"));
        verticalLayout_2 = new QVBoxLayout(pageResults);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBoxResults = new QGroupBox(pageResults);
        groupBoxResults->setObjectName(QString::fromUtf8("groupBoxResults"));
        gridLayout = new QGridLayout(groupBoxResults);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButtonMarkAll = new QPushButton(groupBoxResults);
        pushButtonMarkAll->setObjectName(QString::fromUtf8("pushButtonMarkAll"));

        gridLayout->addWidget(pushButtonMarkAll, 2, 0, 1, 1);

        pushButtonMarkNone = new QPushButton(groupBoxResults);
        pushButtonMarkNone->setObjectName(QString::fromUtf8("pushButtonMarkNone"));

        gridLayout->addWidget(pushButtonMarkNone, 2, 1, 1, 1);

        pushButtonDiscard = new QPushButton(groupBoxResults);
        pushButtonDiscard->setObjectName(QString::fromUtf8("pushButtonDiscard"));

        gridLayout->addWidget(pushButtonDiscard, 2, 2, 1, 1);

        pushButtonAdd = new QPushButton(groupBoxResults);
        pushButtonAdd->setObjectName(QString::fromUtf8("pushButtonAdd"));

        gridLayout->addWidget(pushButtonAdd, 3, 0, 1, 3);

        listView = new QListView(groupBoxResults);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setUniformItemSizes(true);

        gridLayout->addWidget(listView, 1, 0, 1, 3);

        lineEditSearch = new QLineEdit(groupBoxResults);
        lineEditSearch->setObjectName(QString::fromUtf8("lineEditSearch"));

        gridLayout->addWidget(lineEditSearch, 0, 0, 1, 3);


        verticalLayout_2->addWidget(groupBoxResults);

        stackedWidget->addWidget(pageResults);

        verticalLayoutMain->addWidget(stackedWidget);

        QWidget::setTabOrder(pushButtonGetData, pushButtonAbort);
        QWidget::setTabOrder(pushButtonAbort, lineEditSearch);
        QWidget::setTabOrder(lineEditSearch, listView);
        QWidget::setTabOrder(listView, pushButtonMarkAll);
        QWidget::setTabOrder(pushButtonMarkAll, pushButtonMarkNone);
        QWidget::setTabOrder(pushButtonMarkNone, pushButtonDiscard);
        QWidget::setTabOrder(pushButtonDiscard, pushButtonAdd);

        retranslateUi(satellitesImportDialog);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(satellitesImportDialog);
    } // setupUi

    void retranslateUi(QWidget *satellitesImportDialog)
    {
        stelWindowTitle->setText(QApplication::translate("satellitesImportDialog", "More Satellites", 0, QApplication::UnicodeUTF8));
        closeStelWindow->setText(QString());
        pushButtonGetData->setText(QApplication::translate("satellitesImportDialog", "Get data from update sources", 0, QApplication::UnicodeUTF8));
        pushButtonAbort->setText(QApplication::translate("satellitesImportDialog", "Abort download", 0, QApplication::UnicodeUTF8));
        groupBoxResults->setTitle(QApplication::translate("satellitesImportDialog", "New satellites", 0, QApplication::UnicodeUTF8));
        pushButtonMarkAll->setText(QApplication::translate("satellitesImportDialog", "Mark all", 0, QApplication::UnicodeUTF8));
        pushButtonMarkNone->setText(QApplication::translate("satellitesImportDialog", "Mark none", 0, QApplication::UnicodeUTF8));
        pushButtonDiscard->setText(QApplication::translate("satellitesImportDialog", "Discard", 0, QApplication::UnicodeUTF8));
        pushButtonAdd->setText(QApplication::translate("satellitesImportDialog", "Add", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(satellitesImportDialog);
    } // retranslateUi

};

namespace Ui {
    class satellitesImportDialog: public Ui_satellitesImportDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SATELLITESIMPORTDIALOG_H
