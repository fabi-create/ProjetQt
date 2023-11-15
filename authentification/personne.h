#ifndef PERSONNE_H
#define PERSONNE_H
#include <QString>

class Personne
{
    private:
        int id;
        QString firstname;
        QString lastname;
        QString birthdate;
        QString country;

    public:


        Personne();
        Personne(int id,QString firstname, QString lastname, QString birthdate, QString country);
        Personne(QString firstname, QString lastname, QString birthdate, QString country);
        ~Personne();

        int getId (){ return id; }
        QString getFirstname (){ return firstname; }
        QString getLastname() { return lastname; }
        QString getBirthdate() { return birthdate; }
        QString getCountry() { return country; }



        void setId (){ this->id = id; }
        void setFirstname (QString firstname){ this->firstname = firstname; }
       void setLastname(QString lastname) { this->lastname =  lastname; }
        void setBirthdate(QString birthdate) { this->birthdate =  birthdate; }
        void setCountry(QString country) { this->country =  country; }

};
#endif // PERSONNE_H
