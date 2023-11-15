#include "authentification.h"
#include "ui_authentification.h"

authentification::authentification(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::authentification)
{
    ui->setupUi(this);


}

authentification::authentification(QObject *controller):
    ui(new Ui::authentification){
    ui->setupUi(this);
    connect(ui->pushButtonSubmit,SIGNAL(clicked()),controller,SLOT(onSubmitAuthentification()));
    connect(ui->pushButtonCancel,SIGNAL(clicked()),controller,SLOT(onCancelAuthentification()));
}

QString authentification::getLogin()
{
   return ui->lineEditLogin->text();

}


QString authentification::getPassword()
{
   return ui->lineEditPassword->text();

}
authentification::~authentification()
{

    qDebug ("Destruction de la fenêtre d'authentification ...");
    delete ui;
}
void authentification::reinit(){
    ui->lineEditPassword->setText("");
    ui->lineEditLogin->setText("");
}

