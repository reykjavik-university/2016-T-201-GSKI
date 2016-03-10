#include <iostream>
#include <list>
using namespace std;

const int MAX=10;

int main()
{
    list<int> myList;   // Creates an empty list of integers

    for (int i = 0; i < MAX; i++) { // Add elements to the list
        myList.push_back(i);
    }

    // Some more stuff

    return 0;
}
