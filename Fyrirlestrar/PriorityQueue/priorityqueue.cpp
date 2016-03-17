#include "priorityqueue.h"

template <class E, class C>
int PriorityQueue<E,C>::size() const {
    return _list.size();
}

template <class E, class C>
bool PriorityQueue<E,C>::empty() const {
    return _list.empty();
}

template <class E, class C>
const E& PriorityQueue<E,C>::min() const {
    return _list.front();
}

template <class E, class C>
void PriorityQueue<E,C>::removeMin() {
    _list.pop_front();
}

template <class E, class C>
void PriorityQueue<E,C>::insert(const E& e) {

    typename list<E>::iterator p = _list.begin();
    while ( p != _list.end() && !(_isLess(e,*p)))
           ++p;
    _list.insert(p, e);
}
