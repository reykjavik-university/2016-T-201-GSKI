#include "mymap.h"

template <class Key, class Value>
int MyMap<Key,Value>::size() const {
    return _list.size();
}

template <class Key, class Value>
bool MyMap<Key,Value>::empty() const {
    return _list.empty();
}

template <class Key, class Value>
void MyMap<Key,Value>::erase(const iterator& iter) {
    _list.erase(iter);
}

template <class Key, class Value>
typename MyMap<Key,Value>::iterator MyMap<Key,Value>::find(const Key& key) {
    iterator it;
    for (it = _list.begin(); it != _list.end(); it++) {
        if (it->first == key)
            return it;
    }
    return _list.end();
}

template <class Key, class Value>
Value& MyMap<Key,Value>::operator[] (const Key& key) {
    iterator it = find(key);
    if (it == _list.end()) {
        PairType p = PairType(key,Value());
        //_list.push_back(p);+
        //return p.second;
        it = _list.insert(_list.end(), p);
    }
    return it->second;

}
