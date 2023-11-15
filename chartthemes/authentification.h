#ifndef AUTHENTIFICATION_H
#define AUTHENTIFICATION_H

#include <QMainWindow>

#include <QMessageBox>

#include <QString>
#include "mainwindow.h"
#include "uimain.h"
#include <iostream>
namespace Ui {
class authentification;
}

class authentification : public QMainWindow, public UIMain
{
    Q_OBJECT

public:
    explicit authentification(QWidget *parent = nullptr);
    authentification(QObject *controller);
    ~authentification();
    QString getLogin();
    QString getPassword();

    void reinit ();
private:
    Ui::authentification *ui;
};

#endif // AUTHENTIFICATION_H

