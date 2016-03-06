#include <iostream>
#include "queue.h"
using namespace std;

template<class T>
Queue<T>::Queue() : front(NULL), back(NULL) {
    // Creates an empty queue
}

// Destructor
template<class T>
Queue<T>::~Queue() {
    while (!empty()) {
        remove();
    }
}

template<class T>
bool Queue<T>::empty() const {
    return (back == NULL); //front == NULL would also work
}

template<class T>
void Queue<T>::add(const T& val) {
    if (empty()) {   // If queue is empty then add a new item at the front=back
        front = new Node;   // Create a new node
        front->value = val; // Set its value
        front->next = NULL; // It points to "nothing"
        back = front;       // The back pointer points to the same node as front
    }
    else {    // else there is something already in the queue
         Node* p = new Node;        // Create a new node
         p->value = val;            // Sets its value
         p->next = NULL;            // Make it point to NULL
         back->next = p;            // Make the back node point to the new node
         back = p;                  // and make the new node the back node
    }
}

template<class T>
T Queue<T>::remove()
{
    if (empty()) {
        cout << "Error: Removing an item from an empty queue.\n";
        exit(1);
    }
    else {
        T val = front->value; // Get the value of the front node

        Node* discard = front; // Make discard point to front
        front = front->next;     // Move front
        if (front == NULL) {     // if we removed the last node
            back = NULL;
        }
        delete discard;         // Deallocate the discard note
        return val;             // Return the value
    }
}
