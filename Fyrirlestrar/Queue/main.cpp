#include <iostream>
#include "Queue.cpp"
using namespace std;


int main( )
{
    Queue<char> q1;
    char next;

    cout << "Enter a word: ";
    cin.get(next);
    while (next != '\n')
    {
        q1.add(next);
        cin.get(next);
    }
    cout << "Size of first queue: " << q1.size() << endl;

    Queue<char> q2(q1);

    cout << "Remove from first queue: ";
    while ( !q1.empty() )
        cout << q1.remove();
    cout << endl;

    cout << "Contents of first queue after remove(): " << q1;
    cout << "Size of first queue after remove: " << q1.size() << endl;

    cout << "Contents of second queue: " << q2;

    q1 = q2;
    cout << "Contents of first queue after assignment: " << q1;

    cout << "Remove from second queue: ";
    while ( !q2.empty() )
        cout << q2.remove();
    cout << endl;

    cout << "Contents of first queue: " << q1;


    Queue<char> q3;
    q3 = q2 = q1;
    cout << "Contents of third queue: " << q3;
    cout << "Size of third queue: " << q3.size() << endl;


    return 0;
}


