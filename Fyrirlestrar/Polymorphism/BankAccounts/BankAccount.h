#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <iostream>
using namespace std;

class BankAccount
{
    public:

        friend ostream& operator <<(ostream& outs, BankAccount& account);
    protected:
        string name;
        double balance;
    private:
};

#endif // BANKACCOUNT_H
