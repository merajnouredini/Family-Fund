#include "mainwindow.h"
#include "accountwindow.h"
#include "database_error.h"
#include "FundDatabase.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    Account fund_db("test1",10001,07654321);   // not working yet!


    QApplication a(argc, argv);
    MainWindow mw;
    AccountWindow aw;
    Database_error de;
    aw.show();
    
    return a.exec();
}
