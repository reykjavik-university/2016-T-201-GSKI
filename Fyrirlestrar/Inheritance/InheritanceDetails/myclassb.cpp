#include <iostream>
#include "myclassb.h"
using namespace std;

MyClassB::MyClassB(int size) : MyClassA(size)  {  // Constructor
    arrayB = new int [size];
}

MyClassB::MyClassB(const MyClassB& aClass) : MyClassA(aClass) { //Copy constructor
    makeCopy(aClass);
}


MyClassB::~MyClassB() {                      // Destructor
    cout << "Calling destructor in MyClassB" << endl;
    delete [] arrayB;

}

MyClassB& MyClassB::operator= (const MyClassB& rhs) { // Overloading of the assignment operator
    if (this != &rhs) {                                                // And return the object
        MyClassA::operator=(rhs);
        delete [] arrayB;
        makeCopy(rhs);
    }

    return *this;
}

void MyClassB::fill() {          // Fills the object with data
    MyClassA::fill();
    for (int i = mySize-1; i >= 0; i--)
        setB(i, mySize-i-1);
}

void MyClassB::setB(int elem, int index) {           // Sets elem at index in arrayB
    arrayB[index] = elem;
}

void MyClassB::makeCopy(const MyClassB& aClass) { // A helper function
    mySize = aClass.mySize;
    arrayB = new int [mySize];
    for (int i = 0; i < mySize; i++) {
        setB(aClass.arrayB[i], i);
    }

}

ostream& operator <<(ostream& outs, const MyClassB& classB) {
    outs << static_cast<const MyClassA&>(classB);

    for (int i = 0; i < classB.mySize; i++) {
        outs << classB.arrayB[i] << " ";
    }
    outs << endl;
    return outs;
}
