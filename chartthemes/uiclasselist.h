#ifndef UICLASSELIST_H
#define UICLASSELIST_H

#include <QMainWindow>
#include "uimain.h"
#include "personmodel.h"

namespace Ui {
class uiclasselist;
}

class uiclasselist : public QMainWindow,public UIMain
{
    Q_OBJECT

public:
    explicit uiclasselist(QWidget *parent = nullptr);
    uiclasselist(QObject *controller);
     void setTableViewModel(PersonModel* model);
     QString getRechercherLaClasse();


    ~uiclasselist();


private:
    Ui::uiclasselist *ui;
};



#endif // UICLASSELIST_H

