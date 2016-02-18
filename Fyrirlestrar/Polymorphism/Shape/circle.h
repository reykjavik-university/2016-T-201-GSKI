#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"

const double PI = 3.14159;

class Circle : public Shape
{
public:
	Circle(double r) { radius = r; }
	double area()
	{
		return PI*radius*radius;
	}
private:
    double radius;
};

#endif // CIRCLE_H
