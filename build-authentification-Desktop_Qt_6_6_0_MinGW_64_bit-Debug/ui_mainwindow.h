/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
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
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEditFirstName;
    QLabel *label_2;
    QLineEdit *lineEditLastName;
    QLabel *label_3;
    QDateEdit *dateEditBirthdate;
    QLabel *label_4;
    QComboBox *comboBoxCountry;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButtonCreate;
    QPushButton *pushButtonUpdate;
    QPushButton *pushButtonClose;
    QPushButton *pushButtonDisplay;
    QPushButton *pushButtonList;
    QPushButton *pushButtonFind;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        formLayoutWidget = new QWidget(centralwidget);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(130, 40, 541, 141));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEditFirstName = new QLineEdit(formLayoutWidget);
        lineEditFirstName->setObjectName("lineEditFirstName");

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEditFirstName);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEditLastName = new QLineEdit(formLayoutWidget);
        lineEditLastName->setObjectName("lineEditLastName");

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEditLastName);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        dateEditBirthdate = new QDateEdit(formLayoutWidget);
        dateEditBirthdate->setObjectName("dateEditBirthdate");

        formLayout->setWidget(2, QFormLayout::FieldRole, dateEditBirthdate);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName("label_4");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        comboBoxCountry = new QComboBox(formLayoutWidget);
        comboBoxCountry->addItem(QString());
        comboBoxCountry->addItem(QString());
        comboBoxCountry->setObjectName("comboBoxCountry");

        formLayout->setWidget(3, QFormLayout::FieldRole, comboBoxCountry);

        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(130, 190, 541, 31));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonCreate = new QPushButton(gridLayoutWidget);
        pushButtonCreate->setObjectName("pushButtonCreate");

        gridLayout->addWidget(pushButtonCreate, 0, 2, 1, 1);

        pushButtonUpdate = new QPushButton(gridLayoutWidget);
        pushButtonUpdate->setObjectName("pushButtonUpdate");

        gridLayout->addWidget(pushButtonUpdate, 0, 1, 1, 1);

        pushButtonClose = new QPushButton(gridLayoutWidget);
        pushButtonClose->setObjectName("pushButtonClose");

        gridLayout->addWidget(pushButtonClose, 0, 3, 1, 1);

        pushButtonDisplay = new QPushButton(gridLayoutWidget);
        pushButtonDisplay->setObjectName("pushButtonDisplay");

        gridLayout->addWidget(pushButtonDisplay, 0, 4, 1, 1);

        pushButtonList = new QPushButton(gridLayoutWidget);
        pushButtonList->setObjectName("pushButtonList");

        gridLayout->addWidget(pushButtonList, 0, 5, 1, 1);

        pushButtonFind = new QPushButton(gridLayoutWidget);
        pushButtonFind->setObjectName("pushButtonFind");

        gridLayout->addWidget(pushButtonFind, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
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
        label->setText(QCoreApplication::translate("MainWindow", "FirstName", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "LastName", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Date", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Country", nullptr));
        comboBoxCountry->setItemText(0, QCoreApplication::translate("MainWindow", "Senegal", nullptr));
        comboBoxCountry->setItemText(1, QCoreApplication::translate("MainWindow", "Mauritanie", nullptr));

        pushButtonCreate->setText(QCoreApplication::translate("MainWindow", "Create", nullptr));
        pushButtonUpdate->setText(QCoreApplication::translate("MainWindow", "Update", nullptr));
        pushButtonClose->setText(QCoreApplication::translate("MainWindow", "Close", nullptr));
        pushButtonDisplay->setText(QCoreApplication::translate("MainWindow", "Display", nullptr));
        pushButtonList->setText(QCoreApplication::translate("MainWindow", "List", nullptr));
        pushButtonFind->setText(QCoreApplication::translate("MainWindow", "Find", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
