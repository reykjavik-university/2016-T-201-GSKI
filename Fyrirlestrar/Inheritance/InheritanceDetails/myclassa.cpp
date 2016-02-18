#include <iostream>
#include "myclassa.h"
using namespace std;

MyClassA::MyClassA(int size) {   // Constructor
    mySize = size;
    arrayA = new int[mySize];
}

MyClassA::MyClassA(const MyClassA& aClass) {  //Copy constructor
    makeCopy(aClass);
}


MyClassA::~MyClassA() {          // Destructor
    cout << "Calling destructor in MyClassA" << endl;
    delete [] arrayA;
}


MyClassA& MyClassA::operator= (const MyClassA& rhs) {   // Overloading of the assignment operator

    if (this != &rhs) {                                                // And return the object
        delete [] arrayA;
        makeCopy(rhs);
    }

    return *this;
}


void MyClassA::setA(int elem, int index) {          // Sets elem at index in arrayA
    arrayA[index] = elem;
}

void MyClassA::fill() {                              // Fills the object with data
    for (int i = 0; i < mySize; i++)
        setA(i, i);
}

void MyClassA::makeCopy(const MyClassA& aClass) { // A helper function
    mySize = aClass.mySize;
    arrayA = new int [mySize];
    for (int i = 0; i < mySize; i++) {
        setA(aClass.arrayA[i], i);
    }

}

ostream& operator <<(ostream& outs, const MyClassA& classA) {
    for (int i = 0; i < classA.mySize; i++) {
        outs << classA.arrayA[i] << " ";
    }
    outs << endl;
    return outs;
}
