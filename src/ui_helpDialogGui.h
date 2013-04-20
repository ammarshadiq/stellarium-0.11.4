/********************************************************************************
** Form generated from reading UI file 'helpDialogGui.ui'
**
** Created: Sun Oct 28 11:01:50 2012
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELPDIALOGGUI_H
#define UI_HELPDIALOGGUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStackedWidget>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "Dialog.hpp"

QT_BEGIN_NAMESPACE

class Ui_helpDialogForm
{
public:
    QVBoxLayout *verticalLayout_3;
    BarFrame *TitleBar;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QLabel *stelWindowTitle;
    QSpacerItem *spacerItem1;
    QPushButton *closeStelWindow;
    QFrame *viewContent;
    QVBoxLayout *verticalLayout_4;
    QListWidget *stackListWidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_5;
    QTextBrowser *helpBrowser;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_2;
    QTextBrowser *aboutBrowser;
    QWidget *page_3;
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QLabel *logPathLabel;
    QSpacerItem *horizontalSpacer;
    QPushButton *refreshButton;
    QTextBrowser *logBrowser;

    void setupUi(QWidget *helpDialogForm)
    {
        if (helpDialogForm->objectName().isEmpty())
            helpDialogForm->setObjectName(QString::fromUtf8("helpDialogForm"));
        helpDialogForm->resize(383, 458);
        helpDialogForm->setMinimumSize(QSize(250, 250));
        helpDialogForm->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_3 = new QVBoxLayout(helpDialogForm);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        TitleBar = new BarFrame(helpDialogForm);
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

        hboxLayout->addWidget(stelWindowTitle);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);

        closeStelWindow = new QPushButton(TitleBar);
        closeStelWindow->setObjectName(QString::fromUtf8("closeStelWindow"));
        closeStelWindow->setMinimumSize(QSize(16, 16));
        closeStelWindow->setMaximumSize(QSize(16, 16));
        closeStelWindow->setFocusPolicy(Qt::NoFocus);

        hboxLayout->addWidget(closeStelWindow);


        verticalLayout_3->addWidget(TitleBar);

        viewContent = new QFrame(helpDialogForm);
        viewContent->setObjectName(QString::fromUtf8("viewContent"));
        viewContent->setFrameShape(QFrame::StyledPanel);
        viewContent->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(viewContent);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        stackListWidget = new QListWidget(viewContent);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/graphicGui/tabicon-help.png"), QSize(), QIcon::Normal, QIcon::On);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(stackListWidget);
        __qlistwidgetitem->setIcon(icon);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/graphicGui/tabicon-info.png"), QSize(), QIcon::Normal, QIcon::On);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(stackListWidget);
        __qlistwidgetitem1->setIcon(icon1);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/graphicGui/tabicon-logs.png"), QSize(), QIcon::Normal, QIcon::On);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(stackListWidget);
        __qlistwidgetitem2->setIcon(icon2);
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

        verticalLayout_4->addWidget(stackListWidget);

        stackedWidget = new QStackedWidget(viewContent);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        verticalLayout_5 = new QVBoxLayout(page);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        helpBrowser = new QTextBrowser(page);
        helpBrowser->setObjectName(QString::fromUtf8("helpBrowser"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(helpBrowser->sizePolicy().hasHeightForWidth());
        helpBrowser->setSizePolicy(sizePolicy);
        QPalette palette;
        QBrush brush(QColor(3, 3, 3, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        helpBrowser->setPalette(palette);
        helpBrowser->setMouseTracking(true);
        helpBrowser->setContextMenuPolicy(Qt::DefaultContextMenu);
        helpBrowser->setAcceptDrops(false);
        helpBrowser->setStyleSheet(QString::fromUtf8(""));
        helpBrowser->setOpenExternalLinks(true);

        verticalLayout_5->addWidget(helpBrowser);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        verticalLayout_2 = new QVBoxLayout(page_2);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        aboutBrowser = new QTextBrowser(page_2);
        aboutBrowser->setObjectName(QString::fromUtf8("aboutBrowser"));
        aboutBrowser->setOpenExternalLinks(true);

        verticalLayout_2->addWidget(aboutBrowser);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        verticalLayout = new QVBoxLayout(page_3);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(page_3);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        logPathLabel = new QLabel(frame);
        logPathLabel->setObjectName(QString::fromUtf8("logPathLabel"));
        logPathLabel->setText(QString::fromUtf8("xxx"));
        logPathLabel->setScaledContents(false);
        logPathLabel->setWordWrap(true);

        horizontalLayout->addWidget(logPathLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        refreshButton = new QPushButton(frame);
        refreshButton->setObjectName(QString::fromUtf8("refreshButton"));

        horizontalLayout->addWidget(refreshButton);


        verticalLayout->addWidget(frame);

        logBrowser = new QTextBrowser(page_3);
        logBrowser->setObjectName(QString::fromUtf8("logBrowser"));
        QFont font;
        font.setFamily(QString::fromUtf8("Lucida Console"));
        font.setKerning(false);
        logBrowser->setFont(font);
        logBrowser->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        logBrowser->setLineWrapMode(QTextEdit::WidgetWidth);
        logBrowser->setAcceptRichText(false);
        logBrowser->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        logBrowser->setOpenLinks(false);

        verticalLayout->addWidget(logBrowser);

        stackedWidget->addWidget(page_3);

        verticalLayout_4->addWidget(stackedWidget);


        verticalLayout_3->addWidget(viewContent);


        retranslateUi(helpDialogForm);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(helpDialogForm);
    } // setupUi

    void retranslateUi(QWidget *helpDialogForm)
    {
        stelWindowTitle->setText(QApplication::translate("helpDialogForm", "Help", 0, QApplication::UnicodeUTF8));
        closeStelWindow->setText(QString());

        const bool __sortingEnabled = stackListWidget->isSortingEnabled();
        stackListWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = stackListWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("helpDialogForm", "Help", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem1 = stackListWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("helpDialogForm", "About", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem2 = stackListWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("helpDialogForm", "Log", 0, QApplication::UnicodeUTF8));
        stackListWidget->setSortingEnabled(__sortingEnabled);

        refreshButton->setText(QApplication::translate("helpDialogForm", "Refresh", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(helpDialogForm);
    } // retranslateUi

};

namespace Ui {
    class helpDialogForm: public Ui_helpDialogForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELPDIALOGGUI_H
