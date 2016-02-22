#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <iostream>
using namespace std;

class BankAccount
{
    public:
        BankAccount(string n, double b);
        string getName() const;
        double getBalance() const;

        bool virtual withdraw(double amount);
        bool deposit(double amount);

        friend ostream& operator <<(ostream& outs, BankAccount& account);
    protected:
        string name;
        double balance;
    private:
};

#endif // BANKACCOUNT_H
