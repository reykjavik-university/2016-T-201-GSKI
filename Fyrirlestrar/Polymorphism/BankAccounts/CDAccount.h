#ifndef CDACCOUNT_H
#define CDACCOUNT_H

#include "BankAccount.h"

const double PENALTY = 0.25;

class CDAccount : public BankAccount
{
public:
    CDAccount(string n, double b, double i);
    bool virtual withdraw(double amount);
private:
    double interestRate;
};

#endif // CDACCOUNT_H
