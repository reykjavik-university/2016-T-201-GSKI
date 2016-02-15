#ifndef THREED_H
#define THREED_H

#include "twoD.h"

class ThreeD : public TwoD
{
   public:
        // Inline implemenation of constructor.
        // Constructor of the base class is not inherited.
        // The following constructor of threeD class reuses the
        // constructor of the twoD class and the only way values
        // can be passed to the twoD constructor is via the use
        // of a member initialization list.
        ThreeD(double i, double j, double k) : TwoD(i,j), z(k) { }

        void setZ(double NewZ){ z = NewZ; }
        double getZ() { return z; }

        void print() const { cout << "{" << getX() << "," << getY() << "," << z << "}" << endl; }

	private:
        double z;
};

#endif // THREED_H
