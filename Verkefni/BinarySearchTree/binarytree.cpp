#ifndef BINARYTREE_CPP
#define BINARYTREE_CPP

#include <iostream>
#include <algorithm>    // For the max function
#include "binarytree.h"
using namespace std;

// The implementation of the following functions was part of the last  project.
// If you did not implement it, you can use a solution which will be published in Myschool
// Preferably, you should implement this yourself!

template <class T>
int BinaryTree<T>::height() const     // Returns the height of the tree
{
}

template <class T>
int BinaryTree<T>::height(BinaryNode<T>* node) const   // Returns the height of the tree starting at node
{
}

template <class T>
int BinaryTree<T>::size() const  // Returns the number of nodes in the tree
{
}

template <class T>
int BinaryTree<T>::size(BinaryNode<T>* node) const  // Returns the number of nodes in the tree starting at the given node
{
}

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

template <class T>
void BinaryTree<T>::inorder() const // Traverses the tree in inorder
{
    inorder(root);
}

template <class T>
void BinaryTree<T>::preorder() const // Traverses the tree in preorder
{
    preorder(root);
}

template <class T>
void BinaryTree<T>::postorder() const // Traverses the tree in postorder
{
    postorder(root);
}

template <class T>
void BinaryTree<T>::inorder(BinaryNode<T>* node) const // Traverses the nodes in inorder
{
}

template <class T>
void BinaryTree<T>::preorder(BinaryNode<T>* node) const // Traverses the nodes in preorder
{
}

template <class T>
void BinaryTree<T>::postorder(BinaryNode<T>* node) const // Traverses the nodes in postorder
{
}
#endif // BINARYTREE_CPP
