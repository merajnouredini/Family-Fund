#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql>
#include "FundDatabase.h"
#include "accountwindow.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    friend class AccountWindow;
    void refresh_table();
    ~MainWindow();
    
private slots:
    void on_actionAdd_Account_triggered();
    void refresh();

private:
    Ui::MainWindow *ui;
    AccountWindow *acc_win;
    FundDatabase fdb;
    QSqlTableModel *model;
};

#endif // MAINWINDOW_H
