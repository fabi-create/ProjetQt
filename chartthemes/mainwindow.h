#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QString>
#include "uimain.h"

#include <QMainWindow>
#include <QDate>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow, public UIMain
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    MainWindow(QObject *controller);
    ~MainWindow();

    QString  getFirstName();
      QString getLastName();

      //QString  getdateBirthdate();
        QString getSexe();
         QString getDepartement();
          QString getClasse();
           QString getSession();
           QString getAnnee();
        void reinit();

        void desableUpdateButton();
        void enableUpdateButton();
        void populate(QString firstname, QString lastname,QString sexe,QString departement, QString classe, QString session,QString annee);

private slots:

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H

