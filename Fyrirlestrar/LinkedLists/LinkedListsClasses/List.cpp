#include "List.h"

template <class T>
List<T>::List() {
    head = NULL;
}

template <class T>
List<T>::~List() {
    cout << "Destructor running!\n";

}

template <class T>
Node<T>* List<T>::getHead() const
{

}

template <class T>
Node<T>* List<T>::search(T item)
{

    return NULL;
}

template <class T>
void List<T>::headInsert(T value) {


}

template <class T>
void List<T>::insert(Node<T>* afterMe, T value) {


}

template <class T>
void List<T>::remove(Node<T>* before, Node<T>* discard) {


}

template <class T>
void List<T>::removeAll()
{

}


template <class T>
ostream& operator<< (ostream& out, List<T>* lis)
{

    return out;
}

