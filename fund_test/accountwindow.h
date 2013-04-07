#ifndef ACCOUNTWINDOW_H
#define ACCOUNTWINDOW_H

#include <QMainWindow>
#include <QtSql>
#include <QLineEdit>

namespace Ui {
class AccountWindow;
}

class AccountWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit AccountWindow(QWidget *parent = 0);

    ~AccountWindow();
    
private slots:
    void on_submit_clicked();

    void on_close_button_clicked();

    void on_pushButton_2_clicked();

    void on_submit_pressed();

private:
    QString fields[9];
    QSqlRecord record;
    QSqlTableModel model;
    Ui::AccountWindow *ui;
};

#endif // ACCOUNTWINDOW_H
