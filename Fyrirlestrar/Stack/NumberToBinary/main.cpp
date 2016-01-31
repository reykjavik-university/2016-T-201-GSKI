// Showing the use of the ADT Stack
// to convert an integer (decimal) to binary.
// See http://interactivepython.org/runestone/static/pythonds/BasicDS/ConvertingDecimalNumberstoBinaryNumbers.html

#include <iostream>
#include "../Stack.cpp"
using namespace std;

bool isOperator(char ch);
// Returns true if ch is an operator, else false

int main()
{
    Stack<char> s;
    char ans;

    do
    {
        int n;

        cout << "Enter a postive integer: ";
        cin >> n;

        while (n > 0)
        {
            int remainder = n % 2;      // n modulus 2
            char remainderChar = remainder == 0 ? '0' : '1';  // convert to char
            s.push(remainderChar);

            n = n / 2;      // Integer division
        }

        cout << "The equivalent binary form is: ";
        while (!s.empty())
            cout << s.pop() << " ";
        cout << endl;

        cout << "Again? (y/n): ";
        cin >> ans;
        cin.ignore(100, '\n');
    } while (ans != 'n' && ans != 'N');

    return 0;
}


