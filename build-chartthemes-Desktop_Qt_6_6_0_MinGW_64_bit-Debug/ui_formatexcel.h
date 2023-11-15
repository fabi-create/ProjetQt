/********************************************************************************
** Form generated from reading UI file 'formatexcel.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMATEXCEL_H
#define UI_FORMATEXCEL_H

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

class Ui_pushButtonFormat
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButtonFormat_2;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QPushButton *pushButtonImporter;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *pushButtonFormat)
    {
        if (pushButtonFormat->objectName().isEmpty())
            pushButtonFormat->setObjectName("pushButtonFormat");
        pushButtonFormat->resize(800, 600);
        centralwidget = new QWidget(pushButtonFormat);
        centralwidget->setObjectName("centralwidget");
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(170, 50, 511, 26));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonFormat_2 = new QPushButton(gridLayoutWidget);
        pushButtonFormat_2->setObjectName("pushButtonFormat_2");

        gridLayout->addWidget(pushButtonFormat_2, 0, 0, 1, 1);

        formLayoutWidget = new QWidget(centralwidget);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(170, 130, 511, 31));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit = new QLineEdit(formLayoutWidget);
        lineEdit->setObjectName("lineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        gridLayoutWidget_2 = new QWidget(centralwidget);
        gridLayoutWidget_2->setObjectName("gridLayoutWidget_2");
        gridLayoutWidget_2->setGeometry(QRect(170, 180, 511, 26));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButtonImporter = new QPushButton(gridLayoutWidget_2);
        pushButtonImporter->setObjectName("pushButtonImporter");

        gridLayout_2->addWidget(pushButtonImporter, 0, 0, 1, 1);

        pushButtonFormat->setCentralWidget(centralwidget);
        menubar = new QMenuBar(pushButtonFormat);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        pushButtonFormat->setMenuBar(menubar);
        statusbar = new QStatusBar(pushButtonFormat);
        statusbar->setObjectName("statusbar");
        pushButtonFormat->setStatusBar(statusbar);

        retranslateUi(pushButtonFormat);

        QMetaObject::connectSlotsByName(pushButtonFormat);
    } // setupUi

    void retranslateUi(QMainWindow *pushButtonFormat)
    {
        pushButtonFormat->setWindowTitle(QCoreApplication::translate("pushButtonFormat", "MainWindow", nullptr));
        pushButtonFormat_2->setText(QCoreApplication::translate("pushButtonFormat", "CHOIX DU FORMAT", nullptr));
        label->setText(QCoreApplication::translate("pushButtonFormat", "Parcourir", nullptr));
        pushButtonImporter->setText(QCoreApplication::translate("pushButtonFormat", "Cliquez pour importer le fichier", nullptr));
    } // retranslateUi

};

namespace Ui {
    class pushButtonFormat: public Ui_pushButtonFormat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMATEXCEL_H
