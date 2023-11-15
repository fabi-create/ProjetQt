/********************************************************************************
** Form generated from reading UI file 'parcourir.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARCOURIR_H
#define UI_PARCOURIR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_parcourir
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButtonChoisir;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QPushButton *pushButtonClose;
    QPushButton *pushButtonEnregistrer;
    QPushButton *pushButtonDisplay;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *parcourir)
    {
        if (parcourir->objectName().isEmpty())
            parcourir->setObjectName("parcourir");
        parcourir->resize(800, 600);
        centralwidget = new QWidget(parcourir);
        centralwidget->setObjectName("centralwidget");
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(10, 210, 771, 31));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonChoisir = new QPushButton(gridLayoutWidget);
        pushButtonChoisir->setObjectName("pushButtonChoisir");

        gridLayout->addWidget(pushButtonChoisir, 0, 2, 1, 1);

        lineEdit = new QLineEdit(gridLayoutWidget);
        lineEdit->setObjectName("lineEdit");

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        gridLayoutWidget_2 = new QWidget(centralwidget);
        gridLayoutWidget_2->setObjectName("gridLayoutWidget_2");
        gridLayoutWidget_2->setGeometry(QRect(420, 250, 361, 31));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButtonClose = new QPushButton(gridLayoutWidget_2);
        pushButtonClose->setObjectName("pushButtonClose");

        gridLayout_2->addWidget(pushButtonClose, 0, 1, 1, 1);

        pushButtonEnregistrer = new QPushButton(gridLayoutWidget_2);
        pushButtonEnregistrer->setObjectName("pushButtonEnregistrer");

        gridLayout_2->addWidget(pushButtonEnregistrer, 0, 0, 1, 1);

        pushButtonDisplay = new QPushButton(gridLayoutWidget_2);
        pushButtonDisplay->setObjectName("pushButtonDisplay");

        gridLayout_2->addWidget(pushButtonDisplay, 0, 2, 1, 1);

        parcourir->setCentralWidget(centralwidget);
        menubar = new QMenuBar(parcourir);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        parcourir->setMenuBar(menubar);
        statusbar = new QStatusBar(parcourir);
        statusbar->setObjectName("statusbar");
        parcourir->setStatusBar(statusbar);

        retranslateUi(parcourir);

        QMetaObject::connectSlotsByName(parcourir);
    } // setupUi

    void retranslateUi(QMainWindow *parcourir)
    {
        parcourir->setWindowTitle(QCoreApplication::translate("parcourir", "MainWindow", nullptr));
        pushButtonChoisir->setText(QCoreApplication::translate("parcourir", "choisir", nullptr));
        label_2->setText(QCoreApplication::translate("parcourir", "Parcourir", nullptr));
        pushButtonClose->setText(QCoreApplication::translate("parcourir", "Close", nullptr));
        pushButtonEnregistrer->setText(QCoreApplication::translate("parcourir", "Enregistrer", nullptr));
        pushButtonDisplay->setText(QCoreApplication::translate("parcourir", "Display", nullptr));
    } // retranslateUi

};

namespace Ui {
    class parcourir: public Ui_parcourir {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARCOURIR_H
