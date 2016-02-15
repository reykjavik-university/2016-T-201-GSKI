#include <iostream>
#include "shape.h"
using namespace std;

int main ()
{
    Shape s;
    s.area();

	Rectangle rect;
	Triangle tri;
	rect.set_data (5,3);
	tri.set_data (2,5);
	cout << rect.area() << endl;
	cout << tri.area() << endl;
	return 0;
}
