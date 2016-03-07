//Program to demonstrate use of the Queue class.
#include <iostream>
#include "queue.cpp"
using namespace std;

int main()
{
    Queue<char> q;
    char c;

    q.add('A');
    q.add('B');
    q.add('C');
    q.add('D');
    c = q.remove();
    cout << "Removed: " << c << endl;

    Queue<char>::iterator it, it2;

    for (it = q.begin(); it != q.end(); ++it) {
        cout << "*it = " << *it << endl;
    }

    cout << endl;
    it = q.begin();
    ++(++it);
    cout << *it << endl;

    cout << endl;
    it = q.begin();
    it2 = it++;
    cout << *it << endl;
    cout << *it2 << endl;

    return 0;
}
