#include <iostream>
#include "myclassa.h"
using namespace std;

MyClassA::MyClassA(int size) {   // Constructor

}

MyClassA::MyClassA(const MyClassA& aClass) {  //Copy constructor

}


MyClassA::~MyClassA() {          // Destructor
    cout << "Calling destructor in MyClassA" << endl;

}


MyClassA& MyClassA::operator= (const MyClassA& rhs) {   // Overloading of the assignment operator
                                                        // And return the object
}


void MyClassA::setA(int elem, int index) {          // Sets elem at index in arrayA

}

void MyClassA::fill() {                              // Fills the object with data

}

void MyClassA::makeCopy(const MyClassA& aClass) { // A helper function


}

ostream& operator <<(ostream& outs, const MyClassA& classA) {

}
