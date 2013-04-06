#include <QtSql>
#include "mainwindow.h"
#include "accountwindow.h"
#include "FundDatabase.h"
#include "database_error.h"


DataBase::DataBase()
{
    db.setDatabaseName("FundDb");
    db.open();
}
void DataBase::set_database_table()
{
    try
    {
    qDebug() << query.exec("CREATE TABLE account(Account_no int, "
                           "name varchar(255), phone_no int, "
                           "creditcard int, mojudi int, "
                           "bedehi int, loan int, "
                           "payment int, member_ship int  )");
    qDebug() << query.lastError();
    }
    catch (QSqlError)
    {
        qDebug() << "error";
    }



}

