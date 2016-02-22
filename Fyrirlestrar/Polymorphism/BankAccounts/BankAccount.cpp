#include "BankAccount.h"


ostream& operator <<(ostream& outs, BankAccount& account) {
    outs << "Name: " << account.name << endl;
    outs << "Balance: " << account.balance << endl;
    outs << endl;
    return outs;
}

