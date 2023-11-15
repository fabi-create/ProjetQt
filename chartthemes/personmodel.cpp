
#include "personmodel.h"
#include <QMetaType>
#include <QSqlField>
#include <QtDebug>

PersonModel::PersonModel(){
    dbaccess = DBAccess::getInstance();
     selectionModel = new QItemSelectionModel(this);
    //dbaccess = new DBAccess();
}


PersonModel::~PersonModel() {
    delete dbaccess;
}
Person PersonModel::read(int id) {
    Person person;

    dbaccess->open();
    QSqlQuery query(dbaccess->database());

    query.prepare("SELECT * FROM t_persons WHERE id=:id");
    query.bindValue(":id", id);

    query.exec();

    if (query.next()) {
        person.setId(query.record().field("id").value().toInt());
        person.setFirstname(query.record().field("firstname").value().toString());
        person.setLastname(query.record().field("lastname").value().toString());
        person.setSexe(query.record().field("sexe").value().toString());
        person.setDepartement(query.record().field("departement").value().toString());
         person.setClasse(query.record().field("classe").value().toString());
        person.setSession(query.record().field("session").value().toString());
         person.setAnnee(query.record().field("annee").value().toString());
    }

    query.finish();
    dbaccess->close();

    return person;
}


void PersonModel::create(Person person) {
    dbaccess->open();
    QSqlQuery query(dbaccess->database());

    query.prepare("INSERT INTO t_persons(firstname, lastname,sexe, departement,classe, session, annee )VALUES(:firstname,:lastname,:sexe,:departement,:classe,:session,:annee)");
    query.bindValue(":firstname", person.getFirstName());
    query.bindValue(":lastname", person.getLastName());
    query.bindValue(":sexe", person.getSexe());
    query.bindValue(":departement", person.getDepartement());
    query.bindValue(":classe", person.getClasse());
    query.bindValue(":session", person.getSession());
     query.bindValue(":annee", person.getAnnee());

    query.exec();
    //query.exec("PRAGMA synchronous = OFF; PRAGMA journal_mode = MEMORY; PRAGMA temp_store = MEMORY; PRAGMA cache_size = 10000; PRAGMA locking_mode = EXCLUSIVE; PRAGMA journal_size_limit = 1048576; PRAGMA auto_vacuum = NONE; PRAGMA busy_timeout = 30000; PRAGMA temp_store_directory = '/tmp'; PRAGMA wal_autocheckpoint = 1; PRAGMA wal_checkpoint(TRUNCATE);");

   query.finish();
    dbaccess->close();
  readAll(); // recupère les nouvelles données de la base ...
}

void PersonModel::update(Person person) {
    dbaccess->open();
    QSqlQuery query(dbaccess->database());

    query.prepare("UPDATE t_persons SET firstname=:firstname, lastname=:lastname,sexe=:sexe,departement=:departement,classe=:classe,session=:session,annee=:annee WHERE id=:id");

    query.bindValue(":id", person.getId());
    query.bindValue(":firstname", person.getFirstName());
    query.bindValue(":lastname", person.getLastName());
    query.bindValue(":sexe", person.getSexe());
    query.bindValue(":departement", person.getDepartement());
    query.bindValue(":classe", person.getClasse());
    query.bindValue(":session", person.getSession());
    query.bindValue(":annee", person.getAnnee());

    query.exec();

    query.finish();
    dbaccess->close();
    readAll(); // recupère les nouvelles données de la base ...
}

void PersonModel::_delete(int id) {
    dbaccess->open();
    QSqlQuery query(dbaccess->database());

    query.prepare("DELETE FROM t_persons WHERE id=:id");
    query.bindValue(":id", id);

    query.exec();

    query.finish();
    dbaccess->close();
    readAll(); // recupère les nouvelles données de la base ...
}

QList<Person> PersonModel::list()
{
    Person person;
    QList<Person> persons;

    dbaccess->open();
    QSqlQuery query(dbaccess->database());

    query.prepare("SELECT * FROM t_persons WHERE 1");
    query.exec();

    while (query.next()) {
        person.setId(query.record().field("id").value().toInt());
        person.setFirstname(query.record().field("firstname").value().toString());
        person.setLastname(query.record().field("lastname").value().toString());
        person.setSexe(query.record().field("sexe").value().toString());
        person.setDepartement(query.record().field("departement").value().toString());
        person.setClasse(query.record().field("classe").value().toString());
        person.setSession(query.record().field("session").value().toString());
        person.setSession(query.record().field("annee").value().toString());

        persons.push_back(person);
    }

    query.finish();
    dbaccess->close();

    return persons;
}



QList<Person> PersonModel::listClasse()
{
    Person person;
    QList<Person> persons;

    dbaccess->open();
    QSqlQuery query(dbaccess->database());

    query.prepare("SELECT * FROM t_persons WHERE 1");
    query.exec();

    while (query.next()) {
        person.setId(query.record().field("id").value().toInt());
        person.setFirstname(query.record().field("firstname").value().toString());
        person.setLastname(query.record().field("lastname").value().toString());
        person.setSexe(query.record().field("sexe").value().toString());
        person.setDepartement(query.record().field("departement").value().toString());
        person.setClasse(query.record().field("classe").value().toString());
        person.setSession(query.record().field("session").value().toString());
        person.setSession(query.record().field("annee").value().toString());

        persons.push_back(person);
    }

    query.finish();
    dbaccess->close();

    return persons;
}


void PersonModel::readById(QString id)
{

    dbaccess->open();
    QSqlQuery query(dbaccess->database());


    query.prepare("SELECT id, firstname, lastname, sexe, departement, classe, session, annee from t_persons WHERE firstname=:id or lastname=:id or classe=:id");
    query.bindValue(":id",id);
    query.exec();
    while(query.next())
    {
        this->setHeaderData(0,Qt::Horizontal,tr("id"));
        this->setHeaderData(1,Qt::Horizontal,tr("firstname"));
        this->setHeaderData(2,Qt::Horizontal,tr("lastname"));
        this->setHeaderData(3,Qt::Horizontal,tr("sexe"));
        this->setHeaderData(4,Qt::Horizontal,tr("departement"));
        this->setHeaderData(5,Qt::Horizontal,tr("classe"));
        this->setHeaderData(6,Qt::Horizontal,tr("session"));
        this->setHeaderData(7,Qt::Horizontal,tr("annee"));
        this->setQuery(query);
        dbaccess->close();


    }
}




void PersonModel::remove()
{
    dbaccess->open();

    QModelIndex currentIndex = selectionModel->currentIndex();

    qDebug() << "model is selected : " << selectionModel->isSelected(currentIndex);
    qDebug() << "index is valid : " << currentIndex.isValid();
    qDebug() << "index is valid : " << currentIndex.row();
    if (currentIndex.isValid())
    {
        // valide si un élément est sélectionné ...
        int ligne = currentIndex.row();

        QSqlRecord record = this->record(ligne);
        int id = record.field(0).value().toInt();

        QSqlQuery query(dbaccess->database());

        query.prepare("DELETE FROM t_persons WHERE id=:id");
        query.bindValue(":id", id);

        query.exec();
    }

    dbaccess->close();

    readAll();
}

void PersonModel::readAll()
{
    dbaccess->open();

    QSqlDatabase database = dbaccess->database();
    this->setQuery("SELECT id, firstname, lastname,sexe,departement,classe,session,annee FROM t_persons", database);

    this->setHeaderData(0, Qt::Horizontal, tr("Id"));
    this->setHeaderData(1, Qt::Horizontal, tr("Firstname"));
    this->setHeaderData(2, Qt::Horizontal, tr("Lastname"));
    this->setHeaderData(3, Qt::Horizontal, tr("Sexe"));
    this->setHeaderData(4, Qt::Horizontal, tr("Departement"));
    this->setHeaderData(5, Qt::Horizontal, tr("Classe"));
    this->setHeaderData(6, Qt::Horizontal, tr("Session"));
    this->setHeaderData(7, Qt::Horizontal, tr("Annee"));
    dbaccess->close();
}

/*
void PersonModel::readOnly()
{
    dbaccess->open();

    QSqlDatabase database = dbaccess->database();
    this->setQuery("SELECT lastname FROM t_persons", database);

    this->setHeaderData(2, Qt::Horizontal, tr("Lastname"));


    dbaccess->close();
}

void PersonModel::onFindPerson(){
dbaccess->open();

QModelIndex currentIndex = selectionModel->currentIndex();

qDebug() << "model is selected : " << selectionModel->isSelected(currentIndex);
qDebug() << "index is valid : " << currentIndex.isValid();
qDebug() << "index is valid : " << currentIndex.row();
if (currentIndex.isValid())
{
    // valide si un élément est sélectionné ...
    int ligne = currentIndex.row();

    QSqlRecord record = this->record(ligne);
    QString lastname = record.field(3).value().toString();

    QSqlQuery query(dbaccess->database());

    query.prepare("SELECT lastname FROM t_persons WHERE lastname=:lastname");
    query.bindValue(":lastname", lastname);

    query.exec();
}

dbaccess->close();

readOnly();

}

void PersonModel::onNotFindPerson()
{
    dbaccess->open();

    QModelIndex currentIndex = selectionModel->currentIndex();

    qDebug() << "model is selected : " << selectionModel->isSelected(currentIndex);
    qDebug() << "index is valid : " << currentIndex.isValid();
    qDebug() << "index is valid : " << currentIndex.row();
    if (currentIndex.isValid())
    {
        // valide si un élément est sélectionné ...
        int ligne = currentIndex.row();

        QSqlRecord record = this->record(ligne);
        QString lastname = record.field(3).value().toString();

        QSqlQuery query(dbaccess->database());

        query.prepare("SELECT lastname FROM t_persons WHERE lastname!=:lastname");
        query.bindValue(":lastname", lastname);

        query.exec();
    }

    dbaccess->close();

    readOnly();

    }


*/
