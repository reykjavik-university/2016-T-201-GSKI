#include <iostream>
#include "Queue.h"
using namespace std;

template <class T>
Queue<T>::Queue()
{
    init();
}


template <class T>
Queue<T>::Queue(const Queue<T>& aQueue)
{
    cout << "Running the copy constructor!" << endl;
    init();
    addAll(aQueue);
}

template <class T>
Queue<T>& Queue<T>::operator =(const Queue<T>& aQueue) {

    cout << "Running the assignment operator!" << endl;

    if (this != &aQueue) {
        removeAll();
        addAll(aQueue);
    }
    return *this;

}


template <class T>
Queue<T>::~Queue( )
{
    cout << "Running the destructor!" << endl;
    removeAll();
}


template <class T>
void Queue<T>::removeAll()
{
    while (!empty())
        remove();
}

template <class T>
void Queue<T>::addAll(const Queue<T>& aQueue)
{
    for (Node<T>* iter = aQueue.getFront(); iter != NULL; iter = iter->getLink())
    {
        add(iter->getData());
    }
}

template <class T>
void Queue<T>::init()
{
    front = NULL;
    back = NULL;
}


template <class T>
bool Queue<T>::empty() const
{
    return (front == NULL);
}

template <class T>
void Queue<T>::add(const T& elem)
{
    if (empty()) {
       front = new Node<T>(elem, NULL);
       back = front;
    }
    else
    {
        Node<T>* newNode = new Node<T>(elem,NULL);
        back->setLink(newNode);
        back = newNode;
    }

}

template <class T>
T Queue<T>::remove()
{
    T result = front->getData();
    Node<T>* tmpPtr = front;

    front = front->getLink();
    if (front == NULL)
        back = NULL;

    delete tmpPtr;
    return result;
}

template <class T>
Node<T>* Queue<T>::getFront() const
{
    return front;
}


template <class T>
int Queue<T>::size() const
{
    int counter = 0;
    for (Node<T>* iter = front; iter != NULL; iter = iter->getLink()) {
        counter++;
    }
    return counter;
}

template <class T>
ostream& operator <<(ostream& outs, const Queue<T>& aQueue)
{
    for (Node<T>* iter = aQueue.getFront(); iter != NULL; iter = iter->getLink())
        outs << (iter->getData());
    outs << endl;
    return outs;
}
