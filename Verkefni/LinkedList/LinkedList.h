#ifndef ARRAYLIST_H
#define ARRAYLIST_H

#include "Node.h"

template <class T>
class LinkedList
{
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
        T value() const;            // Returns the element of the current node
        bool empty() const;         // Returns true if the list is empty, else false
        void append (T elem);       // Appends an element at the end of the list
        void insert (const T& elem);// Inserts an element before the current node
        T remove();                 // Removes the current node and returns its element
        void clear();               // Clears the contents of the list
        Node<T>* end() const;           // Returns the node representing the end of the list
        Node<T>* getCurrNode() const;   // Returns the current node
    private:
        void insert(Node<T>* beforeMe, const T& elem);   // Inserts a new node with elem before node beforeMe
        void removeAll();   // Deletes all nodes, excluding the sentinel nodes
        void init();        // Initializes member variables
        int currSize;       // Current number of list items
        Node<T>* currNode;  // A pointer to the current node of the list
        Node<T>* header;    // A pointer to the header (a sentinel node)
        Node<T>* trailer;   // A pointer to the trailer (a sentinel node)
};

#endif // ARRAYLIST_H
