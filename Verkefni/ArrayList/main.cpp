#include <iostream>
#include "arraylist.cpp"
using namespace std;

int readNum() {
    int num;
    cin >> num;
    return num;
}

template <class T>
void print(ArrayList<T>& theList) {
    for (theList.moveToStart(); theList.currPos() < theList.length(); theList.next()) {
        cout << theList.value() << endl;
    }
    cout << endl;
    theList.moveToStart();
}

template <class T>
void readList(ArrayList<T>& theList) {
    int count = readNum();
    for (int i = 0; i < count; i++) {
        T num;
        cin >> num;
        theList.append(num);
    }
}

template <class T>
void testList(ArrayList<T>& theList) {

    readList(theList);
    print(theList);
    T firstElem = theList.value();

    theList.next();
    theList.next();
    theList.remove();
    print(theList);

    theList.moveToEnd();
    theList.prev();
    T lastElem = theList.value();

    int pos = theList.length() / 2;
    theList.moveToPos(pos);
    theList.insert(firstElem);
    theList.moveToPos(++pos);
    theList.insert(lastElem);
    print(theList);

    theList.moveToStart();
    cout << theList.value() << endl;
    theList.prev();
    cout << theList.value() << endl;

    theList.moveToEnd();
    theList.prev();
    cout << theList.value() << endl;
    cout << endl;

    theList.append(lastElem);
    print(theList);

    theList.clear();
    theList.append(firstElem);
    theList.append(lastElem);
    print(theList);
}

int main()
{
    int initialSize = readNum();
    ArrayList<int> myIntList(initialSize);
    testList(myIntList);

    initialSize = readNum();
    ArrayList<string> myStringList(initialSize);
    testList(myStringList);

    return 0;
}
