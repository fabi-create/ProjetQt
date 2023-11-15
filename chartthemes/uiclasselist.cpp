#include "uiclasselist.h"
#include "ui_uiclasselist.h"

uiclasselist::uiclasselist(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::uiclasselist)
{
    ui->setupUi(this);
}


uiclasselist::uiclasselist(QObject *controller) :
    ui(new Ui::uiclasselist)
{
    ui->setupUi(this);

    connect(ui->pushButtonRetourClasse,SIGNAL(clicked()),controller,SLOT(onCloseClasseListWindow()));
    connect(ui->pushButtonDeleteClasse, SIGNAL(clicked()), controller, SLOT(onDeletePersonClasse()));
    connect(ui->pushButtonUpdateClasse, SIGNAL(clicked()), controller, SLOT(onUpdatePersonClasse()));
  //  connect(ui->pushButtonFindClasse, SIGNAL(clicked()), controller, SLOT(onFindClasse()));
}

void uiclasselist::setTableViewModel(PersonModel* model)
{

    ui->tableViewListClasse->setModel(model);
    ui->tableViewListClasse->setSelectionModel(model->getSelectionModel());
    ui->tableViewListClasse->show();
}
/*
QString uiclasselist::getRechercherLaClasse(){

     return ui->lineEdit->text();


}
*/

uiclasselist::~uiclasselist()
{
    delete ui;
}



