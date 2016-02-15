#include <iostream>
using namespace std;

#include "threeD.h"

int main()
{
	TwoD obj2(1, 1);
	ThreeD obj3(1, 2, 3);
	cout << "Coordinates for the 2d object are: " <<endl;
	obj2.print();
	cout << "Coordinates for the 3d object are: " <<endl;
	obj3.print();
	return 0;
}
