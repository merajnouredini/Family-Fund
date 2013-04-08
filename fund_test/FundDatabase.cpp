#include <QtSql>
#include "mainwindow.h"
#include "accountwindow.h"
#include "FundDatabase.h"
#include "database_error.h"


FundDatabase::FundDatabase()
{

}

void FundDatabase::set_database_table()
{

    try
    {
    qDebug() << query.exec("CREATE TABLE account(Account_no TEXT, "
                           "name TEXT, phone_no TEXT, "
                           "creditcard TEXT, stock TEXT, "
                           "debth TEXT, loan TEXT, "
                           "payment TEXT, member_ship TEXT)");
    qDebug() << query.lastError();
    }
    catch (QSqlError)
    {
        qDebug() << "error";
    }

}

void FundDatabase::add_account(QString fields[9])
{
    QSqlQuery query;
    query.prepare("INSERT INTO account (Account_no, "
                  "name, phone_no, "
                  "creditcard, stock, "
                  "debth, loan, "
                  "payment, member_ship) "
                  "VALUES (:Account_no, "
                  ":name, :phone_no, "
                  ":creditcard, :stock, "
                  ":debth, :loan, "
                  ":payment, :member_ship)");
    query.bindValue(":Account_no", fields[0]);
    query.bindValue(":name", fields[1]);
    query.bindValue(":phone_no", fields[2]);
    query.bindValue(":creditcard", fields[3]);
    query.bindValue(":stock", fields[4]);
    query.bindValue(":debth", fields[5]);
    query.bindValue(":loan", fields[6]);
    query.bindValue(":payment", fields[7]);
    query.bindValue(":member_ship", fields[8]);
    query.exec();

}
