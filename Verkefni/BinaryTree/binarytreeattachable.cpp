#include "binarytreeattachable.h"
#include "binarytree.cpp"

const string MSG_EMPTY = "The tree is empty!";

template <class T>
BinaryTreeAttachable<T>::BinaryTreeAttachable() : BinaryTree<T>()
{
}

template <class T>
BinaryTreeAttachable<T>::BinaryTreeAttachable(const T& rootItem) : BinaryTree<T>(rootItem)
{
}

template <class T>
BinaryTreeAttachable<T>::BinaryTreeAttachable(const T& rootItem, BinaryNode<T>* leftChild, BinaryNode<T>* rightChild) : BinaryTree<T>(rootItem, leftChild, rightChild)
{
}

template <class T>
BinaryTreeAttachable<T>::~BinaryTreeAttachable()
{
}

template <class T>
void BinaryTreeAttachable<T>::attachLeft(const T& anItem) throw (TreeException) {
    if (BinaryTree<T>::isEmpty()) {
        throw TreeException(MSG_EMPTY);
    }
    BinaryNode<T> *node = new BinaryNode<T>(anItem);
    BinaryTree<T>::getRoot()->leftChild = node;
}

template <class T>
void BinaryTreeAttachable<T>::attachRight(const T& anItem) throw (TreeException) {
    if (BinaryTree<T>::isEmpty()) {
        throw TreeException(MSG_EMPTY);
    }
    BinaryNode<T> *node = new BinaryNode<T>(anItem);
    BinaryTree<T>::getRoot()->rightChild = node;
}

template <class T>
void BinaryTreeAttachable<T>::attachLeftTree(BinaryTreeAttachable<T>* tree) throw (TreeException) {
    if (BinaryTree<T>::isEmpty()) {
        throw TreeException(MSG_EMPTY);
    }
    BinaryTree<T>::getRoot()->leftChild = tree->root;
}

template <class T>
void BinaryTreeAttachable<T>::attachRightTree(BinaryTreeAttachable<T>* tree) throw (TreeException) {
    if (BinaryTree<T>::isEmpty()) {
        throw TreeException(MSG_EMPTY);
    }
    BinaryTree<T>::getRoot()->rightChild = tree->root;
}
