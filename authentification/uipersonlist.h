#ifndef UIPERSONLIST_H
#define UIPERSONLIST_H
#include <QMainWindow>
#include "uimain.h"
#include "personmodel.h"

namespace Ui {
class UIPersonList;
}

class UIPersonList : public QMainWindow, public UIMain
{
    Q_OBJECT

public:
    explicit UIPersonList(QWidget *parent = nullptr);
    UIPersonList(QObject *controller);
    void setTableViewModel(PersonModel* model);
    ~UIPersonList();

private:
    Ui::UIPersonList *ui;
};

#endif // UIPERSONLIST_H
