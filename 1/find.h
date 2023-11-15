/*#ifndef FIND_H
#define FIND_H
#include <QMainWindow>
#include "uimain.h"
#include "personmodel.h"

namespace Ui {
class Find;
}

class Find : public QMainWindow, public UIMain
{
    Q_OBJECT

public:
    explicit Find(QWidget *parent = nullptr);
    Find(QObject *controller);
    void setTableViewModel(PersonModel* model);
    ~Find();

private:
    Ui::Find *ui;
};

#endif // FIND_H
