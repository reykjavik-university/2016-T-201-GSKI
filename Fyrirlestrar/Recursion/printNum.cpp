#include <iostream>
using namespace std;

void printNum(int val) {

    cout << val << endl;
    if (val < 9) {
        printNum(val+1);
    }
    cout << val << endl;
}

int main() {
    printNum(3);
}
