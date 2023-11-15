/********************************************************************************
** Form generated from reading UI file 'authwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTHWINDOW_H
#define UI_AUTHWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_authwindow
{
public:
    QWidget *centralwidget;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEditLogin;
    QLabel *label_2;
    QLineEdit *lineEditPassword;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButtonSubmit;
    QPushButton *pushButtonCancel;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *authwindow)
    {
        if (authwindow->objectName().isEmpty())
            authwindow->setObjectName("authwindow");
        authwindow->resize(800, 600);
        centralwidget = new QWidget(authwindow);
        centralwidget->setObjectName("centralwidget");
        formLayoutWidget = new QWidget(centralwidget);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(120, 30, 571, 61));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEditLogin = new QLineEdit(formLayoutWidget);
        lineEditLogin->setObjectName("lineEditLogin");

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEditLogin);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEditPassword = new QLineEdit(formLayoutWidget);
        lineEditPassword->setObjectName("lineEditPassword");

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEditPassword);

        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(120, 100, 571, 31));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonSubmit = new QPushButton(gridLayoutWidget);
        pushButtonSubmit->setObjectName("pushButtonSubmit");

        gridLayout->addWidget(pushButtonSubmit, 0, 1, 1, 1);

        pushButtonCancel = new QPushButton(gridLayoutWidget);
        pushButtonCancel->setObjectName("pushButtonCancel");

        gridLayout->addWidget(pushButtonCancel, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 3, 1, 1);

        authwindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(authwindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        authwindow->setMenuBar(menubar);
        statusbar = new QStatusBar(authwindow);
        statusbar->setObjectName("statusbar");
        authwindow->setStatusBar(statusbar);

        retranslateUi(authwindow);

        QMetaObject::connectSlotsByName(authwindow);
    } // setupUi

    void retranslateUi(QMainWindow *authwindow)
    {
        authwindow->setWindowTitle(QCoreApplication::translate("authwindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("authwindow", "Login", nullptr));
        label_2->setText(QCoreApplication::translate("authwindow", "Password", nullptr));
        pushButtonSubmit->setText(QCoreApplication::translate("authwindow", "PushButton", nullptr));
        pushButtonCancel->setText(QCoreApplication::translate("authwindow", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class authwindow: public Ui_authwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTHWINDOW_H
