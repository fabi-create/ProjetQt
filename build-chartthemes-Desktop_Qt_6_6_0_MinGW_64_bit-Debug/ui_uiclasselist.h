/********************************************************************************
** Form generated from reading UI file 'uiclasselist.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UICLASSELIST_H
#define UI_UICLASSELIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_uiclasselist
{
public:
    QWidget *centralwidget;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QTableView *tableViewListClasse;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButtonUpdateClasse;
    QPushButton *pushButtonDeleteClasse;
    QPushButton *pushButtonRetourClasse;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QPushButton *pushButtonFindClasse;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *uiclasselist)
    {
        if (uiclasselist->objectName().isEmpty())
            uiclasselist->setObjectName("uiclasselist");
        uiclasselist->resize(800, 600);
        centralwidget = new QWidget(uiclasselist);
        centralwidget->setObjectName("centralwidget");
        formLayoutWidget = new QWidget(centralwidget);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(10, 50, 771, 461));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        tableViewListClasse = new QTableView(formLayoutWidget);
        tableViewListClasse->setObjectName("tableViewListClasse");

        formLayout->setWidget(0, QFormLayout::SpanningRole, tableViewListClasse);

        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(10, 520, 771, 31));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonUpdateClasse = new QPushButton(gridLayoutWidget);
        pushButtonUpdateClasse->setObjectName("pushButtonUpdateClasse");

        gridLayout->addWidget(pushButtonUpdateClasse, 0, 0, 1, 1);

        pushButtonDeleteClasse = new QPushButton(gridLayoutWidget);
        pushButtonDeleteClasse->setObjectName("pushButtonDeleteClasse");

        gridLayout->addWidget(pushButtonDeleteClasse, 0, 1, 1, 1);

        pushButtonRetourClasse = new QPushButton(gridLayoutWidget);
        pushButtonRetourClasse->setObjectName("pushButtonRetourClasse");

        gridLayout->addWidget(pushButtonRetourClasse, 0, 2, 1, 1);

        formLayoutWidget_2 = new QWidget(centralwidget);
        formLayoutWidget_2->setObjectName("formLayoutWidget_2");
        formLayoutWidget_2->setGeometry(QRect(10, 0, 681, 24));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName("formLayout_2");
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget_2);
        label->setObjectName("label");

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit = new QLineEdit(formLayoutWidget_2);
        lineEdit->setObjectName("lineEdit");

        formLayout_2->setWidget(0, QFormLayout::FieldRole, lineEdit);

        gridLayoutWidget_2 = new QWidget(centralwidget);
        gridLayoutWidget_2->setObjectName("gridLayoutWidget_2");
        gridLayoutWidget_2->setGeometry(QRect(690, 0, 101, 26));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButtonFindClasse = new QPushButton(gridLayoutWidget_2);
        pushButtonFindClasse->setObjectName("pushButtonFindClasse");

        gridLayout_2->addWidget(pushButtonFindClasse, 0, 0, 1, 1);

        uiclasselist->setCentralWidget(centralwidget);
        menubar = new QMenuBar(uiclasselist);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        uiclasselist->setMenuBar(menubar);
        statusbar = new QStatusBar(uiclasselist);
        statusbar->setObjectName("statusbar");
        uiclasselist->setStatusBar(statusbar);

        retranslateUi(uiclasselist);

        QMetaObject::connectSlotsByName(uiclasselist);
    } // setupUi

    void retranslateUi(QMainWindow *uiclasselist)
    {
        uiclasselist->setWindowTitle(QCoreApplication::translate("uiclasselist", "MainWindow", nullptr));
        pushButtonUpdateClasse->setText(QCoreApplication::translate("uiclasselist", "Update", nullptr));
        pushButtonDeleteClasse->setText(QCoreApplication::translate("uiclasselist", "Delete", nullptr));
        pushButtonRetourClasse->setText(QCoreApplication::translate("uiclasselist", "Retour", nullptr));
        label->setText(QCoreApplication::translate("uiclasselist", "Donner le nom de la classe", nullptr));
        pushButtonFindClasse->setText(QCoreApplication::translate("uiclasselist", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class uiclasselist: public Ui_uiclasselist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UICLASSELIST_H
