#ifndef STACK_H
#define STACK_H

#include <iostream>
#include "Node.h"
using namespace std;

template <class T>
class Queue
{
    public:
        Queue();    //Initializes the object to an empty queue.
        Queue(const Queue<T>& aQueue); //Copy constructor.
        ~Queue();   //Destroys the queue and returns all the memory

        int size() const;         // Returns queue size
        bool empty() const;
        void add(const T& elem);  // Adds element at rear
        T remove();               // Returns the front element and removes it
        Node<T>* getFront() const; // The front node

        Queue<T>& operator =(const Queue<T>& aQueue);

        // A friend function for writing the contents of aStack to an output stream
        template <typename U>
        friend ostream& operator <<(ostream& outs, const Queue<U>& aQueue);

    private:
        void init();
        void removeAll();
        void addAll(const Queue<T>& aQueue);
        Node<T>* front;
        Node<T>* back;
};

#endif //STACK_H

