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
    QPushButton *pushButtonSubmit;
    QPushButton *pushButtonCancel;
    QLabel *label_pic;
    QLabel *label_pic_2;
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
        formLayoutWidget->setGeometry(QRect(320, 90, 311, 61));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEditLogin = new QLineEdit(formLayoutWidget);
        lineEditLogin->setObjectName("lineEditLogin");
        lineEditLogin->setReadOnly(false);

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEditLogin);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEditPassword = new QLineEdit(formLayoutWidget);
        lineEditPassword->setObjectName("lineEditPassword");

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEditPassword);

        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(320, 240, 311, 31));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonSubmit = new QPushButton(gridLayoutWidget);
        pushButtonSubmit->setObjectName("pushButtonSubmit");
        pushButtonSubmit->setCheckable(false);
        pushButtonSubmit->setAutoDefault(false);
        pushButtonSubmit->setFlat(false);

        gridLayout->addWidget(pushButtonSubmit, 0, 0, 1, 1);

        pushButtonCancel = new QPushButton(gridLayoutWidget);
        pushButtonCancel->setObjectName("pushButtonCancel");

        gridLayout->addWidget(pushButtonCancel, 0, 1, 1, 1);

        label_pic = new QLabel(centralwidget);
        label_pic->setObjectName("label_pic");
        label_pic->setGeometry(QRect(20, 110, 261, 101));
        label_pic_2 = new QLabel(centralwidget);
        label_pic_2->setObjectName("label_pic_2");
        label_pic_2->setGeometry(QRect(20, 95, 251, 181));
        label_pic_2->setPixmap(QPixmap(QString::fromUtf8(":/pics/login.png")));
        authentification->setCentralWidget(centralwidget);
        menubar = new QMenuBar(authentification);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        authentification->setMenuBar(menubar);
        statusbar = new QStatusBar(authentification);
        statusbar->setObjectName("statusbar");
        authentification->setStatusBar(statusbar);

        retranslateUi(authentification);

        pushButtonSubmit->setDefault(false);


        QMetaObject::connectSlotsByName(authentification);
    } // setupUi

    void retranslateUi(QMainWindow *authentification)
    {
        authentification->setWindowTitle(QCoreApplication::translate("authentification", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("authentification", "Login", nullptr));
        label_2->setText(QCoreApplication::translate("authentification", "Password", nullptr));
        pushButtonSubmit->setText(QCoreApplication::translate("authentification", "Submit", nullptr));
        pushButtonCancel->setText(QCoreApplication::translate("authentification", "Cancel", nullptr));
        label_pic->setText(QString());
        label_pic_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class authentification: public Ui_authentification {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTHENTIFICATION_H
