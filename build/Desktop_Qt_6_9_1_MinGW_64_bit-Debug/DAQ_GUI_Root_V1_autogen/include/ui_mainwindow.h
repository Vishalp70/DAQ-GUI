/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTextEdit *terminalRxOutput;
    QLabel *label;
    QLabel *label_2;
    QTextEdit *terminalOutput;
    QPushButton *stop;
    QPushButton *exit;
    QPushButton *reset;
    QPushButton *startread;
    QPushButton *analyzeButton;
    QMenuBar *menubar;
    QMenu *menuDAQ;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(542, 349);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        terminalRxOutput = new QTextEdit(centralwidget);
        terminalRxOutput->setObjectName("terminalRxOutput");

        gridLayout->addWidget(terminalRxOutput, 11, 2, 5, 1);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(14);
        label->setFont(font);

        gridLayout->addWidget(label, 7, 2, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 1, 2, 1, 1);

        terminalOutput = new QTextEdit(centralwidget);
        terminalOutput->setObjectName("terminalOutput");

        gridLayout->addWidget(terminalOutput, 4, 2, 1, 1);

        stop = new QPushButton(centralwidget);
        stop->setObjectName("stop");
        stop->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #4CAF50;       /* nice green */\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 6px;\n"
"    padding: 8px 16px;\n"
"    font-weight: bold;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #45a049;\n"
"}\n"
""));

        gridLayout->addWidget(stop, 13, 0, 1, 1);

        exit = new QPushButton(centralwidget);
        exit->setObjectName("exit");
        exit->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #4CAF50;       /* nice green */\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 6px;\n"
"    padding: 8px 16px;\n"
"    font-weight: bold;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #45a049;\n"
"}\n"
""));

        gridLayout->addWidget(exit, 15, 0, 1, 1);

        reset = new QPushButton(centralwidget);
        reset->setObjectName("reset");
        reset->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #4CAF50;       /* nice green */\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 6px;\n"
"    padding: 8px 16px;\n"
"    font-weight: bold;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #45a049;\n"
"}\n"
""));

        gridLayout->addWidget(reset, 14, 0, 1, 1);

        startread = new QPushButton(centralwidget);
        startread->setObjectName("startread");
        startread->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #4CAF50;       /* nice green */\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 6px;\n"
"    padding: 8px 16px;\n"
"    font-weight: bold;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #45a049;\n"
"}\n"
""));

        gridLayout->addWidget(startread, 12, 0, 1, 1);

        analyzeButton = new QPushButton(centralwidget);
        analyzeButton->setObjectName("analyzeButton");
        analyzeButton->setStyleSheet(QString::fromUtf8("QPushButton#analyzeButton {\n"
"    background-color: #00bcd4;       /* fresh cyan */\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 6px;\n"
"    padding: 8px 16px;\n"
"    font-weight: bold;\n"
"}\n"
"QPushButton#analyzeButton:hover {\n"
"    background-color: #0097a7;\n"
"}\n"
""));

        gridLayout->addWidget(analyzeButton, 11, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 542, 17));
        menuDAQ = new QMenu(menubar);
        menuDAQ->setObjectName("menuDAQ");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuDAQ->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Data Recieved", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Command Recieved", nullptr));
        stop->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        exit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        reset->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        startread->setText(QCoreApplication::translate("MainWindow", "Start_Read", nullptr));
        analyzeButton->setText(QCoreApplication::translate("MainWindow", "Analyze", nullptr));
        menuDAQ->setTitle(QCoreApplication::translate("MainWindow", "DAQ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
