#include "controller.h"

Controller::Controller(QObject *parent) :
    QObject(parent), Authentification(nullptr),
    mainWindow(nullptr),
    userModel(new UserModel()), personModel(new PersonModel()),personList(nullptr),personFind(nullptr)

{qDebug("Lancement du controller ...");}


/*
void Controller::onCloseMainWindow(){

    bool bCloseWindow (false);

    if (!mainWindow->getFirstName().isEmpty() ||
            !mainWindow->getLastName().isEmpty())
    {
        if (QMessageBox::Yes ==
                mainWindow->question(
                    "Save unchanged data",
                    "The data have changed. Exit anyway ?"))
        {
            bCloseWindow = true;
        }
    }
    if(0 == mainWindow->question(mainWindow,
                             "Confirmation de sortie",
                             "Vos données ne sont peut-être pas sauvegarder. Voulez-vous quand même sortir ?")) {
        bCloseWindow = true;
    }





    if(bCloseWindow) {
        mainWindow->close();
        mainWindow = nullptr;

        Authentification->show();
    }
}
*/

void Controller::onCloseMainWindow()
{
    if (true == mainWindow->question(
                "Exit Edit Person Window confirmation",
                "Voulez-vous vraiment quitter la fenêtre d'édition ?"))
    {
        mainWindow->close();

        Authentification->reinit();
        Authentification->show();
    }
}




void Controller::onDisplayMainWindow()
{
    mainWindow->information(
            "Person information",
            mainWindow->getFirstName() + " " +
            mainWindow->getLastName() + " was born in " +
            mainWindow->getCountry() + " on " +
            mainWindow->getdateBirthdate() + " !");
}
/*
void Controller::onCancelAuthentification()
{
    if (QMessageBox::Yes ==
                    mainWindow->question(Authentification,
                        "Confirmation de sortie",
                        "Voulez-vous vraiment quitter l'application ?"))
    {
        Authentification->close();
        Authentification= nullptr;
    }
}
*/
void Controller::onCancelAuthentification()
{
    if (true == mainWindow->question("Confirmation de sortie",
                        "Voulez-vous vraiment quitter l'application ?"))
    {
        Authentification->close();
    }
}



void Controller::onSubmitAuthentification()

{
    QString login=Authentification->getLogin();
    QString password=Authentification->getPassword();

    bool status=userModel->readBy(login, password);

    if (status== false)
    {
        Authentification->information( "Authentification", "Welcome to my first Qt Application !");

               mainWindow = new MainWindow (this);
               mainWindow->desableUpdateButton();
                mainWindow->show();


                Authentification->hide();

    }
    else
    {
        Authentification->warning( "Bad", "Incorrect Login/Password, please try again !");
    }
}

/*
void Controller::onSubmitAuthentification()
{
    QString login = Authentification->getLogin();
    QString password = Authentification->getPassword();

    bool status = userModel->readBy(login, password);
    if (status == true)
    {
        mainWindow = new MainWindow (this);
        mainWindow->show();

        Authentification->hide();
    }
    else
    {
        Authentification->warning("Authentification",
                                  "Incorrect Login/Password, please try again !");
    }
}
*/

void Controller::execute()
{
    Authentification = new authentification(this);
    Authentification->show();
}


Controller::~Controller() {
       qDebug ("Destruction du controller ...");
    if(mainWindow != nullptr) delete mainWindow;

    if(Authentification != nullptr) delete Authentification;

    if(userModel != nullptr) delete userModel;

    if(personModel != nullptr) delete  personModel;

    if(personList != nullptr) delete personList;
    if(personFind != nullptr) delete personFind;

    DBAccess::release();
}

/*
void Controller::onCreatePerson() {
    if(!mainWindow->getFirstName().isEmpty() && !mainWindow->getLastName().isEmpty()
            && !mainWindow->getCountry().isEmpty() && !mainWindow->getdateBirthdate().isEmpty()) {
        Person person(
            mainWindow->getFirstName(),
            mainWindow->getLastName(),
            mainWindow->getCountry(),
            mainWindow->getdateBirthdate()
        );

        personModel->create(person);

        qDebug("Creation faite");

        mainWindow->information(mainWindow, "Félicitations", "Person ajoutée avec succèss");
        mainWindow->clearDatas();
    }
}
*/

void Controller::onCreatePerson()
{
    QString firstname = mainWindow->getFirstName();
    QString lastname = mainWindow->getLastName();

    if (firstname.isEmpty() || lastname.isEmpty())
    {
        mainWindow->information("Ajout d'une nouvelle Person",
                            "Veuillez renseigner tous les champs svp.");
    }
    else
    {
        QString country = mainWindow->getCountry();
        QString birthdate = mainWindow->getdateBirthdate();

        Person person(firstname,lastname,country,birthdate);
        personModel->create(person);

        mainWindow->information("Ajout d'une nouvelle Person", "Ajout réussie.");
        mainWindow->reinit();
    }
}
/*
void Controller::onDisplayPersonsList() {
    mainWindow->hide();

    personsList = new PersonsList(this);
    personsList->setTableViewModel(personModel);
    personsList->show();
    personsList->readAll();
}
*/
void Controller::onDisplayPersonsList()
{
    mainWindow->hide();

    personList = new UIPersonList(this);
    personList->setTableViewModel(personModel);

    personModel->readAll();

    personList->show();
}

/*
void Controller::onClosePersonsListWindow() {
    personsList->close();
    personsList = nullptr;
    qDebug("Fermeture de la fenêtre");
}
*/
void Controller::onClosePersonsListWindow()
{
    if (personList->question("Suppression",
           "Vouliez vous revenir en arriere ?"))
    {
        personList->close();

        mainWindow->reinit();
        mainWindow->show();
    }
}

void Controller::onDeletePerson() {
    qDebug("Suppression de la personne");

    if (personList->question("Suppression",
              "Etes-vous sûr de vouloir supprimer ?"))
       {
           personModel->remove();
       }
}

void Controller::onUpdatePerson() {
    qDebug("Update de la personne");
    personList->close();

    mainWindow->enableUpdateButton();
  mainWindow->show();

        QModelIndex index = personModel->getSelectionModel()->currentIndex();

        if(index.isValid()){
    int ligne = index.row();
    //QString id = personModel->record(ligne).field(0).value().toInt();
    QString firstname = personModel->record(ligne).field(1).value().toString();
    QString lastname = personModel->record(ligne).field(2).value().toString();
    QString country = personModel->record(ligne).field(3).value().toString();
    QString birthdateStr = personModel->record(ligne).field(4).value().toString();
    QDate birthdate = QDate::fromString(birthdateStr,"dd/MM/yyyy");

    mainWindow->populate(firstname, lastname, country, birthdate);
}
}

void Controller::onUpdateMainWindow(){

    QString firstname = mainWindow->getFirstName();
    QString lastname = mainWindow->getLastName();

    if (firstname.isEmpty() || lastname.isEmpty())
    {
        mainWindow->information("Mise a jour d'une nouvelle Person",
                            "Mise a jour .");
    }
    else
    {
        QString country = mainWindow->getCountry();
        QString birthdate = mainWindow->getdateBirthdate();


        QModelIndex index = personModel->getSelectionModel()->currentIndex();
        int id = personModel->record(index.row()).field(0).value().toInt();
        Person person(id,firstname,lastname,country,birthdate);
        personModel->update(person);

        mainWindow->information("Mise a jour d'une nouvelle Person", "Mise a jour.");
        mainWindow->reinit();
    }


}

void Controller::onFindMainWindow(){


    mainWindow->hide();

    personFind = new Find(this);
    personFind->setTableViewModel(personModel);

    personModel->readOnly();

    personFind->show();


}

void Controller::onFindPerson(){

    qDebug("Recherche de la personne");

    if (personFind->question("Recherche",
              "Etes-vous sûr que cette personne correspond a celle rechercher?"))
       {
           personModel->onFindPerson();
       }
    /*
    if (QMessageBox::Yes ==
                    personFind->question(PersonModel,
                        "Confirmation de sortie",
                        "Etes-vous sûr que cette personne correspond a celle rechercher? ?"))
    {
        PersonModel->close();
        PersonModel= nullptr;
    }

    */

}
void Controller::onNotFindPerson(){

    if (personFind->question("Retour",
           "Vouliez vous revenir en arriere ?"))
    {
        personFind->close();

        mainWindow->reinit();
        mainWindow->show();
    }
 }
