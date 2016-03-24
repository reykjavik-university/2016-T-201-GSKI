#ifndef HASHFUNC_H
#define HASHFUNC_H

#include <string>
using namespace std;

class HashFunc
{
public:
    // A hash function.  Hashes the key into an integer
    int operator()(string key, int buckets) {
        int sum = 0;
        // Add the ASCII codes of the characters in the key
        for (unsigned int i=0; i<key.size(); i++)
        {
            char ch = key.at(i);
            sum = sum + ch;
        }
        return (sum % buckets);  // Perform modulo division
    }
};

#endif // HASHFUNC_H
