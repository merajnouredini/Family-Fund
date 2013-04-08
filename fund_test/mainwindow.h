#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql>
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
    ~MainWindow();
    
private slots:
    void on_actionAdd_Account_triggered();
    void on_tableView_doubleClicked(const QModelIndex &index);

private:
    Ui::MainWindow *ui;
    AccountWindow *acc_win;
    FundDatabase fdb;
};

#endif // MAINWINDOW_H
