#include <iostream>
#include <sstream>
using namespace std;

struct Node
{
    string item;
    int count;
    Node *link;
};

typedef Node* NodePtr;

void headInsert(NodePtr& head, string item, int count);
void printList(NodePtr head);

NodePtr search(NodePtr head, string item);
void insert(NodePtr afterMe, string item, int number);
void remove(NodePtr before, NodePtr discard);
void deleteList(NodePtr& head);


string intToStr(int val) {
    stringstream ss;
    string target;
    ss << val;
    ss >> target;

    return target;
}

int main()
{
    NodePtr head = NULL;

    for(int i = 0; i < 10; i++)
    {
        headInsert(head, intToStr(i), i*i);
    }

    printList(head);
}

void headInsert(NodePtr& head, string item, int count)
// Creates a new Node with the given values and makes it the head of the given list
{
    NodePtr tmpPtr;
    tmpPtr = new Node;
    tmpPtr->item = item;
    tmpPtr->count = count;
    tmpPtr->link = head;
    head = tmpPtr;
}

void printList(NodePtr head)
{
    for(NodePtr iter = head; iter != NULL; iter = iter->link)
    {
        cout << iter->item << ": " << iter->count << endl;
    }
    cout << endl;
}

