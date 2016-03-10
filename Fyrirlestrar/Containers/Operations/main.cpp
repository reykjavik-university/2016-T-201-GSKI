#include <iostream>
#include <list>
using namespace std;

const int MAX=10;

void display(list<int>& myList) {
    list<int>::iterator it;
    for (it=myList.begin(); it != myList.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    list<int> myList;   // Creates an empty list of integers

    for (int i = 0; i < MAX; i++) { // Add elements to the list
        myList.push_back(i);
    }

    // Some more stuff

    cout << "The size of the list is: " << myList.size() << endl;
    cout << "The first element is: " << myList.front() << endl;
    cout << "The last element is: " << myList.back() << endl;

    display(myList);

    list<int>::iterator middle, before, after;
    middle = myList.begin();
    for (int i = 0; i < MAX/2; i++, middle++)
        ;
    cout << "Middle element is: " << *middle << endl;

    before = myList.insert(middle, 100);
    cout << "Before element is: " << *before << endl;
    display(myList);

    after = myList.erase(middle);
    //cout << "Middle element is: " << *middle << endl;
    cout << "After element is: " << *after << endl;
    display(myList);

    for (int i = MAX; i < MAX*2; i++) {
        myList.push_back(i);
    }
    display(myList);
    cout << "Middle element is: " << *middle << endl;
    cout << "After element is: " << *after << endl;

    myList.clear();
    display(myList);

    cout << "Middle element is: " << *middle << endl;

    return 0;
}
