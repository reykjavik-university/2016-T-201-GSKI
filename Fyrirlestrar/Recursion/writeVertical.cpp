//DISPLAY 14.1 A Recursive Output Function
//Program to demonstrate the recursive function write_vertical.
#include <iostream>
using namespace std;

void write_vertical(int n);
//Precondition: n >= 0.
//Postcondition: The number n is written to the screen vertically
//with each digit on a separate line.

int main( )
{
    cout << "write_vertical(3):" << endl;
    write_vertical(3);

    cout << "write_vertical(12):" << endl;
    write_vertical(12);

    cout << "write_vertical(123):" << endl;
    write_vertical(123);

    return 0;
}

//uses iostream:
void write_vertical(int n)
{
    if (n < 10)
    {
        cout << n << endl;
    }
    else //n is two or more digits long:
    {
        write_vertical(n/10);
        cout << (n%10) << endl;
    }
}
