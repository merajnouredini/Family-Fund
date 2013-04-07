#include "mainwindow.h"
#include "accountwindow.h"
#include "database_error.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow mw;
    AccountWindow aw;
    Database_error de;
    mw.show();
    
    return a.exec();
}
