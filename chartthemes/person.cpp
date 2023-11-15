
#include "person.h"

Person::Person() {}


Person::Person(int _id) :
    id(_id)
{}

Person::Person(int id, QString firstname, QString lastname,QString sexe,QString departement, QString classe, QString session,QString annee) :
    id(id),firstname(firstname), lastname(lastname),
    sexe(sexe), departement(departement), classe(classe),session(session),annee(annee)
{}



Person::Person(QString firstname, QString lastname,QString sexe,QString departement, QString classe, QString session,QString annee) :
    firstname(firstname), lastname(lastname),
        sexe(sexe), departement(departement), classe(classe),session(session),annee(annee)
{}
Person::~Person(){}

