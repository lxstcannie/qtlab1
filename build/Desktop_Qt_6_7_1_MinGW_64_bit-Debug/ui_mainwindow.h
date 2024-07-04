/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
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
    QPushButton *exitButton;
    QPushButton *calculateButton;
    QLabel *label;
    QLabel *label_2;
    QPushButton *calculateButton_2;
    QPushButton *calculateButton_3;
    QPushButton *calculateButton_4;
    QCheckBox *checkBox;
    QTextEdit *textEdit;
    QPushButton *showdialog;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QComboBox *comboBox;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1269, 733);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        exitButton = new QPushButton(centralwidget);
        exitButton->setObjectName("exitButton");
        exitButton->setGeometry(QRect(1140, 630, 111, 41));
        calculateButton = new QPushButton(centralwidget);
        calculateButton->setObjectName("calculateButton");
        calculateButton->setGeometry(QRect(110, 210, 241, 141));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(110, 350, 661, 151));
        QFont font;
        font.setPointSize(30);
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(540, 20, 201, 61));
        QFont font1;
        font1.setPointSize(24);
        label_2->setFont(font1);
        calculateButton_2 = new QPushButton(centralwidget);
        calculateButton_2->setObjectName("calculateButton_2");
        calculateButton_2->setGeometry(QRect(362, 210, 211, 141));
        calculateButton_3 = new QPushButton(centralwidget);
        calculateButton_3->setObjectName("calculateButton_3");
        calculateButton_3->setGeometry(QRect(580, 210, 241, 141));
        calculateButton_4 = new QPushButton(centralwidget);
        calculateButton_4->setObjectName("calculateButton_4");
        calculateButton_4->setGeometry(QRect(840, 210, 251, 141));
        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(1020, 160, 221, 51));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(1020, 10, 231, 131));
        showdialog = new QPushButton(centralwidget);
        showdialog->setObjectName("showdialog");
        showdialog->setGeometry(QRect(1080, 470, 171, 81));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(520, 80, 171, 28));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(1020, 140, 61, 20));
        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(270, 540, 271, 71));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1269, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(exitButton, &QPushButton::clicked, MainWindow, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        exitButton->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        calculateButton->setText(QCoreApplication::translate("MainWindow", "Calculate sh(x)", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Answer: (press calculate)", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Enter X", nullptr));
        calculateButton_2->setText(QCoreApplication::translate("MainWindow", "Calculate ch(x)", nullptr));
        calculateButton_3->setText(QCoreApplication::translate("MainWindow", "Calculate th(x)", nullptr));
        calculateButton_4->setText(QCoreApplication::translate("MainWindow", " Calculate cth(x)", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "Hide notes", nullptr));
        showdialog->setText(QCoreApplication::translate("MainWindow", "open dialogwindow", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Notes", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "element1", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "element2", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "element3", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("MainWindow", "element4", nullptr));

    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
