#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButtonClose, SIGNAL(clicked()), this , SLOT(closeWindow()));
    connect(ui->pushButtonDisplay, SIGNAL(clicked()), this , SLOT(display()));
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::closeWindow()
{
    bool bCloseWindow(false);
    if (!ui->lineEditFirstName->text().isEmpty()
            || !ui->lineEditLastName->text().isEmpty())

           {
        if (QMessageBox::Yes == QMessageBox::question(this,
                                "Save unchanged data",

                                "The data have changed.Exit anyway ?"))
        {
            bCloseWindow = true;
        }

    }
    if (bCloseWindow)
    {
        close();
    }
}

void MainWindow::display()
{
    QMessageBox::information (this,
                              "Person information",
                              ui->lineEditFirstName->text() + " " + ui->lineEditLastName->text()
                              + " was born in " + ui->comboBoxCountry->currentText()
                              + "on " + ui->dateEditBirthdate->text() + "!");
}
