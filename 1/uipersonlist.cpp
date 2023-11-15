#include "uipersonlist.h"
#include "ui_uipersonlist.h"

uipersonlist::uipersonlist(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::uipersonlist)
{
    ui->setupUi(this);
}

uipersonlist::uipersonlist(QObject *controller) :
    ui(new Ui::uipersonlist)
{
    ui->setupUi(this);

    connect(ui->pushButtonRetour,SIGNAL(clicked()),controller,SLOT(onClosePersonsListWindow()));
    connect(ui->pushButtonDelete, SIGNAL(clicked()), controller, SLOT(onDeletePerson()));
    connect(ui->pushButtonUpdate, SIGNAL(clicked()), controller, SLOT(onUpdatePerson()));
 connect(ui->pushButtonFind, SIGNAL(clicked()), controller, SLOT(onFindMainWindow()));
}

void uipersonlist::setTableViewModel(PersonModel* model)
{

    ui->tableViewListPersons->setModel(model);
    ui->tableViewListPersons->setSelectionModel(model->getSelectionModel());
    ui->tableViewListPersons->show();
}
int uipersonlist::getRechercher()
{
    return ui->lineEditFind->text().toInt();
}
uipersonlist::~uipersonlist()
{
    delete ui;
}
