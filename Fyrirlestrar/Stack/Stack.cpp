#include <iostream>
#include "Stack.h"
using namespace std;

template <class T>
Stack<T>::Stack() : top(NULL) {}

template <class T>
Stack<T>::Stack(const Stack& aStack)
{
    cout << "Running the copy constructor!" << endl;

    if (aStack.empty())
        top = NULL;
    else {
        top = new Node<T>((aStack.getTop())->getData(), NULL);
        Node<T>* prevNode = top;

        for (Node<T>* origNode = (aStack.getTop())->getLink(); origNode != NULL; origNode = origNode->getLink()) {
            Node<T>* newNode = new Node<T>(origNode->getData(), NULL);
            prevNode->setLink(newNode);
            prevNode = newNode;
        }
    }
}

template <class T>
Stack<T>::~Stack( )
{
    cout << "Running the destructor!" << endl;
    while (!empty()) {
        pop();
    }
}

template <class T>
bool Stack<T>::empty() const
{
    return (top == NULL);
}

template <class T>
void Stack<T>::push(T elem)
{
    Node<T>* newNode = new Node<T>(elem, top);
    top = newNode;

}

template <class T>
T Stack<T>::pop()
{
    T result = top->getData();

    Node<T>* tmpPtr = top;
    top = top->getLink();

    delete tmpPtr;
    return result;
}

template <class T>
Node<T>* Stack<T>::getTop() const
{
    return top;
}


template <class T>
ostream& operator <<(ostream& outs, const Stack<T>& aStack)
{
    for (Node<T>* iter = aStack.getTop(); iter != NULL; iter = iter->getLink()) {
        outs << iter->getData();
    }
    outs << endl;
    return outs;
}
