#ifndef HASHMAP_H
#define HASHMAP_H

#include <string>
#include <list>     // A doubly linked list
#include <utility>  // For the pair class
using namespace std;

// This implementation of a hash map uses a linked list (chaining) for collision resolution
// The linked list in each bucket is implemented using the STL list class.
// The object stored in the hash map is a pair<Key,Value>
// The third template parameter denotes the hash function object, which is used to map a Key to a bucket.

template <class Key, class Value, class HashFnc>
class HashMap
{
public:
    typedef pair<Key,Value> Pair;
    typedef list<Pair> ListPair;
    typedef ListPair* ListPairPtr;
    typedef typename ListPair::iterator ListIterator;

    class HashMapIterator;  // Forward declaration; this class is defined below

    // The standard container methods for obtaining iterator standing for the beginning and the end of the container
    HashMapIterator begin()     {   int nextBucket = nextUsedBucket(0);
                                    return HashMapIterator(this, _table[nextBucket]->begin(), nextBucket);
                                }
    HashMapIterator end()       {   return HashMapIterator(this, _table[_buckets-1]->end(), _buckets-1); }

    // We want to use the name 'iterator' when referring to a HashMapIterator
    typedef HashMapIterator iterator;

    // Constructor
    HashMap(int numBuckets);
    // Destructor
    ~HashMap();
    // Returns the number of <key,value> pairs in the hash table
    int size() const;
    // Returns true if the size is 0
    bool empty() const;
    // Returns an iterator for a <key,value> pair for the given key.
    // If not found, then it returns an end iterator
    iterator find(const Key& key);
    // Returns a reference to the value for the given key
    // If the key is not found, a default value is created for the key
    Value& operator[](const Key& key);
    // Removes the <key,value> pair that the given iterator stands for
    void erase(iterator& iter);

private:
    // The function finds the next used bucket, given startingFrom.
    // If no used bucket is found, it returns the last bucket
    int nextUsedBucket(int startingFrom);
    // The number of buckets
    int _buckets;
    // The hash function, used for mapping a key to a bucket
    HashFnc _hash;
    // The hash table is a dynamic array. Each entry is a pointer to a linked list of pairs (ListPairPtr)
    ListPairPtr *_table;

};

template <class Key, class Value, class HashFnc>
class HashMap<Key,Value,HashFnc>::HashMapIterator {
// This is an iterator for the HashMap.
// Internally, it uses a list iterator to traverse the list associated with a given bucket,
// but when it arrives at the end of the list, it needs to move to the beginning of the list for
// the next used bucket!
// Since this is a nested class inside HashMap,
//   it can access the private member variables of HashMap through the _hashMap variable

public:
    HashMapIterator() {};
    HashMapIterator(HashMap* htable, ListIterator iter, int bucket )
        : _hashMap(htable), _iter(iter), _bucket(bucket) {}

    bool operator==(const HashMapIterator& other)
    {
        // Your implementation
    }

    bool operator!=(const HashMapIterator& other)
    {
         // Your implementation
    }

    // Returns a reference to the pair object that the list iterator stands for
    Pair& operator*()
    {
        // Your implementation
    }

    // This is operation needs to be able to move
    // the list iterator from the end of a list to the beginning of another list.
    // Should use the nextUsedBucket function
    HashMapIterator operator++()
    {
         // Your implementation

        return (*this);
    }

private:
    // The HashMapIterator stores a pointer to the HashMap object
    HashMap* _hashMap;
    // The HashMapIterator relies on a list iterator because the data in each bucket is stored in a list
    ListIterator _iter;
    // The HashMapIterator needs to know which bucket is the currently active one, because
    // the iterator moves between buckets
    int _bucket;
};

#endif // HASHMAP_H
