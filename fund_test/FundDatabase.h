#ifndef FUNDDATABASE_H
#define FUNDDATABASE_H

#include <QtSql>

class DataBase
{
private:
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    QSqlQuery query;
    QSqlTableModel model;

public:
    DataBase();
    //    ~DataBase();
    void set_database_table(void);
    void add_account(void);
    void get_account(/*filter*/);

};
#endif // FUNDDATABASE_H
