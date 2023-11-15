#ifndef CHOISIRCLASSE_H
#define CHOISIRCLASSE_H

#include <QMainWindow>

namespace Ui {
class choisirclasse;
}

class choisirclasse : public QMainWindow
{
    Q_OBJECT

public:
    explicit choisirclasse(QWidget *parent = nullptr);
    ~choisirclasse();

private:
    Ui::choisirclasse *ui;
};

#endif // CHOISIRCLASSE_H
