#ifndef NODE_H
#define NODE_H

#include <iostream>
using namespace std;

template <class T>
class Node
{
    public:
        // Constructs a node with a value and next link
        Node(T value, Node *next) : data(value), link(next) {};

        // Retrieve value for this node
        T getData() const { return data; } ;
        // Retrieve next node in the list
        Node* getLink() const { return link; };

        // Modifies the value stored in the list
        void setValue(T value) { data = value; };
        // Changes the reference to the next node
        void setLink(Node* next) { link = next; };

        // Overload the << operator
        friend ostream& operator<< (ostream& out, Node<T>* node) {
            if (node != NULL)
                out << node->data;
            return out;
        }

    private:
        T data;
        Node<T> *link;
};

#endif // NODE_H
