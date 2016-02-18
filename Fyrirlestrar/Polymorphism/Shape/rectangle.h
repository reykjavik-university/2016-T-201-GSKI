#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"

class Rectangle : public Shape
{
public:
	Rectangle(double w, double h)
	{
		width = w;
		height = h;
	}
	double area() { return width * height; }

private:
    double width, height;
};

#endif // RECTANGLE_H
