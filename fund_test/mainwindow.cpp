#include <QSql>
#include "ui_mainwindow.h"
#include "mainwindow.h"
#include "FundDatabase.h"
#include "database_error.h"
#include "accountwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    fdb.set_database_table();
    model = new QSqlTableModel();
    acc_win = new AccountWindow(ui->tableView);
    model->setTable("account");
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->select();
    ui->tableView->setModel(model);
    connect(acc_win, SIGNAL(triggerRefresh()), this, SLOT(refresh()));

}

MainWindow::~MainWindow()
{
    delete ui;
    delete model;
    delete acc_win;
}

void MainWindow::on_actionAdd_Account_triggered()
{
    acc_win->show();

}


void MainWindow::refresh()
{
    model->select();
    ui->tableView->setModel(model);
}

void MainWindow::refresh_table()
{
    model->select();
    ui->tableView->setModel(model);
}
