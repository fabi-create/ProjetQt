/*
#ifndef PERSONSLIST_H
#define PERSONSLIST_H
#include <QMainWindow>
#include "uimain.h"
#include "personmodel.h"

namespace Ui {
class PersonsList;
}

class PersonsList
        : public QMainWindow, public UIMain
{
    Q_OBJECT

public:
    explicit PersonsList(QWidget *parent = nullptr);
    PersonsList(QObject *controller);
    void setTableViewModel(PersonModel* model);
    ~PersonsList();

private:
    Ui::PersonsList *ui;
};

#endif // PERSONSLIST_H



*/
