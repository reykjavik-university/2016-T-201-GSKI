#include <iostream>
#include <sstream>
#include <string>
using namespace std;

template <class T>
struct Node
{
    T item;
    int count;
    Node *link;
};

//typedef Node* NodePtr;

string intToStr(int val) {
    stringstream ss;
    string target;
    ss << val;
    ss >> target;

    return target;
}

template <class T>
void head_insert(Node<T>* &head, int the_number, T the_item) {

    Node<T>* tmpPtr;
    tmpPtr = new Node<T>;
    tmpPtr->count = the_number;
    tmpPtr->item = the_item;
    tmpPtr->link = head;
    head = tmpPtr;
}

template <class T>
void print(Node<T>* head) {

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

    for (Node<T>* iter = head; iter != NULL; iter = iter->link)
        cout << iter->item << ": " << iter->count << endl;
}

int main()
{
    Node<string>* head = NULL;

    for (int i = 0; i < 10; i++) {
        head_insert(head, i*i, intToStr(i));
    }
    print(head);

    Node<int>* head2 = NULL;

    for (int i = 0; i < 10; i++) {
        head_insert(head2, i, i+3);
    }
    print(head2);

    return 0;
}


