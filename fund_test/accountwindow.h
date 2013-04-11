#ifndef ACCOUNTWINDOW_H
#define ACCOUNTWINDOW_H

#include <QDialog>
#include <QtSql>
#include <QLineEdit>
#include "FundDatabase.h"



namespace Ui {
class AccountWindow;
}

class AccountWindow : public QDialog
{
    Q_OBJECT
    
public:
    friend class FundDatabase;
    friend class MainWindow;
    explicit AccountWindow(QWidget *parent = 0);
    void show_account(const QModelIndex&);

    ~AccountWindow();
    
private slots:
    void on_submit_clicked();
    void on_close_button_clicked();

signals:
    void triggerRefresh();

private:
    QString fields[9];
    FundDatabase fdb;
    QSqlRecord record;
    QSqlTableModel *model;
    Ui::AccountWindow *ui;
};

#endif // ACCOUNTWINDOW_H
