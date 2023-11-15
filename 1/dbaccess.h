#ifndef DBACCESS_H
#define DBACCESS_H
#include <QSqlDatabase>



class DBAccess {
    private:
        DBAccess();
        QSqlDatabase db;
        static DBAccess* instance;

    public:

        ~DBAccess();

        static DBAccess* getInstance();
        QSqlDatabase database() { return db; }

        static void release();

        bool open();
        void close();
};

#endif // DBACCESS_H

