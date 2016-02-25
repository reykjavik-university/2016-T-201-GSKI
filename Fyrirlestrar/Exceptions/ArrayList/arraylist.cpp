#include "arraylist.h"
#include <assert.h>


template <class T>
ArrayList<T>::ArrayList(int size)
{
    maxSize = size;
    init();
}


template <class T>
ArrayList<T>::~ArrayList()
{
    delete [] arr;
}


template <class T>
void ArrayList<T>::append(T elem) {
    if (currSize >= maxSize) {
        doubleSize();
    }
    arr[currSize] = elem;
    currSize++;
}

template <class T>
void ArrayList<T>::doubleSize()
{
    maxSize = maxSize * 2;
    T* tmpArr = new T[maxSize];
    for (int i = 0; i < currSize; i++)  // Copy the current elements to new array
        tmpArr[i] = arr[i];

    delete [] arr;
    arr = tmpArr;
}

template <class T>
void ArrayList<T>::insert(T elem) {
    if (currSize >= maxSize) {
        doubleSize();
    }
    for (int i = currSize; i > currElemPos; i--) // Shift to right
        arr[i] = arr[i-1];
    arr[currElemPos] = elem;
    currSize++;
}

template <class T>
T ArrayList<T>::remove() throw (ArrayListException) {
    if (currElemPos < 0 || currElemPos >= currSize) // No current element
        throw ArrayListException("No current element");

    T elem = arr[currElemPos];
    for (int i = currElemPos; i < currSize - 1; i++)    // Shift to left
        arr[i] = arr[i+1];
    currSize--;
    return elem;
}

template <class T>
void ArrayList<T>::next() {
    if (currElemPos < currSize)
        currElemPos++;
}

template <class T>
void ArrayList<T>::prev() {
    if (currElemPos > 0)
        currElemPos--;
}


template <class T>
void ArrayList<T>::moveToStart() {
    currElemPos = 0;
}

template <class T>
void ArrayList<T>::moveToEnd() {
    currElemPos = currSize;
}

template <class T>
void ArrayList<T>::moveToPos(int pos) throw (ArrayListException) {
    if (pos < 0 || pos > currSize)
        throw ArrayListException("Illegal position");

    currElemPos = pos;
}

template <class T>
int ArrayList<T>::length() const {
    return currSize;
}

template <class T>
int ArrayList<T>::currPos() const {
    return currElemPos;
}

template <class T>
T ArrayList<T>::value() const throw (ArrayListException) {
    if (currElemPos < 0 || currElemPos >= currSize) // No current element
        throw ArrayListException("No current element");
    return arr[currElemPos];
}

template <class T>
void ArrayList<T>::clear() {
    currSize = 0;
    moveToStart();
}

template <class T>
void ArrayList<T>::init() {
    currSize = 0;
    moveToStart();
    arr = new T[maxSize];
}

