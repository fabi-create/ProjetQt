#ifndef PERSONMODEL_H
#define PERSONMODEL_H
#include "dbaccess.h"
#include "person.h"
#include <QtDebug>
#include <QSqlQuery>
#include <QSqlField>
#include <QSqlRecord>
#include <QSqlQueryModel>
#include <QItemSelectionModel>
#include <QModelIndex>



class PersonModel : public QSqlQueryModel {
    private:
        DBAccess* dbaccess;
         QItemSelectionModel* selectionModel;
    public:
        PersonModel();
        ~PersonModel();
        QItemSelectionModel* getSelectionModel() { return selectionModel;}
        void create(Person person);
     void update(Person person);
     Person read(int id);
       void _delete (int id);
       // void onFindPerson();
       // void onNotFindPerson();
       void readById(int id);
      QList<Person> list();

        void remove();

        // Rafraîchit la collection et la tableView ...
      void readAll();
      //  void readOnly();
};


#endif // PERSONMODEL_H


