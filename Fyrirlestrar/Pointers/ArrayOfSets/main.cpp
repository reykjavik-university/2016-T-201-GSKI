#include <iostream>
#include <ctime>    // for time
#include <cstdlib>  // for rand
#include "set.h"
using namespace std;

typedef Set* SetPtr;

const int NUM_ELEMENTS = 10;
const int MAX_ELEMENT = 20;

void printSet(Set& set) {
    cout << set << endl;
}

void generateSet(Set& set) {
    for (int i = 0; i < NUM_ELEMENTS; i++) {
        int val = rand() % MAX_ELEMENT;
        set.insert(val);
    }
}

int main()
{
    srand(time(0)); // Seed the pseudo-random generator
    int num;
    cout << "How many sets do you want? ";
    cin >> num;

    Set* mySets = new Set[num];
    for (int i = 0; i < num; i++) {
        generateSet(mySets[i]);
        printSet(mySets[i]);
    }

    delete [] mySets;

    return 0;
}
