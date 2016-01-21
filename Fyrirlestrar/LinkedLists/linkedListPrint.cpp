#include <iostream>
#include <sstream>
#include <string>
using namespace std;

struct Node
{
    string item;
    int count;
    Node *link;
};

typedef Node* NodePtr;

void head_insert(NodePtr& head, int the_number, string the_item);
void print(NodePtr head);

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

    for (int i = 0; i < 10; i++) {
        head_insert(head, i*i, intToStr(i));
    }

    print(head);

}

void head_insert(NodePtr& head, int the_number, string the_item) {

    NodePtr tmpPtr;
    tmpPtr = new Node;
    tmpPtr->count = the_number;
    tmpPtr->item = the_item;
    tmpPtr->link = head;
    head = tmpPtr;
}

void print(NodePtr head) {

    if (head == NULL) {
        cout << "List is empty!" << endl;
        return;
    }

    /*NodePtr curr = head;
    while (curr != NULL) {
        cout << curr->item << ": " << curr->count << endl;
        curr = curr->link;
    }*/

    //cout << endl;
    for (NodePtr iter = head; iter != NULL; iter = iter->link)
        cout << iter->item << ": " << iter->count << endl;
}
