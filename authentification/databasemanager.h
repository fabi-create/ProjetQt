/*#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H


#include <QSqlDatabase>

class DatabaseManager {
    public:
        static DatabaseManager& instance() {
            static DatabaseManager instance; // Singleton
            return instance;
        }

        QSqlDatabase& database() {
            return m_database;
        }

    private:
        DatabaseManager() {
            m_database = QSqlDatabase::addDatabase("QSQLITE");
            m_database.setDatabaseName("C:\\Users\\HP\\Documents\\master  1 isi and ssi\\POO JAVA\\Mes-Projets-Qt\\database\\users_sqlite.db");

            if (!m_database.open()) {
                // Gérer l'erreur de connexion
                qDebug("Echec de connexion à la base de données 'users_sqlite.db' . ");
            }
        }

        ~DatabaseManager() {
            m_database.close();
        }

        QSqlDatabase m_database;

        // Empêche la copie et l'affectation par valeur
        DatabaseManager(const DatabaseManager&);
        void operator=(const DatabaseManager&);
};


#endif // DATABASEMANAGER_H
*/
