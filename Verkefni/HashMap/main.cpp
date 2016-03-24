#include <iostream>
#include <fstream>
#include <string>
#include <cassert>
#include "hashfunc.h"
#include "hashmap.cpp"

using namespace std;

const int TABLE_SIZE = 37; // The number of buckets in the hash table (a prime!)

template <class Value>
void testHashMap(HashMap<string, Value, HashFunc>& hmap, string key) {
    string dummyKey("12345");

    cout << "Size: " << hmap.size() << endl;

    typename HashMap<string,Value,HashFunc>::iterator it;

    it = hmap.find(key);
    if (it != hmap.end())
        cout << "Found value " << (*it).second << " for key " << key << endl;

    it = hmap.find(dummyKey);
    if (it == hmap.end())
        cout << "Did not find the dummy key!" << endl;

    it = hmap.find(key);
    hmap.erase(it);
    cout << "Size: " << hmap.size() << endl;


    if (!hmap.empty())
        cout << "Not empty" << endl;

    for (it = hmap.begin(); it != hmap.end(); ++it) {
        cout << (*it).first << " -> " << (*it).second << endl;
    }
}

int main()
{
    ifstream fin;
    // Create a hashmap storing pairs of <string, string>
    HashMap<string,string,HashFunc> hmap(TABLE_SIZE);

    fin.open("input.txt",ios::in);
    assert (!fin.fail( ));

    string key, strValue;
    fin >> key >> strValue;

    while(!fin.eof()) {
        hmap[key] = strValue;
        fin >> key >> strValue;
    }
    fin.close();

    testHashMap(hmap, key);

    cout << endl << endl;

    // Create a hashmap storing pairs of <string, int>
    HashMap<string,int,HashFunc> hmap2(TABLE_SIZE);

    fin.open("input2.txt",ios::in);
    assert (!fin.fail( ));

    int intValue;
    fin >> key >> intValue;

    while(!fin.eof()) {
        hmap2[key] = intValue;
        fin >> key >> intValue;
    }
    fin.close();

    testHashMap(hmap2, key);

    return 0;
}
