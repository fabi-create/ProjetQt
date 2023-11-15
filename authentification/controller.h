#ifndef CONTROLLER_H
#define CONTROLLER_H
#include "authentification.h"
#include "mainwindow.h"
#include "usermodel.h"
#include "personmodel.h"
#include"uipersonlist.h"
#include"find.h"

#include <QMessageBox>
#include <QObject>

class Controller : public QObject
{
    Q_OBJECT

private:
    /* Le controleur dispose des références
     * aux fenêtres qu'il gère.
     */
    authentification* Authentification;
    MainWindow* mainWindow;
    UserModel *userModel;
    PersonModel *personModel;
    UIPersonList *personList;
    Find *personFind;
public:
    explicit Controller(QObject *parent = nullptr);
    ~Controller();
    void execute ();

private slots:
    // Les slots de la fenêtre MainWindow
    void onCloseMainWindow();
    void onDisplayMainWindow();

    void onCreatePerson();
    void onDisplayPersonsList();
   void onUpdateMainWindow();
   void onFindMainWindow();
    // Les slots de la gestion de la liste
    void onClosePersonsListWindow();
    void onDeletePerson() ;
     void onUpdatePerson();
     // Les slots de la gestion de la recherche
     void onFindPerson();
     void onNotFindPerson();


    // Les slots de la fenêtre Authentification
    void onSubmitAuthentification();
    void onCancelAuthentification();
signals:

};

#endif // CONTROLLER_H


