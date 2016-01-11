#include <iostream>
#include "arraylist.h"
using namespace std;

const int MAX = 10;

int main()
{
    ArrayList myArr(MAX);

    for (int i = 0; i < MAX/2; i++)
        myArr.append(i);

    for (myArr.moveToStart(); myArr.currPos() < myArr.length(); myArr.next()) {
        cout << myArr.value() << endl;
    }

    return 0;
}
