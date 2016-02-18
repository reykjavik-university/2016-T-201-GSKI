#include <iostream>
#include <string>

#include "circle.h"
#include "rectangle.h"

using namespace std;

int main()
{
	Circle circ(3);
	Rectangle rect(3,4);

	Shape* ptr = &circ;
	cout << "circ area: " << ptr->area() << endl;

	ptr = &rect;
	cout << "rect area: " << ptr->area() << endl;

	return 0;
}
