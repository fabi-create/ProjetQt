#include "controller.h"
//#include <QMessageBox>
//#include <QInputDialog>
//#include <QDebug>
Controller::Controller(QObject *parent) :
    QObject(parent), Authentification(nullptr),
    mainWindow(nullptr),
    userModel(new UserModel()), personModel(new PersonModel()), Parcourir(nullptr), themeWidget(nullptr), personList(nullptr),classelist(nullptr)
  //personFind(nullptr)

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


void Controller::onFormatMainWindow(){

    if (true == mainWindow->question(
                "Exit Edit Person Window confirmation",
                "Utiliser Excel ?"))
    {
      Formatexcel form;
      form.CreateFileExcel();



    }

}

void Controller::onParcourir(){


    if (true == mainWindow->question(
                "Exit Edit Person Window confirmation",
                "Voulez-vous passer a la fenetre pour choisir le fichier ?"))
    {
        mainWindow->close();
       Parcourir = new parcourir(this);

        Parcourir->show();
    }

}
void Controller::choisir(){

QString file = QFileDialog::getOpenFileName(nullptr,"Ouvrir une fenetre");


Parcourir->setfile(file);

}
void Controller::enregistrer(){

    QString file=Parcourir->getFile();
        QXlsx::Document xlsx(file);
            if (xlsx.load())
            {
                qDebug("Fichier bien chargé");
                // Obtenir la première feuille de calcul dans le fichier Excel
                // Lire la valeur de la cellule A1
                QXlsx::Worksheet *worksheet = xlsx.currentWorksheet();
                       // Récupération des données de la feuille courante
                       int rows = worksheet->dimension().rowCount();
                       for(int i=2; i<=rows; i++) {

                               QVariant cellValue1 = worksheet->read(i,1);
                               QVariant cellValue2 = worksheet->read(i,2);
                               QVariant cellValue3 = worksheet->read(i,3);
                               QVariant cellValue4 = worksheet->read(i,4);
                               QVariant cellValue5 = worksheet->read(i,5);
                               QVariant cellValue6 = worksheet->read(i,6);
                                 QVariant cellValue7 = worksheet->read(i,7);

                               Person person(cellValue1.toString(),cellValue2.toString(),cellValue3.toString(),cellValue4.toString(),cellValue5.toString(),cellValue6.toString(),cellValue7.toString());

                               personModel->create(person);

                       }
                       Parcourir->information("Confirmation","Les étudiants ont été bien enregistrés");
                      Parcourir->show();

            }
            else
            {
                qDebug() << "Impossible d'ouvrir le fichier Excel.";
            }

}
void Controller::close(){

    if (true == Parcourir->question(
                "Exit Edit Person Window confirmation",
                "Voulez-vous vraiment quitter la fenêtre d'importation du fichier?"))
    {
        Parcourir->close();

       mainWindow->reinit();
        mainWindow->show();
    }



}

void Controller::onDisplayParcourir()
{

    if (true == Parcourir->question(
                "Exit Edit Person Window confirmation",
                "Voulez-vous passer a l'etape liste et statistique ?"))
    {
        Parcourir->close();

       themeWidget = new ThemeWidget(this);

        themeWidget->show();
    }

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

    if(Parcourir != nullptr) delete Parcourir ;

    if(themeWidget != nullptr) delete themeWidget ;

    if(personList != nullptr) delete personList;
   if(classelist != nullptr) delete classelist;
    /*
    if(personFind != nullptr) delete personFind;
    */

    DBAccess::release();
}

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
        QString sexe = mainWindow->getSexe();
        QString departement = mainWindow->getDepartement();
        QString classe = mainWindow->getClasse();
        QString session = mainWindow->getSession();
        QString annee = mainWindow->getAnnee();

        Person person(firstname,lastname,sexe,departement,classe,session,annee);
        personModel->create(person);

        mainWindow->information("Ajout d'une nouvelle Person", "Ajout réussie.");
        mainWindow->reinit();
    }
}


void Controller::onDisplayPersonsList()
{
    themeWidget->hide();

   personList = new uipersonlist(this);
   personList->setTableViewModel(personModel);

    personModel->readAll();

    personList->show();
}
/*
void Controller::onDisplayPersonsListClasse(){

    themeWidget->hide();

   classelist = new uiclasselist(this);
   classelist->setTableViewModel(personModel);

    personModel->readAll();

    classelist->show();

*
}
*/
void Controller::onDisplayPersonsListClasse(){

if (true == themeWidget->question("Confirmation de sortie",
                    "Voulez-vous vraiment sortir ?"))
{
    themeWidget->close();
    Authentification->show();
}
}
void Controller::onClosePersonsListWindow()
{
    if (personList->question("Suppression",
           "Vouliez vous revenir en arriere ?"))
    {
        personList->close();

     //   themeWidget->reinit();
        themeWidget->show();
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
    QString sexe = personModel->record(ligne).field(3).value().toString();
    QString departement = personModel->record(ligne).field(4).value().toString();
    QString classe= personModel->record(ligne).field(5).value().toString();
    QString session= personModel->record(ligne).field(6).value().toString();
    QString annee = personModel->record(ligne).field(7).value().toString();

    mainWindow->populate( firstname,lastname,sexe,departement, classe,session,annee);
}


}



void Controller::onCloseClasseListWindow(){

    if (classelist->question("Suppression",
           "Vouliez vous revenir en arriere ?"))
    {
        classelist->close();

     //   themeWidget->reinit();
        themeWidget->show();
    }

}
void Controller::onDeletePersonClasse() {

    qDebug("Suppression de la personne");

    if (classelist->question("Suppression",
              "Etes-vous sûr de vouloir supprimer ?"))
       {
           personModel->remove();
       }



}
void Controller::onUpdatePersonClasse(){
    qDebug("Update de la personne");
    classelist->close();

    mainWindow->enableUpdateButton();
  mainWindow->show();

        QModelIndex index = personModel->getSelectionModel()->currentIndex();

        if(index.isValid()){
    int ligne = index.row();
    //QString id = personModel->record(ligne).field(0).value().toInt();
    QString firstname = personModel->record(ligne).field(1).value().toString();
    QString lastname = personModel->record(ligne).field(2).value().toString();
    QString sexe = personModel->record(ligne).field(3).value().toString();
    QString departement = personModel->record(ligne).field(4).value().toString();
    QString classe= personModel->record(ligne).field(5).value().toString();
    QString session= personModel->record(ligne).field(6).value().toString();
    QString annee = personModel->record(ligne).field(7).value().toString();

    mainWindow->populate( firstname,lastname,sexe,departement, classe,session,annee);


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
        QString sexe = mainWindow->getSexe();
        QString departement = mainWindow->getDepartement();
        QString classe = mainWindow->getClasse();
        QString session = mainWindow->getSession();
        QString annee = mainWindow->getAnnee();


        QModelIndex index = personModel->getSelectionModel()->currentIndex();
        int id = personModel->record(index.row()).field(0).value().toInt();
        Person person(id,firstname,lastname,sexe,departement,classe,session,annee);
        personModel->update(person);

        mainWindow->information("Mise a jour d'une nouvelle Person", "Mise a jour.");
        mainWindow->reinit();
    }


}


void Controller::onFindMainWindow(){
    Person person;
        QString id=personList->getRechercher();
     //   if(id!=0)
     //   {
            qDebug("Id a ete bien recupere");
        //    person=personModel->read(id);
            //uiperson=new UIListPerson(this);
            personModel->readById(id);
            personList->show();
       // }
}


