#include <iostream>
#include "Stack.h"
using namespace std;

template <class T>
Stack<T>::Stack() : top(NULL) {}

template <class T>
Stack<T>::Stack(const Stack& aStack)
{
    cout << "Running the copy constructor!" << endl;


}

template <class T>
Stack<T>::~Stack( )
{
    cout << "Running the destructor!" << endl;

}

template <class T>
bool Stack<T>::empty() const
{

}

template <class T>
void Stack<T>::push(T elem)
{

}

template <class T>
T Stack<T>::pop()
{

}

template <class T>
Node<T>* Stack<T>::getTop() const
{
    return top;
}


template <class T>
ostream& operator <<(ostream& outs, const Stack<T>& aStack)
{

}
