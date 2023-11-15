/*
#include "find.h"
#include "ui_find.h"

Find::Find(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Find)
{
    ui->setupUi(this);
}


Find::Find(QObject *controller) :
    ui(new Ui::Find)
{
    ui->setupUi(this);

    connect(ui->pushButtonOk,SIGNAL(clicked()),controller,SLOT(onFindPerson()));
    connect(ui->pushButtonCancel, SIGNAL(clicked()), controller, SLOT(onNotFindPerson()));


}

void Find::setTableViewModel(PersonModel* model)
{

    ui->tableViewFind->setModel(model);
    ui->tableViewFind->setSelectionModel(model->getSelectionModel());
    ui->tableViewFind->show();
}

Find::~Find()
{
    delete ui;
}
*/
