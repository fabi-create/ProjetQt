/*
#include "personslist.h"
#include "ui_personslist.h"

PersonsList::PersonsList(QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::PersonsList)
{
    ui->setupUi(this);

}

PersonsList::PersonsList(QObject *controller)
    : ui(new Ui::PersonsList)
{
    ui->setupUi(this);
    connect(ui->pushButtonBack, SIGNAL(clicked()), controller, SLOT(onClosePersonsListWindow()));
    connect(ui->pushButtonDelete, SIGNAL(clicked()), controller, SLOT(onDeletePerson()));
    connect(ui->pushButtonUpdate, SIGNAL(clicked()), controller, SLOT(onUpdatePerson()));


}


void PersonsList::setTableViewModel(PersonModel* model)
{

    ui->tableViewListPersons->setModel(model);
    ui->tableViewListPersons->setSelectionModel(model->getSelectionModel());
    ui->tableViewListPersons->show();
}


PersonsList::~PersonsList()
{
    delete ui;
}





*/
