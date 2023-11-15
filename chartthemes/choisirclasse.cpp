#include "choisirclasse.h"
#include "ui_choisirclasse.h"

choisirclasse::choisirclasse(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::choisirclasse)
{
    ui->setupUi(this);
}

choisirclasse::~choisirclasse()
{
    delete ui;
}
