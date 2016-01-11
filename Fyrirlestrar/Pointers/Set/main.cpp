#include <iostream>
#include "set.h"
using namespace std;

typedef Set* SetPtr;

void printSet(SetPtr set) {
    cout << *set << endl;
}

int main()
{
    SetPtr set1;
    SetPtr set2;

    set1 = new Set();
    for (int i = 0; i < 10; i++) {
        set1->insert(i);
        set1->insert(i);
    }

    if (set1->exist(4))
        cout << "Element exists!" << endl;

    set1->remove(4);
    set1->remove(7);
    set1->remove(12);

    printSet(set1);

    set2 = set1;
    printSet(set2);

    set2 = new Set();
    for (int i = 1; i < 5; i++) {
        set2->insert(i*2);
    }
    printSet(set2);

    delete set1;
    delete set2;

    return 0;
}
