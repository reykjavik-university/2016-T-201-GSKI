#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
using namespace std;

class Shape
{
public:
	void set_data (float a, float b)
	{
		width = a;
		height = b;
	}

	float area() { cout << "Does not make sense!" << endl; return 0.0; }
protected:
    float width, height;

};

class Rectangle: public Shape
{
public:
	float area () { return width * height; }
};

class Triangle: public Shape
{
public:
	float area () { return width * height / 2; }
};

#endif // SHAPE_H
