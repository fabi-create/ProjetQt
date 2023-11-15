/********************************************************************************
** Form generated from reading UI file 'themewidget.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THEMEWIDGET_H
#define UI_THEMEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ThemeWidgetForm
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *themeLabel;
    QComboBox *themeComboBox;
    QLabel *animatedLabel;
    QComboBox *animatedComboBox;
    QLabel *legendLabel;
    QComboBox *legendComboBox;
    QCheckBox *antialiasCheckBox;
    QSpacerItem *horizontalSpacer;
    QComboBox *comboBoxSort;
    QPushButton *pushButtonListEtudiant;
    QPushButton *pushButtonRetour;

    void setupUi(QWidget *ThemeWidgetForm)
    {
        if (ThemeWidgetForm->objectName().isEmpty())
            ThemeWidgetForm->setObjectName("ThemeWidgetForm");
        ThemeWidgetForm->resize(900, 600);
        gridLayout = new QGridLayout(ThemeWidgetForm);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        themeLabel = new QLabel(ThemeWidgetForm);
        themeLabel->setObjectName("themeLabel");

        horizontalLayout->addWidget(themeLabel);

        themeComboBox = new QComboBox(ThemeWidgetForm);
        themeComboBox->setObjectName("themeComboBox");

        horizontalLayout->addWidget(themeComboBox);

        animatedLabel = new QLabel(ThemeWidgetForm);
        animatedLabel->setObjectName("animatedLabel");

        horizontalLayout->addWidget(animatedLabel);

        animatedComboBox = new QComboBox(ThemeWidgetForm);
        animatedComboBox->setObjectName("animatedComboBox");

        horizontalLayout->addWidget(animatedComboBox);

        legendLabel = new QLabel(ThemeWidgetForm);
        legendLabel->setObjectName("legendLabel");

        horizontalLayout->addWidget(legendLabel);

        legendComboBox = new QComboBox(ThemeWidgetForm);
        legendComboBox->setObjectName("legendComboBox");

        horizontalLayout->addWidget(legendComboBox);

        antialiasCheckBox = new QCheckBox(ThemeWidgetForm);
        antialiasCheckBox->setObjectName("antialiasCheckBox");
        antialiasCheckBox->setChecked(false);

        horizontalLayout->addWidget(antialiasCheckBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        comboBoxSort = new QComboBox(ThemeWidgetForm);
        comboBoxSort->addItem(QString());
        comboBoxSort->addItem(QString());
        comboBoxSort->addItem(QString());
        comboBoxSort->addItem(QString());
        comboBoxSort->setObjectName("comboBoxSort");

        horizontalLayout->addWidget(comboBoxSort);

        pushButtonListEtudiant = new QPushButton(ThemeWidgetForm);
        pushButtonListEtudiant->setObjectName("pushButtonListEtudiant");

        horizontalLayout->addWidget(pushButtonListEtudiant);

        pushButtonRetour = new QPushButton(ThemeWidgetForm);
        pushButtonRetour->setObjectName("pushButtonRetour");

        horizontalLayout->addWidget(pushButtonRetour);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 3);


        retranslateUi(ThemeWidgetForm);
        QObject::connect(themeComboBox, SIGNAL(currentIndexChanged(int)), ThemeWidgetForm, SLOT(updateUI()));
        QObject::connect(antialiasCheckBox, SIGNAL(toggled(bool)), ThemeWidgetForm, SLOT(updateUI()));
        QObject::connect(legendComboBox, SIGNAL(currentIndexChanged(int)), ThemeWidgetForm, SLOT(updateUI()));
        QObject::connect(animatedComboBox, SIGNAL(currentIndexChanged(int)), ThemeWidgetForm, SLOT(updateUI()));

        QMetaObject::connectSlotsByName(ThemeWidgetForm);
    } // setupUi

    void retranslateUi(QWidget *ThemeWidgetForm)
    {
        themeLabel->setText(QCoreApplication::translate("ThemeWidgetForm", "Theme:", nullptr));
        animatedLabel->setText(QCoreApplication::translate("ThemeWidgetForm", "Animation:", nullptr));
        legendLabel->setText(QCoreApplication::translate("ThemeWidgetForm", "Legend:", nullptr));
        antialiasCheckBox->setText(QCoreApplication::translate("ThemeWidgetForm", "Anti-aliasing", nullptr));
        comboBoxSort->setItemText(0, QCoreApplication::translate("ThemeWidgetForm", "sexe", nullptr));
        comboBoxSort->setItemText(1, QCoreApplication::translate("ThemeWidgetForm", "departement", nullptr));
        comboBoxSort->setItemText(2, QCoreApplication::translate("ThemeWidgetForm", "classe", nullptr));
        comboBoxSort->setItemText(3, QCoreApplication::translate("ThemeWidgetForm", "session", nullptr));

        pushButtonListEtudiant->setText(QCoreApplication::translate("ThemeWidgetForm", "Liste Etudiant", nullptr));
        pushButtonRetour->setText(QCoreApplication::translate("ThemeWidgetForm", "Retour", nullptr));
        (void)ThemeWidgetForm;
    } // retranslateUi

};

namespace Ui {
    class ThemeWidgetForm: public Ui_ThemeWidgetForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THEMEWIDGET_H
