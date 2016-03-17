#include <iostream>
#include <list>
#include "point2d.h"
#include "priorityqueue.cpp"
using namespace std;

template <class E>
void removeFromQueue(PriorityQueue<E> q) {

}


int main()
{
    PriorityQueue<Point2D> q1;

    q1.insert(Point2D(1,1));
    q1.insert(Point2D(0,2));
    q1.insert(Point2D(3,3));
    q1.insert(Point2D(2,0));

    removeFromQueue(q1);
    cout << endl;


    return 0;
}
