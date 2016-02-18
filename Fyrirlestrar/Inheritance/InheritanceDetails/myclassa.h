#ifndef MYCLASSA_H
#define MYCLASSA_H

#include <iostream>
using namespace std;

typedef int* IntPtr;

class MyClassA
{
    public:
        MyClassA(int size);                 // Constructor
        MyClassA(const MyClassA& aClass);   //Copy constructor
        ~MyClassA();                        // Destructor
        MyClassA& operator= (const MyClassA& rhs);  // Overloading of the assignment operator
        void fill();                        // Fills the object with data
        void setA(int elem, int index);    // Sets elem at index in arrayA
        friend ostream& operator <<(ostream& outs, const MyClassA& classA);
    protected:
        int mySize;                         // The size of the array
    private:
        IntPtr arrayA;                      // A dynamic array
        void makeCopy(const MyClassA& aClass); // A helper function
};

#endif // MYCLASSA_H
