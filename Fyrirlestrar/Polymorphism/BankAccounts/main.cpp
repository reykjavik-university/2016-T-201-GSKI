#include "BankAccount.h"
#include "MoneyMarketAccount.h"
#include "CDAccount.h"
using namespace std;

void transfer(double amount, BankAccount& fromAccount, BankAccount& toAccount) {
    if (fromAccount.withdraw(amount))
        toAccount.deposit(amount);
}

int main()
{
    BankAccount ba1("John", 100.0);
    BankAccount ba2("Mary", 100.0);
    MoneyMarketAccount mm1("Smith", 50.0);
    CDAccount cd1("Jane", 80, 0.1);

    transfer(10, ba1, ba2);
    cout << ba1;
    cout << ba2;

    for (int i = 0; i <= 3; i++)
        transfer(5, mm1, ba2);
    cout << mm1;
    cout << ba2;

    transfer(10, cd1, ba2);
    cout << cd1;
    cout << ba2;

    return 0;
}
