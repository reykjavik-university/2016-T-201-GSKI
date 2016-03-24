#include <iostream>
#include <list>
#include <utility> // For the pair class
#include "hashmap.h"
using namespace std;

template <class Key, class Value, class HashFunc>
HashMap<Key,Value,HashFunc>::HashMap(int numBuckets) : _buckets(numBuckets)
{
    // Dynamically allocate an array of pointers to list of pairs
    _table = new ListPairPtr[_buckets];
    // Initialize all the buckets with empty lists
    for (int i = 0; i < _buckets; i++)
        _table[i] = new list<Pair>();
}

template <class Key, class Value, class HashFunc>
HashMap<Key,Value,HashFunc>::~HashMap()
{
    // Your implementation
}

template <class Key, class Value, class HashFunc>
int HashMap<Key,Value,HashFunc>::size() const {

    // Your implementation
}

template <class Key, class Value, class HashFunc>
bool HashMap<Key,Value,HashFunc>::empty() const {

    // Your implementation
}

template <class Key, class Value, class HashFunc>
Value& HashMap<Key,Value,HashFunc>::operator[](const Key& theKey)
{
    // Look up the key and return a reference to its value.
    // If the key is not found, insert it into the hash table (at the end of the list for the associated bucket), using a default value

    // Your implementation
}

template <class Key, class Value, class HashFunc>
typename HashMap<Key,Value,HashFunc>::iterator HashMap<Key,Value,HashFunc>::find(const Key& theKey)
{
    // Returns an iterator for a <key,value> pair for the given key.
    // If not found, then it returns an end iterator

    // Your implementation

}

template <class Key, class Value, class HashFunc>
void HashMap<Key,Value,HashFunc>::erase(iterator& iter)
{
    // Removes the <key,value> pair that the given iterator stands for

    // Your implementation
}

template <class Key, class Value, class HashFunc>
int HashMap<Key,Value,HashFunc>::nextUsedBucket(int startingFrom) {
    // The function finds the next used bucket, given startingFrom.
    // If no used bucket is found, it returns the last bucket

    for (int i = startingFrom; i < _buckets; i++) {
        if (_table[i]->size() != 0)
            return i;
    }
    return _buckets - 1;
}
