#include <iostream>
#include <sstream>
using namespace std;

struct Node
{
    string item;
    int count;
    Node* forwardLink;
    Node* backLink;
};

typedef Node* NodePtr;

void headInsert(NodePtr& head, string item, int count);
void printList(NodePtr head);
void printNode(NodePtr node);
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

    cout << "Normal order: " << endl;
    printList(head);

    deleteList(head);
}

void headInsert(NodePtr& head, string item, int count)
// Creates a new Node with the given values and makes it the head of the given list
{
    NodePtr tmpPtr = new Node;
    tmpPtr->item = item;
    tmpPtr->count = count;
    tmpPtr->forwardLink = head;

    head = tmpPtr;
}

void printList(NodePtr head)
{
    for(NodePtr iter = head; iter != NULL; iter = iter->forwardLink)
    {
        printNode(iter);
    }
    cout << endl;
}

void printNode(NodePtr node)
{
    cout << node->item << ": " << node->count << endl;
}

void deleteList(NodePtr& head) {
    NodePtr here = head;
    while(here != NULL) {
        NodePtr tmpPtr = here->forwardLink;
        delete here;
        here = tmpPtr;
    }
    head = NULL;
}
