#ifndef SHAPE_H
#define SHAPE_H


class Shape //Base class
{
public:
	Shape() {}
	virtual double area() { return 0; }
};

#endif // SHAPE_H
