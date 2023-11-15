/********************************************************************************
** Form generated from reading UI file 'uipersonlist.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UIPERSONLIST_H
#define UI_UIPERSONLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_uipersonlist
{
public:
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QTableView *tableViewListPersons;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButtonUpdate;
    QPushButton *pushButtonDelete;
    QPushButton *pushButtonRetour;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonFind;
    QLineEdit *lineEditFind;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *uipersonlist)
    {
        if (uipersonlist->objectName().isEmpty())
            uipersonlist->setObjectName("uipersonlist");
        uipersonlist->resize(800, 600);
        centralwidget = new QWidget(uipersonlist);
        centralwidget->setObjectName("centralwidget");
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(10, 30, 761, 471));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        tableViewListPersons = new QTableView(horizontalLayoutWidget);
        tableViewListPersons->setObjectName("tableViewListPersons");

        horizontalLayout->addWidget(tableViewListPersons);

        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(10, 510, 761, 31));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonUpdate = new QPushButton(gridLayoutWidget);
        pushButtonUpdate->setObjectName("pushButtonUpdate");

        gridLayout->addWidget(pushButtonUpdate, 0, 0, 1, 1);

        pushButtonDelete = new QPushButton(gridLayoutWidget);
        pushButtonDelete->setObjectName("pushButtonDelete");

        gridLayout->addWidget(pushButtonDelete, 0, 1, 1, 1);

        pushButtonRetour = new QPushButton(gridLayoutWidget);
        pushButtonRetour->setObjectName("pushButtonRetour");

        gridLayout->addWidget(pushButtonRetour, 0, 2, 1, 1);

        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(10, 0, 761, 31));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButtonFind = new QPushButton(horizontalLayoutWidget_2);
        pushButtonFind->setObjectName("pushButtonFind");

        horizontalLayout_2->addWidget(pushButtonFind);

        lineEditFind = new QLineEdit(horizontalLayoutWidget_2);
        lineEditFind->setObjectName("lineEditFind");

        horizontalLayout_2->addWidget(lineEditFind);

        uipersonlist->setCentralWidget(centralwidget);
        menubar = new QMenuBar(uipersonlist);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        uipersonlist->setMenuBar(menubar);
        statusbar = new QStatusBar(uipersonlist);
        statusbar->setObjectName("statusbar");
        uipersonlist->setStatusBar(statusbar);

        retranslateUi(uipersonlist);

        QMetaObject::connectSlotsByName(uipersonlist);
    } // setupUi

    void retranslateUi(QMainWindow *uipersonlist)
    {
        uipersonlist->setWindowTitle(QCoreApplication::translate("uipersonlist", "MainWindow", nullptr));
        pushButtonUpdate->setText(QCoreApplication::translate("uipersonlist", "Update", nullptr));
        pushButtonDelete->setText(QCoreApplication::translate("uipersonlist", "Delete", nullptr));
        pushButtonRetour->setText(QCoreApplication::translate("uipersonlist", "Retour", nullptr));
        pushButtonFind->setText(QCoreApplication::translate("uipersonlist", "RECHERCHER", nullptr));
    } // retranslateUi

};

namespace Ui {
    class uipersonlist: public Ui_uipersonlist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UIPERSONLIST_H
