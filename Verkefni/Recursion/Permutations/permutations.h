#ifndef PERMUTATIONS_H
#define PERMUTATIONS_H

#include <iostream>
#include <vector>
using namespace std;

// Each permutation is stored in a dynamically allocated array and
// all the permutations form a linked list
struct Node {
    int* setPtr;    // Points to a set, an array of integers
    int  setSize;   // Size of the set
    Node* next;     // Points to the next node in the linked lists
};
typedef Node* NodePtr;

class Permutations {
    public:
        Permutations();          // The default constructor
        ~Permutations();         // Destructor
        void generate(int n);    // Generates permutations for set of size n
        void print() const;     // Prints all the permutations
    private:
        NodePtr permutate(int set[], int size);  // Permutate a set of numbers.  Returns a list of permutations
        // For each permutation of the smaller list, make a permutation (pointed to by 'larger')
        // that includes the number 'num' in each position
        void insert(int num, NodePtr smaller, NodePtr& larger);
        void printSet(int set[], int size) const; // Prints the set
        void removeAll();           // Removes all nodes
        void remove(NodePtr node);  // Removes a single node
        NodePtr myPerms;            // Points to the list of all permutations
};

#endif // PERMUTATIONS_H
