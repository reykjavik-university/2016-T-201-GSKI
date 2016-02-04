#include <iostream>
#include "Queue.h"
using namespace std;

template <class T>
Queue<T>::Queue()
{

}


template <class T>
Queue<T>::Queue(const Queue<T>& aQueue)
{
    cout << "Running the copy constructor!" << endl;


}

template <class T>
void Queue<T>::operator =(const Queue<T>& aQueue) {

    cout << "Running the assignment operator!" << endl;


}


template <class T>
Queue<T>::~Queue( )
{
    cout << "Running the destructor!" << endl;

}


template <class T>
void Queue<T>::removeAll()
{

}

template <class T>
void Queue<T>::addAll(const Queue<T>& aQueue)
{

}

template <class T>
void Queue<T>::init()
{

}


template <class T>
bool Queue<T>::empty() const
{

}

template <class T>
void Queue<T>::add(const T& elem)
{

}

template <class T>
T Queue<T>::remove()
{

}

template <class T>
Node<T>* Queue<T>::getFront() const
{
    return front;
}


template <class T>
int Queue<T>::size() const
{

}

template <class T>
ostream& operator <<(ostream& outs, const Queue<T>& aQueue)
{
    for (Node<T>* iter = aQueue.getFront(); iter != NULL; iter = iter->getLink())
        outs << (iter->getData());
    outs << endl;
    return outs;
}
