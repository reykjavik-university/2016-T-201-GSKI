#ifndef LIST_H
#define LIST_H

#include <iostream>
#include "Node.h"
using namespace std;

template <class T>
class List
{
    public:
        List();     // Constructor: creates an empty list
        ~List();    // Destructor

        // Returns the head
        Node<T>* getHead() const;

        // Inserts a new node with value at the head of the list
        void headInsert(T value);

        // Search for value
        Node<T>* search(T value);

        // Inserts a new node with value after node afterMe
        void insert(Node<T>* afterMe, T value);

        // Removes the node discard
        void remove(Node<T>* before, Node<T>* discard);

        template <typename U>
        friend ostream& operator<< (ostream& out, List<U>* lis);

    private:
        // Removes all the nodes in the list
        void removeAll();
        Node<T>* head; // pointer to the head of the list
};

#endif // LIST_H
