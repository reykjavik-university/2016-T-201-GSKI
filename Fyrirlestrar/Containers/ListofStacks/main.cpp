#include <iostream>
#include <list>
#include <stack>
using namespace std;

//Write a template function tops which takes as a parameter an STL list of stacks
// and returns a list (as the function result) of the tops of the stacks in the list.
// The top values are to be returned in the same order as they were on the stacks.

int main()
{
    stack<int> s1, s2, s3;

    for (int i=0; i<4; i++)
    {
        s1.push(i);
        s2.push(i+4);
        s3.push(i+8);
    }

    list< stack<int> > listOfStacks;
    listOfStacks.push_back(s1);
    listOfStacks.push_back(s2);
    listOfStacks.push_back(s3);

    list<int> topList = tops(listOfStacks);

    list<int>::iterator it;
    for (it = topList.begin(); it != topList.end(); it++)
        cout << *it << " ";

    cout << endl;
    return 0;
}
