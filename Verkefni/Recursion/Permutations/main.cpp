// ***************************************************************
// This is a recursive program that generates all the permutations
// of a set of numbers.
// ***************************************************************
#include <iostream>
#include "permutations.h"
using namespace std;

int main()
{
    char ans;

    do {
        int n;
        cout << "Enter a positive integer: ";
        cin >> n;

        Permutations p;

        cout << "Permutations of the set of numbers from 1 to " << n << ":" << endl;
        p.generate(n);
        p.print();

        cout << "Again?(y/n): ";
        cin >> ans;
        cin.ignore(10000, '\n');
    } while (ans != 'n' && ans != 'N');

    return 0;
}
