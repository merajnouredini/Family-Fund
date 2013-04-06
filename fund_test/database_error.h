#ifndef DATABASE_ERROR_H
#define DATABASE_ERROR_H

#include <QDialog>

namespace Ui {
class Database_error;
}

class Database_error : public QDialog
{
    Q_OBJECT
    
public:
    explicit Database_error(QWidget *parent = 0);
    ~Database_error();
    
private:
    Ui::Database_error *ui;
};

#endif // DATABASE_ERROR_H
