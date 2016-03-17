#ifndef PRIORITYQUEUE_H
#define PRIORITYQUEUE_H

#include <list>
using namespace std;

template <class E, class C> // E=element, C=comparator
class PriorityQueue
{
public:
    int size() const;
    bool empty() const;
    void insert(const E& e); // inserts e into queue
    const E& min() const;
    void removeMin();   // remove minimum from queue
private:
    list<E> _list;
    C _isLess;

};

#endif // PRIORITYQUEUE_H
