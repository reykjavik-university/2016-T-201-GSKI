#include <iostream>
#include <sstream>
#include "List.cpp"
using namespace std;

string intToStr(int val) {
    stringstream ss;
    string target;
    ss << val;
    ss >> target;

    return target;
}

void TestIntegers() {
    List<int>* myList = new List<int>();

    for(int i = 0; i < 10; i++)
    {
        myList->headInsert(i);
    }

    cout << myList;

    Node<int>* four = myList->search(4);
    cout << four << endl;
    cout << endl;

    myList->insert(four, 100);
    cout << myList;

    Node<int>* six = myList->search(6);
    Node<int>* seven = myList->search(7);
    myList->remove(seven, six);
    cout << myList;

    delete myList;

}

void TestStrings() {
    List<string>* myList = new List<string>();

    for(int i = 0; i < 10; i++)
    {
        myList->headInsert(intToStr(i));
    }

    cout << myList;

    Node<string>* seven = myList->search("7");
    cout << seven << endl;
    cout << endl;

    myList->insert(seven, "new");
    cout << myList;

    Node<string>* zero = myList->search("0");
    Node<string>* one = myList->search("1");
    myList->remove(one, zero);
    cout << myList;

    delete myList;

}

int main()
{
    TestIntegers();
    TestStrings();

    return 0;
}

