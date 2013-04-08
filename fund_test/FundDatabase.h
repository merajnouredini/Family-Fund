#ifndef FUNDDATABASE_H
#define FUNDDATABASE_H

#include <QtSql>

class FundDatabase
{
private:

    QSqlQuery query;
    QSqlTableModel model;

public:
    FundDatabase();
    void set_database_table(void);
    void add_account(QString[]);
    void get_account(/*filter*/);

};
#endif // FUNDDATABASE_H
