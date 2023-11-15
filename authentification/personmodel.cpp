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
        person.setCountry(query.record().field("country").value().toString());
        person.setBirthdate(query.record().field("birthdate").value().toString());
    }

    query.finish();
    dbaccess->close();

    return person;
}


void PersonModel::create(Person person) {
    dbaccess->open();
    QSqlQuery query(dbaccess->database());

    query.prepare("INSERT INTO t_persons(firstname, lastname,country,birthdate)VALUES(:firstname,:lastname,:country,:birthdate)");
    query.bindValue(":firstname", person.getFirstName());
    query.bindValue(":lastname", person.getLastName());
    query.bindValue(":country", person.getCountry());
    query.bindValue(":birthdate", person.getdateBirthdate());

    query.exec();
    //query.exec("PRAGMA synchronous = OFF; PRAGMA journal_mode = MEMORY; PRAGMA temp_store = MEMORY; PRAGMA cache_size = 10000; PRAGMA locking_mode = EXCLUSIVE; PRAGMA journal_size_limit = 1048576; PRAGMA auto_vacuum = NONE; PRAGMA busy_timeout = 30000; PRAGMA temp_store_directory = '/tmp'; PRAGMA wal_autocheckpoint = 1; PRAGMA wal_checkpoint(TRUNCATE);");

   // query.finish();
    dbaccess->close();
  readAll(); // recupère les nouvelles données de la base ...
}

void PersonModel::update(Person person) {
    dbaccess->open();
    QSqlQuery query(dbaccess->database());

    query.prepare("UPDATE t_persons SET firstname=:firstname, lastname=:lastname,country=:country, birthdate=:birthdate WHERE id=:id");

    query.bindValue(":id", person.getId());
    query.bindValue(":firstname", person.getFirstName());
    query.bindValue(":lastname", person.getLastName());
    query.bindValue(":country", person.getCountry());
    query.bindValue(":birthdate", person.getdateBirthdate());

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
        person.setCountry(query.record().field("country").value().toString());
        person.setBirthdate(query.record().field("birthdate").value().toString());


        persons.push_back(person);
    }

    query.finish();
    dbaccess->close();

    return persons;
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
    this->setQuery("SELECT id, firstname, lastname, country, "
                   "birthdate FROM t_persons", database);

    this->setHeaderData(0, Qt::Horizontal, tr("Id"));
    this->setHeaderData(1, Qt::Horizontal, tr("Firstname"));
    this->setHeaderData(2, Qt::Horizontal, tr("Lastname"));
    this->setHeaderData(3, Qt::Horizontal, tr("Country"));
    this->setHeaderData(4, Qt::Horizontal, tr("Birthdate"));

    dbaccess->close();
}


void PersonModel::readOnly()
{
    dbaccess->open();

    QSqlDatabase database = dbaccess->database();
    this->setQuery("SELECT lastname FROM t_persons", database);

    this->setHeaderData(2, Qt::Horizontal, tr("Lastname"));


    dbaccess->close();
}
/*
void PersonModel::onFindPerson(){

    Person person;
    QList<Person> persons;

    dbaccess->open();
    QSqlQuery query(dbaccess->database());

    query.prepare("SELECT lastname FROM t_persons WHERE 1");
    query.exec();

    while (query.next()) {
        person.setId(query.record().field("id").value().toInt());
        persons.push_back(person);

}
}

*/

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

