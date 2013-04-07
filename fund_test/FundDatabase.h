#ifndef FUNDDATABASE_H
#define FUNDDATABASE_H

#include <QtSql>
#include <string>
#include <iostream>
#include <sqlite3/source/sqlite3.h>  // for testing another way
using namespace std;

class Account {
private:
    string name;
    int account_no;
    int phone_no;
    int credit_no;
    int stock ;
    int membership;
    int loan;
    int payment;
    int debt;


public:
    Account(string new_name ,int new_credit_no ,int new_phone_no ,int new_stock = 0 ,int new_membership = 0
                 ,int new_loan = 0 ,int new_payment = 0 ,int new_debt = 0) {
        name = new_name;
        phone_no = new_phone_no;
        credit_no = new_credit_no;
        stock = new_stock;
        membership = new_membership;
        loan = new_loan;
        payment = new_payment;
        debt = new_debt;
        // creating database
        QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
        QSqlQuery query;
        QSqlTableModel model(0,db);

        db.setHostName("erfan");
        db.setDatabaseName("test_db");
        db.open();
        query.exec("CREATE TABLE account(Account_no int, "
                                   "naam varchar(255), phone_num int, "
                                   "creditcard int, mojudi int, "
                                   "bedehi int, loan int, "
                                   "payment int, member_ship int  )");
        query.exec("INSERT INTO account(1,name,phone_nocredit_no,stock,membership,loan,payment,debt");
        db.commit();
        db.close();
        // *******************************************************************\\



        // *******************************************************************\\
    }
    void disbarsement(int amount){
        loan -= amount;
//        query.exec("insert into main(Loan) values(loan)");
//        db.commit();
    }

    void borrow(int amount) {
//        assert (type(amount) == int)
        debt += amount;
//        db = sqlite3.connect(self.name)
//        c = db.cursor()
//        c.execute('''insert into main(Debt) values(debt)''')
//        db.commit()
//        c.close()
}
    void membership_payment(int amount){
//        assert (type(amount) == int) and (amount < self.membership)
        membership -= amount;
//        db = sqlite3.connect(self.name)
//        c = db.cursor()
//        c.execute('''insert into main(Membership) values(membership)''')
//        db.commit()
//        c.close()
    }

    void set_name(string new_name) {
        name = new_name;
//        db = sqlite3.connect(self.name)
//        c = db.cursor()
//        c.execute('''insert into main(Name) values(name)''')
//        db.commit()
//        c.close()
    }

    string get_name(){
//        db = sqlite3.connect(self.name)
//        c = db.cursor()
//        a = c.execute('''select name from main''')
//        db.commit()
//        c.close()
        return name;
    }

    void set_phone_no(int new_number){
        phone_no = new_number;
//        db = sqlite3.connect(self.name)
//        c = db.cursor()
//        c.execute('''insert into main(Phone_no) values(phone_no)''')
//        db.commit()
//        c.close()
    }

    int get_phone_no(){
//        db = sqlite3.connect(self.name)
//        c = db.cursor()
//        a = c.execute('''select phone_no from main''')
//        db.commit()
//        c.close()
        return phone_no;
    }

    void add_stock(int amount) {
//        assert (type(amount) == int)
        stock += amount;
//        db = sqlite3.connect(self.name)
//        c = db.cursor()
//        c.execute('''insert into main(Stock) values(stock)''')
//        db.commit()
//        c.close()
    }

    void set_membership(int amount) {
//        assert (type(amount) == int)
        membership += amount;
//        db = sqlite3.connect(self.name)
//        c = db.cursor()
//        c.execute('''insert into main(Membership) values(membership)''')
//        db.commit()
//        c.close()
    }

    int get_membership() {
//        db = sqlite3.connect(self.name)
//        c = db.cursor()
//        a = c.execute('''select membership from main''')
//        db.commit()
//        c.close()
        return membership;
    }
};
#endif
