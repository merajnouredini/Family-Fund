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
    def disbarsement(self,amount):
        assert (type(amount) == int) and (amount < self.loan)
        self.loan -= amount
    def borrow(self,amount):
        assert (type(amount) == int)
        self.debt += amount
    def membership_payment(self,amount):
        assert (type(amount) == int) and (amount < self.membership)
        self.membership -= amount
    def set_name(self,new_name):
        self.name = new_name
    def get_name(self):
        return self.name
    def set_phone_no(self,new_number):
        self.phone_no = new_number
    def get_phone_no(self):
        return self.phone_no
    def add_stock(self,amount):
        assert (type(amount) == int)
        self.stock += amount
    def set_membership(self,amount):
        assert (type(amount) == int)
        self.membership += amount
    def get_membership(self):
        return self.membership