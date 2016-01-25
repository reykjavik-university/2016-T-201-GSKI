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
void printNode(NodePtr node);

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

    NodePtr four = search(head, "4");
    printNode(four);

    insert(four, "new", 10);
    printList(head);

    NodePtr six = search(head, "6");
    NodePtr seven = search(head, "7");
    remove(seven, six);
    printList(head);

    cout << "After deletion" << endl;
    deleteList(head);
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

void printNode(NodePtr node) {
    if (node != NULL)
        cout << node->item << ": " << node->count << endl;
}

void printList(NodePtr head)
{
    for(NodePtr iter = head; iter != NULL; iter = iter->link)
    {
        printNode(iter);
    }
    cout << endl;
}

NodePtr search(NodePtr head, string item) {
    /*NodePtr here = head;
    while (here != NULL) {
        if (here->item == item)
            return here;
        else
            here = here->link;
    }
    return NULL;*/

    for (NodePtr iter = head; iter != NULL; iter = iter->link) {
        if (iter->item == item)
            return iter;
    }
    return NULL;
}

void insert(NodePtr afterMe, string item, int number) {
    NodePtr newNode = new Node;
    newNode->item = item;
    newNode->count = number;
    newNode->link = afterMe->link;
    afterMe->link = newNode;
}

void remove(NodePtr before, NodePtr discard) {
    before->link = discard->link;
    delete discard;
}

void deleteList(NodePtr& head) {
    NodePtr here = head;
    while (here != NULL) {
        NodePtr tmpPtr = here->link;
        delete here;
        here = tmpPtr;
    }
    head = NULL;
}



