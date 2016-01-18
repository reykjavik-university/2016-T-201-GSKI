#include <iostream>
#include <string>
using namespace std;

struct Node
{
    string item;
    int count;
    Node *link;
};

typedef Node* NodePtr;

int main()
{
    NodePtr head;

    head = new Node;
    head->count = 5;
    head->item = "eggs";
    head->link = NULL;

    cout << head->item << ": " << head->count << endl;
}
