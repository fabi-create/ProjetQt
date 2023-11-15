#ifndef PARCOURIR_H
#define PARCOURIR_H

#include <QMainWindow>
#include "uimain.h"
#include "themewidget.h"
#include <iostream>


namespace Ui {
class parcourir;
}

class parcourir : public QMainWindow, public UIMain
{
    Q_OBJECT

public:
    explicit parcourir(QWidget *parent = nullptr);
    parcourir(QObject *controller);
        QString getChoix();
        QString getFile();
        void reinit();
        void setfile(QString fi);

    ~parcourir();

private:
    Ui::parcourir *ui;
};

#endif // PARCOURIR_H
