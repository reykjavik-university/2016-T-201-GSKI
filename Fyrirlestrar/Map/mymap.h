#ifndef MYMAP_H
#define MYMAP_H

#include <list>
#include <utility>
using namespace std;

template <class Key, class Value>
class MyMap
{
public:
    typedef pair<Key,Value> PairType;
    typedef typename list<PairType>::iterator iterator;

    int size() const;
    bool empty() const;
    void erase(const iterator& iter);
    iterator find(const Key& key);
    Value& operator[] (const Key& key);

    iterator begin() { return _list.begin(); }
    iterator end() { return _list.end(); }
private:
    list<PairType> _list;
};

#endif // MYMAP_H
