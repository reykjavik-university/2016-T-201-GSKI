#include <iostream>
#include "myclassb.h"
using namespace std;

MyClassB::MyClassB(int size)  {  // Constructor

}

MyClassB::MyClassB(const MyClassB& aClass) { //Copy constructor

}


MyClassB::~MyClassB() {                      // Destructor
    cout << "Calling destructor in MyClassB" << endl;

}

MyClassB& MyClassB::operator= (const MyClassB& rhs) { // Overloading of the assignment operator

}

void MyClassB::fill() {          // Fills the object with data

}

void MyClassB::setB(int elem, int index) {           // Sets elem at index in arrayB

}

void MyClassB::makeCopy(const MyClassB& aClass) { // A helper function

}

ostream& operator <<(ostream& outs, const MyClassB& classB) {

}
