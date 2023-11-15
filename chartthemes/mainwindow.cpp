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



   connect(ui->pushButtonClose_2,SIGNAL(clicked()),controller,SLOT(onCloseMainWindow()));
    //connect(ui->pushButtonDisplay,SIGNAL(clicked()),controller,SLOT(onDisplayMainWindow()));
    connect(ui->pushButtonCreate,SIGNAL(clicked()),controller,SLOT(onCreatePerson()));
    //connect(ui->pushButtonListEtudiant,SIGNAL(clicked()),controller,SLOT(onDisplayPersonsList()));
   // connect(ui->pushButtonClasse,SIGNAL(clicked()),controller,SLOT(onDisplayPersonsListClasse()));
   connect(ui->pushButtonUpdate,SIGNAL(clicked()),controller,SLOT(onUpdateMainWindow()));

    connect(ui->pushButtonFormat,SIGNAL(clicked()),controller,SLOT(onFormatMainWindow()));
    connect(ui->pushButtonParcourir,SIGNAL(clicked()),controller,SLOT(onParcourir()));
}

QString  MainWindow::getFirstName(){
    return  ui->lineEditFirstName->text();
}
QString MainWindow::getLastName(){
 return ui->lineEditLastName->text();

}

  QString  MainWindow::getSexe(){
  return ui->comboBoxSexe->currentText();
  }

  QString  MainWindow::getDepartement(){
      return  ui->lineEditDepartement->text();
  }
  QString MainWindow::getClasse(){
   return ui->lineEditClasse->text();

  }

    QString  MainWindow::getSession(){
    return ui->lineEditSession->text();
    }

    QString  MainWindow::getAnnee(){
    return ui->lineEditDate->text();
    }

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::reinit() {
    ui->lineEditFirstName->setText("");
    ui->lineEditLastName->setText("");
    ui->comboBoxSexe->setCurrentIndex(0);
    ui->lineEditDepartement->setText("");
    ui->lineEditClasse->setText("");
    ui->lineEditSession->setText("");
    ui->lineEditDate->setText("");


}

void MainWindow::desableUpdateButton(){

    ui->pushButtonUpdate->setEnabled(false);
    ui->pushButtonCreate->setEnabled(true);

}
void MainWindow::enableUpdateButton(){


    ui->pushButtonUpdate->setEnabled(true);
    ui->pushButtonCreate->setEnabled(false);

}
void MainWindow::populate(QString firstname, QString lastname,QString sexe,QString departement, QString classe, QString session,QString annee){

ui->lineEditFirstName->setText(firstname);
ui->lineEditLastName->setText(lastname);
ui->comboBoxSexe->setCurrentText(sexe);
ui->lineEditDepartement->setText(departement);
ui->lineEditClasse->setText(classe);
ui->lineEditSession->setText(session);
ui->lineEditDate->setText(annee);


}
