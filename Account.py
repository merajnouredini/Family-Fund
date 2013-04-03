import sqlite3

class Account :
    def __init__(self , new_name , new_credit_no , new_phone_no , new_stock = 0 ,new_membership = 0
                 ,new_loan = 0 , new_payment = 0 , new_debt = 0):
        self.name = new_name
        self.account_no
        self.phone_no = new_phone_no
        self.credit_no = new_credit_no
        self.stock = new_stock
        self.membership = new_membership
        self.loan = new_loan
        self.payment = new_payment
        self.debt = new_debt
        # creating database
        db = sqlite3.connect(self.name)
        c = db.cursor()
        c.execute('''create table main(Name text ,Account_no integer ,Phone_no integer ,Stock integer ,Membership real ,
                    Loan real ,Payment real ,Debt real )''')
        c.execute('''insert into main(new_name ,new_account_no ,new_phone_no ,new_stock ,new_membership ,
                    new_loan ,new_payment ,new_debt )''')
        db.commit()
        c.close()
        
    def disbarsement(self,amount):
        assert (type(amount) == int) and (amount < self.loan)
        self.loan -= amount
        db = sqlite3.connect(self.name)
        c = db.cursor()
        c.execute('''insert into main(Loan) values(loan)''')
        db.commit()
        c.close()
        
    def borrow(self,amount):
        assert (type(amount) == int)
        self.debt += amount
        db = sqlite3.connect(self.name)
        c = db.cursor()
        c.execute('''insert into main(Debt) values(debt)''')
        db.commit()
        c.close()
        
    def membership_payment(self,amount):
        assert (type(amount) == int) and (amount < self.membership)
        self.membership -= amount
        db = sqlite3.connect(self.name)
        c = db.cursor()
        c.execute('''insert into main(Membership) values(membership)''')
        db.commit()
        c.close()
        
    def set_name(self,new_name):
        self.name = new_name
        db = sqlite3.connect(self.name)
        c = db.cursor()
        c.execute('''insert into main(Name) values(name)''')
        db.commit()
        c.close()
        
    def get_name(self):
        return self.name
    
    def set_phone_no(self,new_number):
        self.phone_no = new_number
        db = sqlite3.connect(self.name)
        c = db.cursor()
        c.execute('''insert into main(Phone_no) values(phone_no)''')
        db.commit()
        c.close()
        
    def get_phone_no(self):
        return self.phone_no
    
    def add_stock(self,amount):
        assert (type(amount) == int)
        self.stock += amount
        db = sqlite3.connect(self.name)
        c = db.cursor()
        c.execute('''insert into main(Stock) values(stock)''')
        db.commit()
        c.close()
        
    def set_membership(self,amount):
        assert (type(amount) == int)
        self.membership += amount
        db = sqlite3.connect(self.name)
        c = db.cursor()
        c.execute('''insert into main(Membership) values(membership)''')
        db.commit()
        c.close()
        
    def get_membership(self):
        return self.membership