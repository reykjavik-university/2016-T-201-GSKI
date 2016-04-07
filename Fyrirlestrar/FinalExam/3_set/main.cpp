#include <iostream>
#include <cstdio>
#include "Set.h"

using namespace std;


int main() {
    #ifndef EXAM // DO NOT COMMENT THIS LINE OUT
    // If you don't want to use the test input, you can comment the following line out.
    freopen("input.txt", "r", stdin);
    #endif // DO NOT COMMENT THIS LINE OUT


    // Each test case consists of an integer n and following that integer are n
    // integers which are inserted into the set.
    // You can add as many test cases as you like to input.txt
    int n;
    int count = 1;
    while (cin >> n) {
        cout << "Test case " << (count++) << endl;
        Set set;
        int e;
        for(int i = 0; i < n; i++) {
            cin >> e;
            set.insert(e);
        }
        set.print();
        cout << set.range() << endl;
        set.remove_min(3);
        set.print();
        cout << endl;

    }

    return 0;
}
