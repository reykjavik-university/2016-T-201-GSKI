#include <iostream>
#include "myclassa.h"
#include "myclassb.h"
using namespace std;

int main() {
    MyClassA a(5);  // Calls the constructor

    a.fill();
    cout << "Print a after filling:" << endl;
    cout << a;

    MyClassA a2(a);  // Calls the copy constructor
    a2.setA(10,4);
    cout << "Print a2 after copying from a and changing" << endl;
    cout << a2;

    cout << "Print a" << endl;
    cout << a;

    cout << endl;
    MyClassA a3(10);
    a3.fill();
    cout << "Print a3 after filling" << endl;
    cout << a3;

    a3 = a;
    cout << "Print a3 after assigning a to it" << endl;
    cout << a3;
    cout << endl;

    MyClassB b(7);
    b.fill();
    b.setB(10,0);
    cout << "Print b after filling and changing" << endl;
    cout << b;

    MyClassB b2(b);
    b.setB(0,0);
    cout << "Print b2 after copying from b but changing b in between" << endl;
    cout << b2; // What happens if MyClassB does not redefine the copy constructor?
    cout << "Print b after changing" << endl;
    cout << b;

    MyClassB b3(1);
    b3.fill();
    cout << "Print b3 after filling it" << endl;
    cout << b3;
    b3 = b2;
    b2.setA(100,0);
    cout << "Print b3 after assigning b2 to it, but changing b2 in between" << endl;
    cout << b3;
    cout << "Print b2 after changing it" << endl;
    cout << b2;

    cout << endl;
    return 0;
}
