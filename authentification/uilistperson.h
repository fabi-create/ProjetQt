#ifndef UILISTPERSON_H
#define UILISTPERSON_H

#include <QMainWindow>

namespace Ui {
class UIListPerson;
}

class UIListPerson : public QMainWindow
{
    Q_OBJECT

public:
    explicit UIListPerson(QWidget *parent = nullptr);
    ~UIListPerson();

private:
    Ui::UIListPerson *ui;
};

#endif // UILISTPERSON_H
