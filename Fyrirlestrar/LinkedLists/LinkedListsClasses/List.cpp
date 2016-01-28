#include "List.h"

template <class T>
List<T>::List() {
    head = NULL;
}

template <class T>
List<T>::~List() {
    cout << "Destructor running!\n";
    removeAll();
}

template <class T>
Node<T>* List<T>::getHead() const
{
    return head;
}

template <class T>
Node<T>* List<T>::search(T item)
{
    for (Node<T>* iter = head; iter != NULL; iter = iter->getLink()) {
        if (iter->getData() == item)
            return iter;
    }
    return NULL;
}

template <class T>
void List<T>::headInsert(T value)
{
    Node<T>* newNode = new Node<T>(value, head);
    head = newNode;
}

template <class T>
void List<T>::insert(Node<T>* afterMe, T value)
{
    Node<T>* newNode = new Node<T>(value, afterMe->getLink());
    afterMe->setLink(newNode);
}

template <class T>
void List<T>::remove(Node<T>* before, Node<T>* discard)
{
    before->setLink(discard->getLink());
    delete discard;
}

template <class T>
void List<T>::removeAll()
{
    Node<T>* here = head;
    while (here != NULL) {
        Node<T>* tmpPtr = here->getLink();
        delete here;
        here = tmpPtr;
    }
    head = NULL;

}


template <class T>
ostream& operator<< (ostream& out, List<T>* lis)
{
    for(Node<T>* iter = lis->head; iter != NULL; iter = iter->getLink())
    {
        out << iter << endl;
    }
    cout << endl;

    return out;
}

