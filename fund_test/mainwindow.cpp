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

    acc_win = new AccountWindow;

    fdb.set_database_table();

    QSqlTableModel *model = new QSqlTableModel();
    model->setTable("account");
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->select();

    ui->tableView->setModel(model);
//    ui->tableView->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionAdd_Account_triggered()
{
    acc_win->show();
}


void MainWindow::on_tableView_doubleClicked(const QModelIndex &index)
{
    acc_win->show_account(index);
}
