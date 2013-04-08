#include <QtSql>
#include "accountwindow.h"
#include "mainwindow.h"
#include "ui_accountwindow.h"





AccountWindow::AccountWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AccountWindow)
{
    ui->setupUi(this);

    fields[0] = "Hello World";
    ui->lineEdit_0->insert(fields[0]);
    ui->lineEdit_1->insert(fields[1]);
    ui->lineEdit_2->insert(fields[2]);
    ui->lineEdit_3->insert(fields[3]);
    ui->lineEdit_4->insert(fields[4]);
    ui->lineEdit_5->insert(fields[5]);
    ui->lineEdit_6->insert(fields[6]);
    ui->lineEdit_7->insert(fields[7]);
    ui->lineEdit_8->insert(fields[8]);

}

AccountWindow::~AccountWindow()
{
    delete ui;
}

void AccountWindow::on_submit_clicked()
{
    fields[0] = ui->lineEdit_0->text();
    fields[1] = ui->lineEdit_1->text();
    fields[2] = ui->lineEdit_2->text();
    fields[3] = ui->lineEdit_3->text();
    fields[4] = ui->lineEdit_4->text();
    fields[5] = ui->lineEdit_5->text();
    fields[6] = ui->lineEdit_6->text();
    fields[7] = ui->lineEdit_7->text();
    fields[8] = ui->lineEdit_8->text();

    fdb.add_account(fields);

//    for(int i; i<9; i++)
//    {
//        record.field(i).setValue(fields[i]);
//        qDebug() << fields[i];
//    }
//    model.insertRecord(0,record);
//    model.submitAll();
//    QString name = model.record(-1).value("name").toString();
//    ui->lineEdit_10->insert(name);
//    qDebug() << name;
}

void AccountWindow::show_account(const QModelIndex &index)
{
//    fdb.add_account();
}

void AccountWindow::on_close_button_clicked()
{
    AccountWindow::close();
}
