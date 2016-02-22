#include "BankAccount.h"

BankAccount::BankAccount(string n, double b) : name(n), balance(b) { }

string BankAccount::getName() const {
    return name;
}

double BankAccount::getBalance() const {
    return balance;
}


bool BankAccount::withdraw(double amount) {
    if (amount >= 0 && amount <= balance) {
        balance = balance - amount;
        return true;
    }
    else
        return false;
}


bool BankAccount::deposit(double amount) {
    if (amount >= 0) {
        balance = balance + amount;
        return true;
    }
    else
        return false;
}

ostream& operator <<(ostream& outs, BankAccount& account) {
    outs << "Name: " << account.name << endl;
    outs << "Balance: " << account.balance << endl;
    outs << endl;
    return outs;
}

