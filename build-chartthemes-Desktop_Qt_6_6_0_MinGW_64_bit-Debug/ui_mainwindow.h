/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
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

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEditLastName;
    QLabel *label_2;
    QLineEdit *lineEditFirstName;
    QLabel *label_3;
    QComboBox *comboBoxSexe;
    QLineEdit *lineEditDepartement;
    QLabel *label_6;
    QLineEdit *lineEditClasse;
    QLabel *label_7;
    QLineEdit *lineEditSession;
    QLabel *label_5;
    QLabel *label_8;
    QLineEdit *lineEditDate;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButtonCreate;
    QPushButton *pushButtonClose_2;
    QPushButton *pushButtonUpdate;
    QPushButton *pushButtonParcourir;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QPushButton *pushButtonFormat;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *label_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        formLayoutWidget = new QWidget(centralwidget);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(70, 170, 651, 211));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEditLastName = new QLineEdit(formLayoutWidget);
        lineEditLastName->setObjectName("lineEditLastName");

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEditLastName);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEditFirstName = new QLineEdit(formLayoutWidget);
        lineEditFirstName->setObjectName("lineEditFirstName");

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEditFirstName);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        comboBoxSexe = new QComboBox(formLayoutWidget);
        comboBoxSexe->addItem(QString());
        comboBoxSexe->addItem(QString());
        comboBoxSexe->setObjectName("comboBoxSexe");

        formLayout->setWidget(2, QFormLayout::FieldRole, comboBoxSexe);

        lineEditDepartement = new QLineEdit(formLayoutWidget);
        lineEditDepartement->setObjectName("lineEditDepartement");

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEditDepartement);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName("label_6");

        formLayout->setWidget(4, QFormLayout::LabelRole, label_6);

        lineEditClasse = new QLineEdit(formLayoutWidget);
        lineEditClasse->setObjectName("lineEditClasse");

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEditClasse);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName("label_7");

        formLayout->setWidget(5, QFormLayout::LabelRole, label_7);

        lineEditSession = new QLineEdit(formLayoutWidget);
        lineEditSession->setObjectName("lineEditSession");

        formLayout->setWidget(5, QFormLayout::FieldRole, lineEditSession);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName("label_5");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_5);

        label_8 = new QLabel(formLayoutWidget);
        label_8->setObjectName("label_8");

        formLayout->setWidget(6, QFormLayout::LabelRole, label_8);

        lineEditDate = new QLineEdit(formLayoutWidget);
        lineEditDate->setObjectName("lineEditDate");

        formLayout->setWidget(6, QFormLayout::FieldRole, lineEditDate);

        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(80, 420, 657, 26));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonCreate = new QPushButton(gridLayoutWidget);
        pushButtonCreate->setObjectName("pushButtonCreate");

        gridLayout->addWidget(pushButtonCreate, 0, 2, 1, 1);

        pushButtonClose_2 = new QPushButton(gridLayoutWidget);
        pushButtonClose_2->setObjectName("pushButtonClose_2");

        gridLayout->addWidget(pushButtonClose_2, 0, 0, 1, 1);

        pushButtonUpdate = new QPushButton(gridLayoutWidget);
        pushButtonUpdate->setObjectName("pushButtonUpdate");

        gridLayout->addWidget(pushButtonUpdate, 0, 1, 1, 1);

        pushButtonParcourir = new QPushButton(gridLayoutWidget);
        pushButtonParcourir->setObjectName("pushButtonParcourir");

        gridLayout->addWidget(pushButtonParcourir, 0, 3, 1, 1);

        gridLayoutWidget_2 = new QWidget(centralwidget);
        gridLayoutWidget_2->setObjectName("gridLayoutWidget_2");
        gridLayoutWidget_2->setGeometry(QRect(70, 30, 651, 31));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButtonFormat = new QPushButton(gridLayoutWidget_2);
        pushButtonFormat->setObjectName("pushButtonFormat");

        gridLayout_2->addWidget(pushButtonFormat, 0, 0, 1, 1);

        formLayoutWidget_2 = new QWidget(centralwidget);
        formLayoutWidget_2->setObjectName("formLayoutWidget_2");
        formLayoutWidget_2->setGeometry(QRect(70, 100, 651, 44));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName("formLayout_2");
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(formLayoutWidget_2);
        label_4->setObjectName("label_4");

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_4);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Nom", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Pr\303\251nom(s)", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Genre", nullptr));
        comboBoxSexe->setItemText(0, QCoreApplication::translate("MainWindow", "M", nullptr));
        comboBoxSexe->setItemText(1, QCoreApplication::translate("MainWindow", "F", nullptr));

        label_6->setText(QCoreApplication::translate("MainWindow", "Classe", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Session", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Departement", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Annee", nullptr));
        pushButtonCreate->setText(QCoreApplication::translate("MainWindow", "Create", nullptr));
        pushButtonClose_2->setText(QCoreApplication::translate("MainWindow", "Close", nullptr));
        pushButtonUpdate->setText(QCoreApplication::translate("MainWindow", "Update", nullptr));
        pushButtonParcourir->setText(QCoreApplication::translate("MainWindow", "Parcourir", nullptr));
        pushButtonFormat->setText(QCoreApplication::translate("MainWindow", "Passer au choix du format", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "VEUILLEZ     ENREGISTRER   LES   INFORMATIONS   CONCERNANT   UN   ETUDIANT   ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
