#include "uipersonlist.h"
#include "ui_uipersonlist.h"

UIPersonList::UIPersonList(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::UIPersonList)
{
    ui->setupUi(this);
}


UIPersonList::UIPersonList(QObject *controller) :
    ui(new Ui::UIPersonList)
{
    ui->setupUi(this);

    connect(ui->pushButtonRetour,SIGNAL(clicked()),controller,SLOT(onClosePersonsListWindow()));
    connect(ui->pushButtonDelete, SIGNAL(clicked()), controller, SLOT(onDeletePerson()));
    connect(ui->pushButtonUpdate, SIGNAL(clicked()), controller, SLOT(onUpdatePerson()));

}

void UIPersonList::setTableViewModel(PersonModel* model)
{

    ui->tableViewListPerson->setModel(model);
    ui->tableViewListPerson->setSelectionModel(model->getSelectionModel());
    ui->tableViewListPerson->show();
}


UIPersonList::~UIPersonList()
{
    delete ui;
}
