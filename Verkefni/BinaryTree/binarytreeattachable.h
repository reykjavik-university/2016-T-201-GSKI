#ifndef BINARYTREEATTACHABLE_H
#define BINARYTREEATTACHABLE_H
#include "binarytree.h"
#include "treeexception.h"

template <class T>
class BinaryTreeAttachable : public BinaryTree<T> {
    public:
        BinaryTreeAttachable();
        BinaryTreeAttachable(const T& rootItem);
        BinaryTreeAttachable(const T& rootItem, BinaryNode<T>* leftTree, BinaryNode<T>* rightTree);
        ~BinaryTreeAttachable();
        void attachLeft(const T& anItem) throw (TreeException); // Creates a left subtree with anItem as the root
        void attachRight(const T& anItem) throw (TreeException);// Creates a right subtree with anItem as the root
        void attachLeftTree(BinaryTreeAttachable<T>* tree) throw (TreeException); // Attaches a tree as the left tree of the root
        void attachRightTree(BinaryTreeAttachable<T>* tree) throw (TreeException);// Attaches a tree as the right tree of the root
};

#endif // BINARYTREEATTACHABLE_H
