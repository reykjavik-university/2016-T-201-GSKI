#include "MoneyMarketAccount.h"

MoneyMarketAccount::MoneyMarketAccount(string n, double b) : BankAccount(n, b), withdrawals(0)
{ }

bool MoneyMarketAccount::withdraw(double amount) {

    bool success = BankAccount::withdraw(amount);
    if (success) {
        if (withdrawals >= FREE_WITHDRAWALS) {
           success = BankAccount::withdraw(WITHDRAWAL_FEE);
        }
        withdrawals++;
    }
    return success;

}

