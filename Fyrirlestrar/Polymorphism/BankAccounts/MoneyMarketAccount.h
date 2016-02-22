#ifndef MONEYMARKETACCOUNT_H
#define MONEYMARKETACCOUNT_H

#include "BankAccount.h"

const int FREE_WITHDRAWALS = 2;
const double WITHDRAWAL_FEE = 1.5;

class MoneyMarketAccount : public BankAccount
{
public:
    MoneyMarketAccount(string n, double b);
    bool virtual withdraw(double amount);
private:
    int withdrawals;
};

#endif // MONEYMARKETACCOUNT_H
