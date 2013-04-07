#include <QtSql>
#include "accountwindow.h"
#include "mainwindow.h"
#include "ui_accountwindow.h"





AccountWindow::AccountWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AccountWindow)
{
    ui->setupUi(this); //qt
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






//    if (MainWindow::ok)
//    {
//        int row = 0;
//        QSqlTableModel *model = new QSqlTableModel(0,MainWindow::db);
//        model->setTable("account");
//        model->setEditStrategy(QSqlTableModel::OnManualSubmit);
//        model->select();
//        model->setHeaderData(0, Qt::Horizontal, tr("Name"));
//        model->setHeaderData(1, Qt::Horizontal, tr("Salary"));

//        QSqlField account_no("account_no",QVariant::String);
//        QSqlField name_field("name",QVariant::String);
//        QSqlField phone_no("phone_no",QVariant::String);
//        QSqlField creditcard_no("credit_no",QVariant::String);
//        QSqlField mojudi("mojudi",QVariant::String);
//        QSqlField bedehi("bedehi",QVariant::String);
//        QSqlField loan("loan",QVariant::String);
//        QSqlField payment("payment",QVariant::String);
//        QSqlField membership("membership",QVariant::String);


//        record.append(account_no);
//        record.append(name_field);
//        record.append(phone_no);
//        record.append(creditcard_no);
//        record.append(mojudi);
//        record.append(bedehi);
//        record.append(loan);
//        record.append(payment);
//        record.append(membership);




//    }
    //else
      //  qDebug() << conn.lastError();

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

    for(int i; i<9; i++)
    {
        record.field(i).setValue(fields[i]);
        qDebug() << fields[i];
    }
    model.insertRecord(0,record);
    model.submitAll();
    QString name = model.record(-1).value("name").toString();
    ui->lineEdit_10->insert(name);
    qDebug() << name;
}

void AccountWindow::on_close_button_clicked()
{
    AccountWindow::close();
}
