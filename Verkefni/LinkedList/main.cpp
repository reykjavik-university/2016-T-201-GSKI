#include <iostream>
#include "LinkedList.cpp"
using namespace std;

int readNum() {
    int num;
    cin >> num;
    return num;
}

template <class T>
void print(LinkedList<T>& theList) {

    for (theList.moveToStart(); theList.getCurrNode() != theList.end(); theList.next()) {
        cout << theList.value() << endl;
    }
    cout << endl;

    theList.moveToStart();
}


template <class T>
void readList(LinkedList<T>& theList) {
    int count = readNum();
    for (int i = 0; i < count; i++) {
        T num;
        cin >> num;
        theList.append(num);
    }
}

template <class T>
void testList(LinkedList<T>& theList) {

    cout << "Printing empty list: " << endl;
    print(theList);

    cout << "Now reading list data: " << endl;
    readList(theList);
    cout << endl;

    cout << "List length is: " << theList.length() << endl;
    print(theList);

    T firstElem = theList.value();
    theList.next();
    theList.next();

    if (theList.getCurrNode() != theList.end()) {
        T elem = theList.remove();

        cout << "Removed element: " << elem << endl;
        cout << "List length is: " << theList.length() << endl;
        cout << "Current element: " << theList.value() << endl;
        print(theList);
    }

    theList.moveToEnd();
    theList.prev();
    T lastElem = theList.value();
    cout << "Last element: " << lastElem << endl;

    int pos = theList.length() / 2;
    theList.moveToPos(pos);
    theList.insert(firstElem);
    theList.moveToPos(++pos);
    theList.insert(lastElem);
    cout << "List length is: " << theList.length() << endl;
    print(theList);

    theList.moveToPos(theList.length()+1);
    theList.prev();
    cout << "Last element: " << theList.value() << endl;

    theList.moveToStart();
    cout << theList.value() << endl;
    theList.prev();
    cout << theList.value() << endl;

    theList.append(lastElem);
    print(theList);

    theList.clear();
    if (theList.empty())
        cout << "The list is empty" << endl;
    theList.append(firstElem);
    theList.append(lastElem);
    cout << "List length is: " << theList.length() << endl;
    print(theList);

    cout << "Copying list: " << endl;
    LinkedList<T> theList2(theList);
    print(theList2);

    // Clear original list; should not affect the copy
    theList.clear();
    print(theList2);

}

int main()
{
    LinkedList<int> myIntList;
    testList(myIntList);

    LinkedList<string> myStringList;
    testList(myStringList);

    return 0;
}
