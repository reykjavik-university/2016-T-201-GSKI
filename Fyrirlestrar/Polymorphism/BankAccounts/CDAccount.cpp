#include "CDAccount.h"

CDAccount::CDAccount(string n, double b, double i) : BankAccount(n, b), interestRate(i)
{ }

bool CDAccount::withdraw(double amount) {

    double interest = balance * interestRate;

    bool success = BankAccount::withdraw(amount);
    if (success) {
        BankAccount::withdraw(interest*PENALTY);
    }
    return success;

}

