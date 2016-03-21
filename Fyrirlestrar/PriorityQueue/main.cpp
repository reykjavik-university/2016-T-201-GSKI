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

template <class E>
void displayList(list<E>& l) {
    typename list<E>::const_iterator it;
    for (it=l.begin(); it != l.end(); it++)
        cout << *it << " ";
    cout << endl;
}

template <class E>
void sortList(list<E>& l) {
    PriorityQueue<E,less<E>> q;

    while(!l.empty()) {
        E elem = l.front();
        l.pop_front();
        q.insert(elem);
    }

    while(!q.empty()) {
        E elem = q.min();
        q.removeMin();
        l.push_back(elem);
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

    list<int> lis;
    for (int i = 20; i >= 0; i--)
        lis.push_back(i);
    displayList(lis);

    sortList(lis);
    displayList(lis);

    return 0;
}
