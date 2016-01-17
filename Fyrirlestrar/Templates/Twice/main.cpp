#include <iostream>
#include <iomanip>

using namespace std;

int twice(int data) {
    return data*2;
}

double twice(double data)
{
    return data*2;
}

void PrintTwice(int data)
{
    cout << "Twice is: " << twice(data) << endl;
}

void PrintTwice(double data)
{
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
    cout << "Twice is: " <<  twice(data) << endl;
}

int main()
{
    PrintTwice(120); // 240
    PrintTwice(120.3); // 240.6

    return 0;
}
