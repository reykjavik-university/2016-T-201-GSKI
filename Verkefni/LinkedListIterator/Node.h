#ifndef NODE_H
#define NODE_H

#include <iostream>
using namespace std;

template <class T>
class Node
{
    public:
        // Constructs a new node with default value
        Node() : data(T()) {};
        // Constructs a new node with a value, next and previous links
        Node(T value, Node *nextLink, Node* prevLink) : data(value), next(nextLink), prev(prevLink) {};

        // Retrieve value for this node
        T getData() const { return data; } ;
        // Retrieve the next node
        Node* getNext() const { return next; };
        // Retrieve previous node
        Node* getPrev() const { return prev; };

        // Modifies the value
        void setValue(T value) { data = value; };
        // Changes the reference to the next node
        void setNext(Node* nextLink) { next = nextLink; };
        // Changes the reference to the previous node
        void setPrev(Node* prevLink) { prev = prevLink; };


    private:
        T data;
        Node* next;
        Node* prev;
};

#endif // NODE_H
