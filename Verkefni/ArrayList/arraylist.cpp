#include "arraylist.h"
#include <assert.h>

ArrayList::ArrayList(int size)
{
    maxSize = size;
    currSize = 0;
    moveToStart();
    arr = new int[maxSize];
}

ArrayList::~ArrayList()
{
    delete [] arr;
}

void ArrayList::append(int elem) {
    assert(currSize < maxSize); // List capacity exceeded
    arr[currSize] = elem;
    currSize++;
}

void ArrayList::next() {
    if (currElemPos < currSize)
        currElemPos++;
}

void ArrayList::moveToStart() {
    currElemPos = 0;
}

int ArrayList::length() const {
    return currSize;
}

int ArrayList::currPos() const {
    return currElemPos;
}

int ArrayList::value() const {
    assert(currElemPos >=0 &&  currElemPos < currSize); // No current element
    return arr[currElemPos];
}
