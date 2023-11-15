#include "personne.h"
#include <QString>

Personne::Personne()
{

}


Personne::Personne(int _id,QString _firstname, QString _lastname, QString _birthdate, QString _country) : id(_id),
         firstname(_firstname), lastname(_lastname), birthdate(_birthdate), country(_country)
{}

Personne::Personne(QString _firstname, QString _lastname, QString _birthdate, QString _country) :
    firstname(_firstname), lastname(_lastname), birthdate(_birthdate), country(_country)
{}

Personne::~Personne() {}


