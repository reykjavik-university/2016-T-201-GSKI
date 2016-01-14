#include <iostream>
#include "arraylist.h"
using namespace std;

const int MAX = 10;

int main()
{
    ArrayList myList(MAX);

    for (int i = 0; i < MAX/2; i++)
        myList.append(i);

    for (myList.moveToStart(); myList.currPos() < myList.length(); myList.next()) {
        cout << myList.value() << endl;
    }

    return 0;
}
