#include <iostream>
#include "set.h"
using namespace std;

int main()
{
    Set mySet;

    for (int i = 0; i < 10; i++) {
        mySet.insert(i);
        mySet.insert(i);
    }

    if (mySet.exist(4))
        cout << "Element exists!" << endl;

    mySet.remove(4);
    mySet.remove(7);
    mySet.remove(12);

    cout << mySet << endl;

    return 0;
}
