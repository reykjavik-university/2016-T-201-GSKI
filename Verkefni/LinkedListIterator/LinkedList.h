#ifndef ARRAYLIST_H
#define ARRAYLIST_H

#include <iostream>
using namespace std;

class LinkedListException {
    // Implement this
};

template <class T>
class LinkedList
{
    // The node class should now be part of this LinkedList class
    // You also need to implement an iterator class as part of this LinkedList class
    public:
        LinkedList();                   // Constructor
        LinkedList(LinkedList<T>& lis); // Copy constructor;
        ~LinkedList();                  // Destructor

        void next();                // Moves the current node one step right
        void prev();                // Moves the current node one step left
        void moveToStart();         // Moves the current node to the start of the list
        void moveToEnd();           // Moves the current node past the last node of the list
        void moveToPos(int pos);    // Moves the current node to the one at pos
        int length() const;         // Returns the current length of the list
        T value() const throw(LinkedListException); // Returns the element of the current node
        bool empty() const;         // Returns true if the list is empty, else false
        void append (T elem);       // Appends an element at the end of the list
        void insert (const T& elem);// Inserts an element before the current node
        T remove() throw(LinkedListException); // Removes the current node and returns its element
        void clear();               // Clears the contents of the list

    private:
        void insert(Node* beforeMe, const T& elem);   // Inserts a new node with elem before node beforeMe
        void removeAll();   // Deletes all nodes, excluding the sentinel nodes
        void init();        // Initializes member variables
        int currSize;       // Current number of list items
        Node* currNode;  // A pointer to the current node of the list
        Node* header;    // A pointer to the header (a sentinel node)
        Node* trailer;   // A pointer to the trailer (a sentinel node)

};

#endif // ARRAYLIST_H
