#include "user.h"
/*
User::User()
{

}

User::User(QString login, QString password) {
    this->id = -1;
    this->login = login;
    this->password = password;
}

User::User(int id, QString login, QString password) {
    this->id = id;
    this->login = login;
    this->password = password;
}
*/


User::User() : id (-1), login(""), password("")
{}
User::User(QString _login, QString _password) : login(_login), password(_password)
{}
User::User(int _id, QString _login, QString _password) : id (_id), login(_login), password(_password)
{}
User::~User(){}
