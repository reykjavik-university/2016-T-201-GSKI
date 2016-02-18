#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"

class Circle : public Shape
{
public:
    static const double PI = 3.14159;
	Circle(double r) { radius = r; }
	double area()
	{
		return PI*radius*radius;
	}
private:
    double radius;
};

#endif // CIRCLE_H
