/********************************************************************************
** Form generated from reading UI file 'authentification.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTHENTIFICATION_H
#define UI_AUTHENTIFICATION_H

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

class Ui_authentification
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
    QPushButton *pushButtonCancel;
    QPushButton *pushButtonSubmit;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *authentification)
    {
        if (authentification->objectName().isEmpty())
            authentification->setObjectName("authentification");
        authentification->resize(800, 600);
        centralwidget = new QWidget(authentification);
        centralwidget->setObjectName("centralwidget");
        formLayoutWidget = new QWidget(centralwidget);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(80, 70, 441, 71));
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
        lineEditPassword->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEditPassword);

        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(80, 160, 441, 31));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonCancel = new QPushButton(gridLayoutWidget);
        pushButtonCancel->setObjectName("pushButtonCancel");

        gridLayout->addWidget(pushButtonCancel, 0, 2, 1, 1);

        pushButtonSubmit = new QPushButton(gridLayoutWidget);
        pushButtonSubmit->setObjectName("pushButtonSubmit");

        gridLayout->addWidget(pushButtonSubmit, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 3, 1, 1);

        authentification->setCentralWidget(centralwidget);
        menubar = new QMenuBar(authentification);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        authentification->setMenuBar(menubar);
        statusbar = new QStatusBar(authentification);
        statusbar->setObjectName("statusbar");
        authentification->setStatusBar(statusbar);

        retranslateUi(authentification);

        QMetaObject::connectSlotsByName(authentification);
    } // setupUi

    void retranslateUi(QMainWindow *authentification)
    {
        authentification->setWindowTitle(QCoreApplication::translate("authentification", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("authentification", "Login", nullptr));
        label_2->setText(QCoreApplication::translate("authentification", "Password", nullptr));
        pushButtonCancel->setText(QCoreApplication::translate("authentification", "Cancel", nullptr));
        pushButtonSubmit->setText(QCoreApplication::translate("authentification", "Submit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class authentification: public Ui_authentification {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTHENTIFICATION_H
