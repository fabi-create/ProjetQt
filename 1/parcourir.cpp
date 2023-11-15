#include "parcourir.h"
#include "ui_parcourir.h"


parcourir::parcourir(QWidget *parent) :
   QMainWindow(parent),
    ui(new Ui::parcourir)
{
    ui->setupUi(this);
}
parcourir::parcourir(QObject *controller)
    : ui(new Ui::parcourir)
{
    ui->setupUi(this);
      connect(ui->pushButtonChoisir, SIGNAL(clicked()), controller, SLOT(choisir()));
     connect(ui->pushButtonEnregistrer, SIGNAL(clicked()), controller, SLOT(enregistrer()));
    connect(ui->pushButtonClose, SIGNAL(clicked()), controller, SLOT(close()));
    connect(ui->pushButtonDisplay,SIGNAL(clicked()),controller,SLOT(onDisplayParcourir()));
}
parcourir::~parcourir()
{
    delete ui;
}
QString parcourir::getFile(){
    return   ui->lineEdit->text();
}
void parcourir::setfile(QString fi){
    ui->lineEdit->setText(fi);

}

void parcourir::reinit() {
    ui->lineEdit->setText("");
}
