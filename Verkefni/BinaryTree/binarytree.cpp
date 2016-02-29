#ifndef BINARYTREE_CPP
#define BINARYTREE_CPP

#include <iostream>
#include <algorithm>    // For the max function
#include "binarytree.h"
using namespace std;


template <class T>
void BinaryTree<T>::deleteAll(BinaryNode<T>*& node) {
// Deletes all nodes in the tree starting at node
    if (node == NULL)
        ;               // Don't do anything
    else {
        deleteAll(node->leftChild);
        deleteAll(node->rightChild);

        if (node->isLeaf()) {
            //cout << "Deleting " << node->item << endl;
            delete node;
            node = NULL;    // Set it to NULL because the node that this pointer pointed to has been removed
        }
    }
}



#endif // BINARYTREE_CPP
