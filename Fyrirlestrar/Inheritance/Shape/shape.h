#ifndef SHAPE_H
#define SHAPE_H

class Shape
{
public:
	void set_data (float a, float b)
	{
		width = a;
		height = b;
	}
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
