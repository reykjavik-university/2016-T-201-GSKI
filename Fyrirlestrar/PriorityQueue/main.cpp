#include <iostream>
#include <list>
#include "point2d.h"
#include "priorityqueue.cpp"
using namespace std;

template <class E, class C>
void removeFromQueue(PriorityQueue<E,C> q) {

    int upTo = q.size();
    for (int i = 0; i < upTo; i++) {
        Point2D elem = q.min();
        cout << "Point: (" << elem.getX() << ", " << elem.getY() << ")" << endl;
        q.removeMin();
    }
}


int main()
{
    PriorityQueue<Point2D,LeftRight> q1;
    PriorityQueue<Point2D,BottomUp> q2;

    q1.insert(Point2D(1,1));
    q1.insert(Point2D(0,2));
    q1.insert(Point2D(3,3));
    q1.insert(Point2D(2,0));
    removeFromQueue(q1);
    cout << endl;

    q2.insert(Point2D(1,1));
    q2.insert(Point2D(0,2));
    q2.insert(Point2D(3,3));
    q2.insert(Point2D(2,0));
    removeFromQueue(q2);
    cout << endl;


    return 0;
}
