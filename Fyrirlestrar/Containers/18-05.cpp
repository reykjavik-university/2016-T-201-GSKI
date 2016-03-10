//DISPLAY 18.5 Using the list Template Class
//Program to demonstrate the STL template class list.
#include <iostream>
#include <list>
using std::cout;
using std::endl;
using std::list;

int main( )
{
    list<int> list_object;

    for (int i = 1; i <= 3; i++)
        list_object.push_back(i);

    cout << "List contains:\n";
    list<int>::iterator iter;
    for (iter = list_object.begin( ); iter != list_object.end( ); iter++)
        cout << *iter << " ";
    cout << endl;

    cout << "Setting all entries to 0:\n";
    for (iter = list_object.begin( ); iter != list_object.end( ); iter++)
        *iter = 0;

    cout << "List now contains:\n";
    for (iter = list_object.begin( ); iter != list_object.end( ); iter++)
        cout << *iter << " ";
    cout << endl;

    return 0;
}

