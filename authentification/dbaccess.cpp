#include "dbaccess.h"

DBAccess* DBAccess::instance = nullptr;

DBAccess::DBAccess() {
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:\\database\\users_sqlite.db");


    qDebug("Acces à la bd 'users_sqlite' effectif !");

}


DBAccess* DBAccess::getInstance() {
    if(instance == nullptr) {
        instance = new DBAccess();
    }

    return instance;
}



bool DBAccess::open() {
    if(db.isOpen()) return true;

    if(db.open()) {
        qDebug("Connexion à la db ouverte");
        return true;
    } else {
        qDebug("Echec d'ouverture de la bd !");
        return false;
    }

}

void DBAccess::close() {
    if(!db.isOpen()) return;

    db.close();
    qDebug("Fermeture de la bd effectuée avec succès !");
}

DBAccess::~DBAccess() {
    qDebug("Singleton détruit.");
}

void DBAccess::release() {
     if(instance != nullptr) delete instance;
}
