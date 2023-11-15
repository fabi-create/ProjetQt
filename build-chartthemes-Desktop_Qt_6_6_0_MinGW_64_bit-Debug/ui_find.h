/********************************************************************************
** Form generated from reading UI file 'find.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIND_H
#define UI_FIND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_find
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *find)
    {
        if (find->objectName().isEmpty())
            find->setObjectName("find");
        find->resize(800, 600);
        menubar = new QMenuBar(find);
        menubar->setObjectName("menubar");
        find->setMenuBar(menubar);
        centralwidget = new QWidget(find);
        centralwidget->setObjectName("centralwidget");
        find->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(find);
        statusbar->setObjectName("statusbar");
        find->setStatusBar(statusbar);

        retranslateUi(find);

        QMetaObject::connectSlotsByName(find);
    } // setupUi

    void retranslateUi(QMainWindow *find)
    {
        find->setWindowTitle(QCoreApplication::translate("find", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class find: public Ui_find {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIND_H
