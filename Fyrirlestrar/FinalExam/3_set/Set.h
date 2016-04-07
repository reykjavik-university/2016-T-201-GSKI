#ifndef SET_H
#define SET_H

#include "TreeNode.h"

#include <iostream>

class TreeException { };

class Set
{
    public:
        // Initializes an empty set
        Set();
        ~Set();

        void freeMemory(NodePtr node);

        // Inserts the specified integer into the set.
        //
        // WORST CASE TIME COMPLEXITY: tími: constant
        // (assuming the tree is "balanced")
        void insert(int n);

        // Prints the elements of the set, to the standard output, in
        // increasing order, with elements separated by a single space.
        //
        // WORST CASE TIME COMPLEXITY: Tími: constant
        // (assuming the tree is "balanced")
        void print();

        // Returns the difference between the largest element of the BST and
        // the smallest. I.e., returns Max - Min, where Max is the largest
        // element in the BST and Min is the smallest element in the BST.
        // If no such elements exist, TreeException is thrown.
        //
        // WORST CASE TIME COMPLEXITY: tími : línulegt
        // (assuming the tree is "balanced")
        int range();

        // Removes the 'k' smallest elements from the BST. If 'k' is larger
        // than the size of the BST, all elements of the BST are removed.
        //
        // WORST CASE TIME COMPLEXITY: tími : línulegt
        // (assuming the tree is "balanced")
        void remove_min(unsigned int k);

    private:
        NodePtr root;
        int teljari;


};

#endif
