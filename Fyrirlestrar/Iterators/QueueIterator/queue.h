// This example demonstrates a queue template class along with an iterator
#ifndef QUEUE_H
#define QUEUE_H
#include <cstdlib>

// A queue as a linked list
template<class T>
class Queue {

public:
    Queue();    // Creates an empty queue
    ~Queue();   // Destructor
    bool empty() const; //Returns true if the queue is empty, false otherwise.
    T remove(); //Returns the item at the front of the queue and removes that item from the queue.
    void add(const T& val); // Adds the item to the end of the queue
private:
   // The Node class holds the value
   class Node {
   public:
      Node() : next(NULL) {}    // value is undefined!
      T value;
      Node* next;
   };

   Node* front;  // the head of the queue
   Node* back;   // the end of the queue

public:
    class QueueIterator {
    public:
        QueueIterator() : node(NULL) {}
        QueueIterator(Node* p) : node(p) {}
        bool operator==(const QueueIterator& other)
        {
            return(node == other.node);
        }

        bool operator!=(const QueueIterator& other)
        {
            return(node != other.node);
        }

        T operator*()
        {
            return(node->value);
        }

        QueueIterator& operator++()
        {
            if (node != NULL)
                node = node->next;
            return (*this);
        }

        QueueIterator operator++(int) {
            QueueIterator result(*this);
            ++(*this);
            return result;
        }

    private:
        Node* node;
    };

QueueIterator begin()    {return (QueueIterator(front));}
QueueIterator end()      {return (QueueIterator(NULL));}

typedef QueueIterator iterator;
};

#endif // QUEUE_H
