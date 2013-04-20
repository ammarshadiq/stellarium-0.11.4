/********************************************************************************
** Form generated from reading UI file 'scriptConsole.ui'
**
** Created: Sun Oct 28 11:01:50 2012
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCRIPTCONSOLE_H
#define UI_SCRIPTCONSOLE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QTextBrowser>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "Dialog.hpp"

QT_BEGIN_NAMESPACE

class Ui_scriptConsoleForm
{
public:
    QVBoxLayout *verticalLayout_2;
    BarFrame *TitleBar;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QLabel *stelWindowTitle;
    QSpacerItem *spacerItem1;
    QPushButton *closeStelWindow;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *loadButton;
    QPushButton *saveButton;
    QPushButton *clearButton;
    QPushButton *preprocessSSCButton;
    QPushButton *preprocessSTSButton;
    QSpacerItem *horizontalSpacer;
    QComboBox *quickrunCombo;
    QPushButton *runButton;
    QPushButton *stopButton;
    QTabWidget *tabs;
    QWidget *scriptTab;
    QVBoxLayout *verticalLayout_3;
    QTextEdit *scriptEdit;
    QWidget *outputTab;
    QVBoxLayout *verticalLayout_4;
    QTextBrowser *outputBrowser;
    QHBoxLayout *horizontalLayout_2;
    QLabel *rowColumnLabel;
    QLabel *label;
    QLineEdit *includeEdit;
    QPushButton *includeBrowseButton;
    ResizeFrame *frame_4;

    void setupUi(QWidget *scriptConsoleForm)
    {
        if (scriptConsoleForm->objectName().isEmpty())
            scriptConsoleForm->setObjectName(QString::fromUtf8("scriptConsoleForm"));
        scriptConsoleForm->resize(680, 394);
        scriptConsoleForm->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_2 = new QVBoxLayout(scriptConsoleForm);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        TitleBar = new BarFrame(scriptConsoleForm);
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
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(16);
        sizePolicy.setVerticalStretch(16);
        sizePolicy.setHeightForWidth(closeStelWindow->sizePolicy().hasHeightForWidth());
        closeStelWindow->setSizePolicy(sizePolicy);
        closeStelWindow->setMinimumSize(QSize(16, 16));
        closeStelWindow->setMaximumSize(QSize(16, 16));
        closeStelWindow->setFocusPolicy(Qt::NoFocus);

        hboxLayout->addWidget(closeStelWindow);


        verticalLayout_2->addWidget(TitleBar);

        frame = new QFrame(scriptConsoleForm);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setFrameShape(QFrame::StyledPanel);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        loadButton = new QPushButton(frame);
        loadButton->setObjectName(QString::fromUtf8("loadButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(loadButton->sizePolicy().hasHeightForWidth());
        loadButton->setSizePolicy(sizePolicy2);
        loadButton->setMaximumSize(QSize(28, 28));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/graphicGui/folder.png"), QSize(), QIcon::Normal, QIcon::Off);
        loadButton->setIcon(icon);
        loadButton->setShortcut(QString::fromUtf8("Ctrl+O"));

        horizontalLayout->addWidget(loadButton);

        saveButton = new QPushButton(frame);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        sizePolicy2.setHeightForWidth(saveButton->sizePolicy().hasHeightForWidth());
        saveButton->setSizePolicy(sizePolicy2);
        saveButton->setMaximumSize(QSize(28, 28));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/graphicGui/filesave.png"), QSize(), QIcon::Normal, QIcon::Off);
        saveButton->setIcon(icon1);
        saveButton->setShortcut(QString::fromUtf8("Ctrl+S"));

        horizontalLayout->addWidget(saveButton);

        clearButton = new QPushButton(frame);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));
        sizePolicy2.setHeightForWidth(clearButton->sizePolicy().hasHeightForWidth());
        clearButton->setSizePolicy(sizePolicy2);
        clearButton->setMaximumSize(QSize(28, 28));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/graphicGui/closeButton.png"), QSize(), QIcon::Normal, QIcon::Off);
        clearButton->setIcon(icon2);

        horizontalLayout->addWidget(clearButton);

        preprocessSSCButton = new QPushButton(frame);
        preprocessSSCButton->setObjectName(QString::fromUtf8("preprocessSSCButton"));
        preprocessSSCButton->setMaximumSize(QSize(16777215, 28));
        preprocessSSCButton->setText(QString::fromUtf8("SSC"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/graphicGui/btFlipVertical-off.png"), QSize(), QIcon::Normal, QIcon::Off);
        preprocessSSCButton->setIcon(icon3);

        horizontalLayout->addWidget(preprocessSSCButton);

        preprocessSTSButton = new QPushButton(frame);
        preprocessSTSButton->setObjectName(QString::fromUtf8("preprocessSTSButton"));
        preprocessSTSButton->setMaximumSize(QSize(16777215, 28));
        preprocessSTSButton->setText(QString::fromUtf8("STS"));
        preprocessSTSButton->setIcon(icon3);

        horizontalLayout->addWidget(preprocessSTSButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        quickrunCombo = new QComboBox(frame);
        quickrunCombo->setObjectName(QString::fromUtf8("quickrunCombo"));

        horizontalLayout->addWidget(quickrunCombo);

        runButton = new QPushButton(frame);
        runButton->setObjectName(QString::fromUtf8("runButton"));
        sizePolicy2.setHeightForWidth(runButton->sizePolicy().hasHeightForWidth());
        runButton->setSizePolicy(sizePolicy2);
        runButton->setMaximumSize(QSize(28, 28));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/graphicGui/btScriptRun-off.png"), QSize(), QIcon::Normal, QIcon::Off);
        runButton->setIcon(icon4);
        runButton->setShortcut(QString::fromUtf8("Ctrl+Return"));

        horizontalLayout->addWidget(runButton);

        stopButton = new QPushButton(frame);
        stopButton->setObjectName(QString::fromUtf8("stopButton"));
        stopButton->setEnabled(false);
        sizePolicy2.setHeightForWidth(stopButton->sizePolicy().hasHeightForWidth());
        stopButton->setSizePolicy(sizePolicy2);
        stopButton->setMaximumSize(QSize(28, 28));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/graphicGui/btScriptStop-off.png"), QSize(), QIcon::Normal, QIcon::Off);
        stopButton->setIcon(icon5);
        stopButton->setShortcut(QString::fromUtf8("Ctrl+C"));

        horizontalLayout->addWidget(stopButton);


        verticalLayout->addLayout(horizontalLayout);

        tabs = new QTabWidget(frame);
        tabs->setObjectName(QString::fromUtf8("tabs"));
        tabs->setStyleSheet(QString::fromUtf8("QTabBar::tab {\n"
"	min-height: 28px;\n"
"}"));
        tabs->setTabPosition(QTabWidget::North);
        scriptTab = new QWidget();
        scriptTab->setObjectName(QString::fromUtf8("scriptTab"));
        verticalLayout_3 = new QVBoxLayout(scriptTab);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        scriptEdit = new QTextEdit(scriptTab);
        scriptEdit->setObjectName(QString::fromUtf8("scriptEdit"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("DejaVu Sans Mono"));
        font1.setPointSize(8);
        scriptEdit->setFont(font1);
        scriptEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scriptEdit->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scriptEdit->setLineWrapMode(QTextEdit::NoWrap);

        verticalLayout_3->addWidget(scriptEdit);

        tabs->addTab(scriptTab, QString());
        outputTab = new QWidget();
        outputTab->setObjectName(QString::fromUtf8("outputTab"));
        verticalLayout_4 = new QVBoxLayout(outputTab);
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        outputBrowser = new QTextBrowser(outputTab);
        outputBrowser->setObjectName(QString::fromUtf8("outputBrowser"));
        outputBrowser->setFont(font1);

        verticalLayout_4->addWidget(outputBrowser);

        tabs->addTab(outputTab, QString());

        verticalLayout->addWidget(tabs);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(4, -1, -1, -1);
        rowColumnLabel = new QLabel(frame);
        rowColumnLabel->setObjectName(QString::fromUtf8("rowColumnLabel"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(rowColumnLabel->sizePolicy().hasHeightForWidth());
        rowColumnLabel->setSizePolicy(sizePolicy3);
        rowColumnLabel->setMinimumSize(QSize(100, 0));
        rowColumnLabel->setMaximumSize(QSize(100, 16777215));
        rowColumnLabel->setText(QString::fromUtf8("R:0 C:0"));

        horizontalLayout_2->addWidget(rowColumnLabel);

        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        includeEdit = new QLineEdit(frame);
        includeEdit->setObjectName(QString::fromUtf8("includeEdit"));
        QSizePolicy sizePolicy4(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(includeEdit->sizePolicy().hasHeightForWidth());
        includeEdit->setSizePolicy(sizePolicy4);

        horizontalLayout_2->addWidget(includeEdit);

        includeBrowseButton = new QPushButton(frame);
        includeBrowseButton->setObjectName(QString::fromUtf8("includeBrowseButton"));
        sizePolicy2.setHeightForWidth(includeBrowseButton->sizePolicy().hasHeightForWidth());
        includeBrowseButton->setSizePolicy(sizePolicy2);
        includeBrowseButton->setMaximumSize(QSize(24, 24));

        horizontalLayout_2->addWidget(includeBrowseButton);

        frame_4 = new ResizeFrame(frame);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        sizePolicy2.setHeightForWidth(frame_4->sizePolicy().hasHeightForWidth());
        frame_4->setSizePolicy(sizePolicy2);
        frame_4->setMinimumSize(QSize(20, 20));
        frame_4->setMaximumSize(QSize(24, 24));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Sans Serif"));
        frame_4->setFont(font2);
        frame_4->setCursor(QCursor(Qt::SizeFDiagCursor));
        frame_4->setFrameShape(QFrame::StyledPanel);

        horizontalLayout_2->addWidget(frame_4);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addWidget(frame);

        frame->raise();
        TitleBar->raise();

        retranslateUi(scriptConsoleForm);

        tabs->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(scriptConsoleForm);
    } // setupUi

    void retranslateUi(QWidget *scriptConsoleForm)
    {
        stelWindowTitle->setText(QApplication::translate("scriptConsoleForm", "Script console", 0, QApplication::UnicodeUTF8));
        closeStelWindow->setText(QString());
#ifndef QT_NO_TOOLTIP
        loadButton->setToolTip(QApplication::translate("scriptConsoleForm", "load script from file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        loadButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        saveButton->setToolTip(QApplication::translate("scriptConsoleForm", "save script to file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        saveButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        clearButton->setToolTip(QApplication::translate("scriptConsoleForm", "clear script", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        clearButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        preprocessSSCButton->setToolTip(QApplication::translate("scriptConsoleForm", "pre-process script using SSC preprocessor", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        preprocessSTSButton->setToolTip(QApplication::translate("scriptConsoleForm", "pre-process script using STS preprocessor", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        quickrunCombo->setToolTip(QApplication::translate("scriptConsoleForm", "quickly load and run a utility script", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        runButton->setToolTip(QApplication::translate("scriptConsoleForm", "run script", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        runButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        stopButton->setToolTip(QApplication::translate("scriptConsoleForm", "stop script", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        stopButton->setText(QString());
        tabs->setTabText(tabs->indexOf(scriptTab), QApplication::translate("scriptConsoleForm", "Script", 0, QApplication::UnicodeUTF8));
        tabs->setTabText(tabs->indexOf(outputTab), QApplication::translate("scriptConsoleForm", "Output", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        rowColumnLabel->setToolTip(QApplication::translate("scriptConsoleForm", "Cursor position", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("scriptConsoleForm", "Include dir:", 0, QApplication::UnicodeUTF8));
        includeBrowseButton->setText(QApplication::translate("scriptConsoleForm", "...", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(scriptConsoleForm);
    } // retranslateUi

};

namespace Ui {
    class scriptConsoleForm: public Ui_scriptConsoleForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCRIPTCONSOLE_H
