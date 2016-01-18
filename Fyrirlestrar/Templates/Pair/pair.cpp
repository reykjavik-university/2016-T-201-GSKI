#include "pair.h"

template <class T>
Pair<T>::Pair() {}

template <class T>
Pair<T>::Pair(T firstVal, T secondVal) {
    first = firstVal;
    second = secondVal;
}

template <class T>
void Pair<T>::setFirst(T value) {
    first = value;
}

template <class T>
void Pair<T>::setSecond(T value) {
    second = value;
}

template <class T>
T Pair<T>::getFirst() const {
    return first;
}

template <class T>
T Pair<T>::getSecond() const {
    return second;
}
