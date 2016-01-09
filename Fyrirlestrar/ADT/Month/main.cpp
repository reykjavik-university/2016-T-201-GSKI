#include <iostream>
#include "month.h"
using namespace std;

int main()
{
    Month m1(Month::JUN);
    Month m2(Month::JAN);

    cout << m1 << endl;
    m1.nextMonth();
    cout << m1 << endl;

    cout << m2 << endl;
    m2.previousMonth();
    cout << m2 << endl;
    cout << endl;

    Month m3;
    cout << m3 << endl;
    for (int i=1; i<=12; i++) {
        m3.nextMonth();
        cout << m3 << endl;
    }

    return 0;
}
