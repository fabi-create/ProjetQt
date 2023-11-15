
#ifndef PERSON_H
#define PERSON_H

#include <QString>

class Person
{
    private:
        int id;
        QString firstname;
        QString lastname;
        QString sexe;
        QString departement;
        QString classe;
        QString session;
        QString annee;

    public:


        Person();
        Person(int id, QString firstname, QString lastname,QString sexe,QString departement, QString classe, QString session,QString annee);
        Person(QString firstname, QString lastname,QString sexe,QString departement, QString classe, QString session,QString annee);
        Person(int id);
        ~Person();

        int getId() { return id; }
        QString getFirstName() { return this->firstname; }
        QString getLastName() { return this->lastname; }
        QString getSexe() { return this->sexe; }
        QString getDepartement() { return this->departement; }
        QString getClasse() { return this->classe; }
        QString getSession() { return this->session; }
        QString getAnnee() { return this->annee; }

        void setId(int id) { this->id = id; }
        void setLastname(QString firstname) { this->firstname = firstname; }
        void setFirstname(QString lastname) { this->lastname = lastname; }
        void setSexe(QString sexe) { this->sexe = sexe; }
        void setDepartement(QString departement) { this->departement = departement; }
        void setClasse(QString classe ) { this->classe = classe; }
        void setSession(QString session) { this->session = session; }
        void setAnnee(QString annee) { this->annee = annee; }


};

#endif // PERSON_H

