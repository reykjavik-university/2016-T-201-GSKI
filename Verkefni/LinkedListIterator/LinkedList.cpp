#include "LinkedList.h"

template <class T>
LinkedList<T>::LinkedList() : header(NULL), trailer(NULL)
{
    init();
}

template <class T>
LinkedList<T>::LinkedList(LinkedList<T>& lis) : header(NULL), trailer(NULL) {

    init();
    // Copy all nodes from lis

    // Should loop using the iterator
}


template <class T>
LinkedList<T>::~LinkedList()
{
    removeAll();
    delete header;
    delete trailer;
}

template <class T>
void LinkedList<T>::insert(Node* beforeMe, const T& elem)
{
    Node* newNode = new Node(elem, beforeMe, beforeMe->getPrev());
    (beforeMe->getPrev())->setNext(newNode);
    beforeMe->setPrev(newNode);

    currSize++;
}

template <class T>
void LinkedList<T>::insert(const T& elem) {
    insert(currNode, elem);
    currNode = currNode->getPrev();
}

template <class T>
void LinkedList<T>::append(T elem)
{
    insert(trailer, elem);
    if (currNode == trailer)
        currNode = currNode->getPrev();
}

template <class T>
T LinkedList<T>::remove() throw (LinkedListException) {

    // Should throw an exception if currNode does not point to a real node

    Node* previousNode = currNode->getPrev();
    Node* nextNode = currNode->getNext();

    previousNode->setNext(nextNode);
    nextNode->setPrev(previousNode);

    T elem = currNode->getData();
    delete currNode;
    currNode = nextNode;

    currSize--;
    return elem;
}

template <class T>
void LinkedList<T>::next() {
    if (currNode != trailer)
        currNode = currNode->getNext();
}

template <class T>
void LinkedList<T>::prev() {

    if (currNode->getPrev() != header)
        currNode = currNode->getPrev();
}

template <class T>
void LinkedList<T>::moveToStart() {
    currNode = header->getNext();
}

template <class T>
void LinkedList<T>::moveToEnd() {
    currNode = trailer;
}

template <class T>
void LinkedList<T>::moveToPos(int pos) {
    Node* iter = header;
    for (int i = 0; i <= pos && iter != trailer; i++) {
        iter = iter->getNext();
    }
    currNode = iter;
}

template <class T>
bool LinkedList<T>::empty() const {
    return (header->getNext() == trailer);
}

template <class T>
int LinkedList<T>::length() const {
    return currSize;
}

template <class T>
T LinkedList<T>::value() const throw(LinkedListException) {
    // Should throw an exception if currNode does not point to a real node

    return currNode->getData();
}

template <class T>
void LinkedList<T>::removeAll() {
    moveToStart();
    while (currNode != trailer) {
        Node* tmpNode = currNode->getNext();
        delete currNode;
        currNode = tmpNode;
    }
}

template <class T>
void LinkedList<T>::init() {

    if (header == NULL) {
        header = new Node();
        trailer = new Node();
    }

    header->setNext(trailer);
    trailer->setPrev(header);

    moveToStart();
    currSize = 0;
}

template <class T>
void LinkedList<T>::clear() {

    removeAll();
    init();
}
