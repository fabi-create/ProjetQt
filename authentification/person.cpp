#include "person.h"

Person::Person() {}

/*Person::Person(QString _firstname, QString _lastname) :
    firstname(_firstname), lastname(_lastname)
{}
Person::Person(int _id,QString _firstname, QString _lastname) :
    id(_id),firstname(_firstname), lastname(_lastname)
{}
*/
Person::Person(int _id) :
    id(_id)
{}

Person::Person(int _id, QString _firstname, QString _lastname, QString _country, QString _birthdate) :
    id(_id),firstname(_firstname), lastname(_lastname),
    country(_country), birthdate(_birthdate)
{}



Person::Person(QString _firstname, QString _lastname, QString _country, QString _birthdate) :
    firstname(_firstname), lastname(_lastname),
    country(_country), birthdate(_birthdate)
{}
Person::~Person(){}
