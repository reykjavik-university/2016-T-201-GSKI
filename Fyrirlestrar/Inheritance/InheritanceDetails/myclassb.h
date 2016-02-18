#ifndef MYCLASSB_H
#define MYCLASSB_H

#include "myclassa.h"

class MyClassB : public MyClassA
{
    public:
        MyClassB(int size);   // Constructor
        MyClassB(const MyClassB& aClass);   //Copy constructor
        ~MyClassB();          // Destructor
        MyClassB& operator= (const MyClassB& rhs);  // Overloading of the assignment operator
        void fill();         // Fills the object with data
        void setB(int elem, int index);    // Sets elem at index in arrayB
        friend ostream& operator <<(ostream& outs, const MyClassB& classB);
    private:
        IntPtr arrayB;      // A dynamic array
        void makeCopy(const MyClassB& aClass); // A helper function
};

#endif // MYCLASSB_H
