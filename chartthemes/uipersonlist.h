#ifndef UIPERSONLIST_H
#define UIPERSONLIST_H

#include <QMainWindow>
#include "uimain.h"
#include "personmodel.h"

namespace Ui {
class uipersonlist;
}

class uipersonlist : public QMainWindow,public UIMain
{
    Q_OBJECT

public:
    explicit uipersonlist(QWidget *parent = nullptr);
   uipersonlist(QObject *controller);
    void setTableViewModel(PersonModel* model);
    QString getRechercher();

    ~uipersonlist();

private:
    Ui::uipersonlist *ui;
};

#endif // UIPERSONLIST_H
