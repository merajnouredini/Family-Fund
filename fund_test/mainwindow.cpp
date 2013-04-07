#include <QSql>
#include "ui_mainwindow.h"
#include "mainwindow.h"
#include "FundDatabase.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    DataBase fund_db;
    fund_db.set_database_table();

//    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
//    db.setDatabaseName("AccountDB");
//    bool ok = db.open();
//    bool isopen = db.isOpen();
//    int row = 0;
//    qDebug() << isopen << "\t" << ok ;

//    QSqlTableModel *model = new QSqlTableModel(0,db);

//    model->setTable("account");
//    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
//    model->select();
//    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Name"));
//    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Salary"));
//    model->insertRows(row, 1);
//    model->setData(model->index(row, 0), 1013);
//    model->setData(model->index(row, 1), "Peter Gordon");
//    model->setData(model->index(row, 2), 68500);
//    model->submitAll();

//    QTableView *view = new QTableView;
//    view->setModel(model);
//    view->show();

//    ui->tableView->setModel(model);
//    ui->tableView->show();
//    qDebug() << "Done";
}

MainWindow::~MainWindow()
{
    delete ui;
}
