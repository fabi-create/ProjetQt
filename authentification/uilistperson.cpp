#include "uilistperson.h"
#include "ui_uilistperson.h"

UIListPerson::UIListPerson(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::UIListPerson)
{
    ui->setupUi(this);
}

UIListPerson::~UIListPerson()
{
    delete ui;
}
