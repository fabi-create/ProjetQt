/********************************************************************************
** Form generated from reading UI file 'personslist.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERSONSLIST_H
#define UI_PERSONSLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_personslist
{
public:
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *HorizontalHeaderLabels;
    QTableWidget *tableViewListPersons;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButtonDelete;
    QPushButton *pushButtonBack;
    QPushButton *pushButtonUpdate;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *personslist)
    {
        if (personslist->objectName().isEmpty())
            personslist->setObjectName("personslist");
        personslist->resize(800, 600);
        centralwidget = new QWidget(personslist);
        centralwidget->setObjectName("centralwidget");
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(80, 90, 501, 251));
        HorizontalHeaderLabels = new QHBoxLayout(horizontalLayoutWidget);
        HorizontalHeaderLabels->setObjectName("HorizontalHeaderLabels");
        HorizontalHeaderLabels->setContentsMargins(0, 0, 0, 0);
        tableViewListPersons = new QTableWidget(horizontalLayoutWidget);
        tableViewListPersons->setObjectName("tableViewListPersons");

        HorizontalHeaderLabels->addWidget(tableViewListPersons);

        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(80, 350, 501, 26));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonDelete = new QPushButton(gridLayoutWidget);
        pushButtonDelete->setObjectName("pushButtonDelete");

        gridLayout->addWidget(pushButtonDelete, 0, 1, 1, 1);

        pushButtonBack = new QPushButton(gridLayoutWidget);
        pushButtonBack->setObjectName("pushButtonBack");

        gridLayout->addWidget(pushButtonBack, 0, 2, 1, 1);

        pushButtonUpdate = new QPushButton(gridLayoutWidget);
        pushButtonUpdate->setObjectName("pushButtonUpdate");

        gridLayout->addWidget(pushButtonUpdate, 0, 0, 1, 1);

        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(80, 49, 501, 31));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label = new QLabel(horizontalLayoutWidget_2);
        label->setObjectName("label");

        horizontalLayout_2->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        personslist->setCentralWidget(centralwidget);
        menubar = new QMenuBar(personslist);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        personslist->setMenuBar(menubar);
        statusbar = new QStatusBar(personslist);
        statusbar->setObjectName("statusbar");
        personslist->setStatusBar(statusbar);

        retranslateUi(personslist);

        QMetaObject::connectSlotsByName(personslist);
    } // setupUi

    void retranslateUi(QMainWindow *personslist)
    {
        personslist->setWindowTitle(QCoreApplication::translate("personslist", "MainWindow", nullptr));
        pushButtonDelete->setText(QCoreApplication::translate("personslist", "PushButton", nullptr));
        pushButtonBack->setText(QCoreApplication::translate("personslist", "PushButton", nullptr));
        pushButtonUpdate->setText(QCoreApplication::translate("personslist", "Update", nullptr));
        label->setText(QCoreApplication::translate("personslist", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class personslist: public Ui_personslist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERSONSLIST_H
