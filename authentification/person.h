#ifndef PERSON_H
#define PERSON_H

#include <QString>

class Person
{
    private:
        int id;
        QString firstname;
        QString lastname;
        QString country;
        QString birthdate;
    public:


        Person();

        /*Person(QString firstname, QString lastname);
        Person(int id, QString firstname, QString lastname);
        Person(int id, QString firstname, QString lastname, QString birthdate);
        Person(int id, QString firstname, QString lastname, QString birthdate, QString country);
        */
        Person(int id, QString firstname, QString lastname,QString country,QString birthdate);
        Person(QString firstname, QString lastname,QString country,QString birthdate);
        Person(int id);
        ~Person();

        int getId() { return id; }
        QString getFirstName() { return this->firstname; }
        QString getLastName() { return this->lastname; }
        QString getdateBirthdate() { return this->birthdate; }
        QString getCountry() { return this->country; }


        void setId(int id) { this->id = id; }
        void setLastname(QString firstname) { this->firstname = firstname; }
        void setFirstname(QString lastname) { this->lastname = lastname; }
        void setBirthdate(QString birthdate) { this->birthdate = birthdate; }
        void setCountry(QString country) { this->country = country; }

};

#endif // PERSON_H
