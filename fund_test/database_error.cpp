#include "database_error.h"
#include "ui_database_error.h"

Database_error::Database_error(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Database_error)
{
    ui->setupUi(this);
}

Database_error::~Database_error()
{
    delete ui;
}
