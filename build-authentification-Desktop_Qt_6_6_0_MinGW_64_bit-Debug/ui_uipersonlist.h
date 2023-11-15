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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UIPersonList
{
public:
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QTableView *tableViewListPerson;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButtonUpdate;
    QPushButton *pushButtonDelete;
    QPushButton *pushButtonRetour;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *UIPersonList)
    {
        if (UIPersonList->objectName().isEmpty())
            UIPersonList->setObjectName("UIPersonList");
        UIPersonList->resize(800, 600);
        centralwidget = new QWidget(UIPersonList);
        centralwidget->setObjectName("centralwidget");
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(50, 10, 691, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(50, 60, 701, 281));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        tableViewListPerson = new QTableView(horizontalLayoutWidget_2);
        tableViewListPerson->setObjectName("tableViewListPerson");

        horizontalLayout_2->addWidget(tableViewListPerson);

        horizontalLayoutWidget_3 = new QWidget(centralwidget);
        horizontalLayoutWidget_3->setObjectName("horizontalLayoutWidget_3");
        horizontalLayoutWidget_3->setGeometry(QRect(50, 340, 701, 31));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        pushButtonUpdate = new QPushButton(horizontalLayoutWidget_3);
        pushButtonUpdate->setObjectName("pushButtonUpdate");

        horizontalLayout_3->addWidget(pushButtonUpdate);

        pushButtonDelete = new QPushButton(horizontalLayoutWidget_3);
        pushButtonDelete->setObjectName("pushButtonDelete");

        horizontalLayout_3->addWidget(pushButtonDelete);

        pushButtonRetour = new QPushButton(horizontalLayoutWidget_3);
        pushButtonRetour->setObjectName("pushButtonRetour");

        horizontalLayout_3->addWidget(pushButtonRetour);

        UIPersonList->setCentralWidget(centralwidget);
        menubar = new QMenuBar(UIPersonList);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        UIPersonList->setMenuBar(menubar);
        statusbar = new QStatusBar(UIPersonList);
        statusbar->setObjectName("statusbar");
        UIPersonList->setStatusBar(statusbar);

        retranslateUi(UIPersonList);

        QMetaObject::connectSlotsByName(UIPersonList);
    } // setupUi

    void retranslateUi(QMainWindow *UIPersonList)
    {
        UIPersonList->setWindowTitle(QCoreApplication::translate("UIPersonList", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("UIPersonList", "Liste de personnes", nullptr));
        pushButtonUpdate->setText(QCoreApplication::translate("UIPersonList", "Update", nullptr));
        pushButtonDelete->setText(QCoreApplication::translate("UIPersonList", "Delete", nullptr));
        pushButtonRetour->setText(QCoreApplication::translate("UIPersonList", "Retour", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UIPersonList: public Ui_UIPersonList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UIPERSONLIST_H
