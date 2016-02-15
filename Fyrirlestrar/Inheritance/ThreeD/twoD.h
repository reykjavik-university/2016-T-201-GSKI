#ifndef TWOD_H
#define TWOD_H

#include <iostream>
using namespace std;

class TwoD
{
   public:
        // inline implementation of constructor
        TwoD(double i, double j): x(i), y(j) {}

        // inline implementation of member functions
        void setX(double NewX) { x = NewX; }
        void setY(double NewY) { y = NewY; }
        double getX() const { return x; }
        double getY() const { return y; }

        void print() const { cout << "{" << x << "," << y << "}" << endl; }

    private:
        double x, y;    // x and y  coordinates

};

#endif // TWOD_H
