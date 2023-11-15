/********************************************************************************
** Form generated from reading UI file 'uilistperson.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UILISTPERSON_H
#define UI_UILISTPERSON_H

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

class Ui_UIListPerson
{
public:
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout1_2;
    QSpacerItem *horizontalSpacer;
    QLabel *ListeDesPerson;
    QSpacerItem *horizontalSpace1;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout3;
    QPushButton *pushButtonUpdate_2;
    QPushButton *pushButtonDelete;
    QPushButton *pushButtonRetour;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout2_2;
    QTableView *tableView1;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *UIListPerson)
    {
        if (UIListPerson->objectName().isEmpty())
            UIListPerson->setObjectName("UIListPerson");
        UIListPerson->resize(800, 600);
        centralwidget = new QWidget(UIListPerson);
        centralwidget->setObjectName("centralwidget");
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(150, 49, 561, 41));
        horizontalLayout1_2 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout1_2->setObjectName("horizontalLayout1_2");
        horizontalLayout1_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout1_2->addItem(horizontalSpacer);

        ListeDesPerson = new QLabel(horizontalLayoutWidget);
        ListeDesPerson->setObjectName("ListeDesPerson");

        horizontalLayout1_2->addWidget(ListeDesPerson);

        horizontalSpace1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout1_2->addItem(horizontalSpace1);

        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(150, 320, 561, 41));
        horizontalLayout3 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout3->setObjectName("horizontalLayout3");
        horizontalLayout3->setContentsMargins(0, 0, 0, 0);
        pushButtonUpdate_2 = new QPushButton(horizontalLayoutWidget_2);
        pushButtonUpdate_2->setObjectName("pushButtonUpdate_2");

        horizontalLayout3->addWidget(pushButtonUpdate_2);

        pushButtonDelete = new QPushButton(horizontalLayoutWidget_2);
        pushButtonDelete->setObjectName("pushButtonDelete");

        horizontalLayout3->addWidget(pushButtonDelete);

        pushButtonRetour = new QPushButton(horizontalLayoutWidget_2);
        pushButtonRetour->setObjectName("pushButtonRetour");

        horizontalLayout3->addWidget(pushButtonRetour);

        horizontalLayoutWidget_3 = new QWidget(centralwidget);
        horizontalLayoutWidget_3->setObjectName("horizontalLayoutWidget_3");
        horizontalLayoutWidget_3->setGeometry(QRect(150, 110, 561, 201));
        horizontalLayout2_2 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout2_2->setObjectName("horizontalLayout2_2");
        horizontalLayout2_2->setContentsMargins(0, 0, 0, 0);
        tableView1 = new QTableView(horizontalLayoutWidget_3);
        tableView1->setObjectName("tableView1");

        horizontalLayout2_2->addWidget(tableView1);

        UIListPerson->setCentralWidget(centralwidget);
        menubar = new QMenuBar(UIListPerson);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        UIListPerson->setMenuBar(menubar);
        statusbar = new QStatusBar(UIListPerson);
        statusbar->setObjectName("statusbar");
        UIListPerson->setStatusBar(statusbar);

        retranslateUi(UIListPerson);

        QMetaObject::connectSlotsByName(UIListPerson);
    } // setupUi

    void retranslateUi(QMainWindow *UIListPerson)
    {
        UIListPerson->setWindowTitle(QCoreApplication::translate("UIListPerson", "MainWindow", nullptr));
        ListeDesPerson->setText(QCoreApplication::translate("UIListPerson", "Liste des personnes", nullptr));
        pushButtonUpdate_2->setText(QCoreApplication::translate("UIListPerson", "Update", nullptr));
        pushButtonDelete->setText(QCoreApplication::translate("UIListPerson", "Delete", nullptr));
        pushButtonRetour->setText(QCoreApplication::translate("UIListPerson", "Retour", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UIListPerson: public Ui_UIListPerson {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UILISTPERSON_H
