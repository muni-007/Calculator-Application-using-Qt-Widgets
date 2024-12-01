/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *display;
    QPushButton *clear;
    QPushButton *plusminus;
    QPushButton *percent;
    QPushButton *divide;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *multiple;
    QPushButton *pushButton_9;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *sub;
    QPushButton *pushButton_6;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *add;
    QPushButton *pushButton_3;
    QPushButton *pushButton_0;
    QPushButton *equal;
    QPushButton *back;
    QPushButton *dot;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        display = new QLabel(centralwidget);
        display->setObjectName("display");
        display->setGeometry(QRect(220, 80, 321, 91));
        display->setStyleSheet(QString::fromUtf8("QLabel{\n"
"border:4px solid gray;\n"
"	font: 700 20pt \"Segoe UI\";\n"
"font-color:black;\n"
"}"));
        display->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        clear = new QPushButton(centralwidget);
        clear->setObjectName("clear");
        clear->setGeometry(QRect(220, 170, 81, 61));
        clear->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:2px solid gray;\n"
"	font: 700 12pt \"Segoe UI\";\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 178, 102, 255), stop:0.55 rgba(235, 148, 61, 255), stop:0.98 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 0));\n"
"}"));
        plusminus = new QPushButton(centralwidget);
        plusminus->setObjectName("plusminus");
        plusminus->setGeometry(QRect(300, 170, 81, 61));
        plusminus->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:2px solid gray;\n"
"	font: 700 12pt \"Segoe UI\";\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 178, 102, 255), stop:0.55 rgba(235, 148, 61, 255), stop:0.98 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 0));\n"
"}"));
        percent = new QPushButton(centralwidget);
        percent->setObjectName("percent");
        percent->setGeometry(QRect(380, 170, 81, 61));
        percent->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:2px solid gray;\n"
"	font: 700 12pt \"Segoe UI\";\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 178, 102, 255), stop:0.55 rgba(235, 148, 61, 255), stop:0.98 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 0));\n"
"}"));
        divide = new QPushButton(centralwidget);
        divide->setObjectName("divide");
        divide->setGeometry(QRect(460, 170, 81, 61));
        divide->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:2px solid gray;\n"
"	font: 700 12pt \"Segoe UI\";\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 178, 102, 255), stop:0.55 rgba(235, 148, 61, 255), stop:0.98 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 0));\n"
"}"));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(220, 230, 81, 61));
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:2px solid gray;\n"
"	font: 700 12pt \"Segoe UI\";\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255))\n"
"}\n"
""));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(300, 230, 81, 61));
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:2px solid gray;\n"
"	font: 700 12pt \"Segoe UI\";\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255))\n"
"}\n"
""));
        multiple = new QPushButton(centralwidget);
        multiple->setObjectName("multiple");
        multiple->setGeometry(QRect(460, 230, 81, 61));
        multiple->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:2px solid gray;\n"
"	font: 700 12pt \"Segoe UI\";\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 178, 102, 255), stop:0.55 rgba(235, 148, 61, 255), stop:0.98 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 0));\n"
"}"));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(380, 230, 81, 61));
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:2px solid gray;\n"
"	font: 700 12pt \"Segoe UI\";\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255))\n"
"}\n"
""));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(220, 290, 81, 61));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:2px solid gray;\n"
"	font: 700 12pt \"Segoe UI\";\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255))\n"
"}\n"
""));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(300, 290, 81, 61));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:2px solid gray;\n"
"	font: 700 12pt \"Segoe UI\";\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255))\n"
"}\n"
""));
        sub = new QPushButton(centralwidget);
        sub->setObjectName("sub");
        sub->setGeometry(QRect(460, 290, 81, 61));
        sub->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:2px solid gray;\n"
"	font: 700 12pt \"Segoe UI\";\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 178, 102, 255), stop:0.55 rgba(235, 148, 61, 255), stop:0.98 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 0));\n"
"}"));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(380, 290, 81, 61));
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:2px solid gray;\n"
"	font: 700 12pt \"Segoe UI\";\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255))\n"
"}\n"
""));
        pushButton_1 = new QPushButton(centralwidget);
        pushButton_1->setObjectName("pushButton_1");
        pushButton_1->setGeometry(QRect(220, 350, 81, 61));
        pushButton_1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:2px solid gray;\n"
"	font: 700 12pt \"Segoe UI\";\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255))\n"
"}\n"
""));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(300, 350, 81, 61));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:2px solid gray;\n"
"	font: 700 12pt \"Segoe UI\";\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255))\n"
"}\n"
""));
        add = new QPushButton(centralwidget);
        add->setObjectName("add");
        add->setGeometry(QRect(460, 350, 81, 61));
        add->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:2px solid gray;\n"
"	font: 700 12pt \"Segoe UI\";\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 178, 102, 255), stop:0.55 rgba(235, 148, 61, 255), stop:0.98 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 0));\n"
"}"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(380, 350, 81, 61));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:2px solid gray;\n"
"	font: 700 12pt \"Segoe UI\";\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255))\n"
"}\n"
""));
        pushButton_0 = new QPushButton(centralwidget);
        pushButton_0->setObjectName("pushButton_0");
        pushButton_0->setGeometry(QRect(220, 410, 81, 61));
        pushButton_0->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:2px solid gray;\n"
"	font: 700 12pt \"Segoe UI\";\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255))\n"
"}"));
        equal = new QPushButton(centralwidget);
        equal->setObjectName("equal");
        equal->setGeometry(QRect(460, 410, 81, 61));
        equal->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:2px solid gray;\n"
"	font: 700 12pt \"Segoe UI\";\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 178, 102, 255), stop:0.55 rgba(235, 148, 61, 255), stop:0.98 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 0));\n"
"}"));
        back = new QPushButton(centralwidget);
        back->setObjectName("back");
        back->setGeometry(QRect(380, 410, 81, 61));
        back->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:2px solid gray;\n"
"	font: 700 12pt \"Segoe UI\";\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 178, 102, 255), stop:0.55 rgba(235, 148, 61, 255), stop:0.98 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 0));\n"
"}"));
        dot = new QPushButton(centralwidget);
        dot->setObjectName("dot");
        dot->setGeometry(QRect(300, 410, 81, 61));
        dot->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:2px solid gray;\n"
"	font: 700 12pt \"Segoe UI\";\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255))\n"
"}"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        display->setText(QString());
        clear->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        plusminus->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        percent->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        divide->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        multiple->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        sub->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        equal->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        back->setText(QCoreApplication::translate("MainWindow", "BACK", nullptr));
        dot->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
