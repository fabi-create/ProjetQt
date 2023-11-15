#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}
MainWindow::MainWindow(QObject *controller):
    ui(new Ui::MainWindow){

    ui->setupUi(this);

    connect(ui->pushButtonClose,SIGNAL(clicked()),controller,SLOT(onCloseMainWindow()));
    connect(ui->pushButtonDisplay,SIGNAL(clicked()),controller,SLOT(onDisplayMainWindow()));
    connect(ui->pushButtonCreate,SIGNAL(clicked()),controller,SLOT(onCreatePerson()));
    connect(ui->pushButtonList,SIGNAL(clicked()),controller,SLOT(onDisplayPersonsList()));
    connect(ui->pushButtonUpdate,SIGNAL(clicked()),controller,SLOT(onUpdateMainWindow()));
    connect(ui->pushButtonFind,SIGNAL(clicked()),controller,SLOT(onFindMainWindow()));
}

QString  MainWindow::getFirstName(){
    return  ui->lineEditFirstName->text();
}
QString MainWindow::getLastName(){
 return ui->lineEditLastName->text();

}

  QString  MainWindow::getCountry(){
  return ui->comboBoxCountry->currentText();
  }
  QString MainWindow::getdateBirthdate(){
    return ui->dateEditBirthdate->text();
  }


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::reinit() {
    ui->lineEditFirstName->setText("");
    ui->lineEditLastName->setText("");
    ui->comboBoxCountry->setCurrentIndex(0);
    ui->dateEditBirthdate->setDate(QDate(2000, 01, 01));

}
void MainWindow::desableUpdateButton(){

    ui->pushButtonUpdate->setEnabled(false);
    ui->pushButtonCreate->setEnabled(true);

}
void MainWindow::enableUpdateButton(){


    ui->pushButtonUpdate->setEnabled(true);
    ui->pushButtonCreate->setEnabled(false);

}
void MainWindow::populate(QString firstname, QString lastname, QString country, QDate birthdate){

ui->lineEditFirstName->setText(firstname);
ui->lineEditLastName->setText(lastname);
ui->comboBoxCountry->setCurrentText(country);
ui->dateEditBirthdate->setDate(birthdate);

}
