//DISPLAY 16.5 Throwing an Exception Inside a Function
#include <iostream>
#include <cstdlib>
using namespace std;

class DivideByZero
{};

double safe_divide(int top, int bottom) throw (DivideByZero);

int main()
{
    int numerator;
    int denominator;
    double quotient;
    cout << "Enter numerator:\n";
    cin >> numerator;
    cout << "Enter denominator:\n";
    cin >> denominator;

    try
    {
       quotient = safe_divide(numerator, denominator);
       cout << numerator << "/" << denominator
         << " = " << quotient << endl;
    }
    catch(DivideByZero)
    {
         cout << "Error: Division by zero!\n"
              << "Program aborting.\n";
         //exit(0);
    }

    cout << "End of program.\n";
    return 0;
}


double safe_divide(int top, int bottom) throw (DivideByZero)
{
    if (bottom == 0)
        throw DivideByZero();

    return top/static_cast<double>(bottom);
}

