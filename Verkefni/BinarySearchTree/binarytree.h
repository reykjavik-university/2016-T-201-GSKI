#ifndef BINARYTREE_H
#define BINARYTREE_H
#include "binarynode.h"

template <class T>
class BinaryTree {
    public:
        BinaryTree() : root(NULL) {};
        BinaryTree(const T& rootItem) { root = new BinaryNode<T>(rootItem); };
        BinaryTree(const T& rootItem, BinaryNode<T>* leftTree, BinaryNode<T>* rightTree)
            { root = new BinaryNode<T>(rootItem, leftTree, rightTree); };
        ~BinaryTree() { deleteAll(root); };
        BinaryNode<T>* getRoot() const { return root; };
        bool isEmpty() const { return (root == NULL); };
        int height() const;     // Returns the height of the tree
        int size() const;  // Returns the number of nodes in the tree
        void inorder() const; // Traverses the tree in inorder
        void preorder() const; // Traverses the tree in preorder
        void postorder() const; // Traverses the tree in postorder
    protected:
        BinaryNode<T> *root;
    private:
        // Returns the height of the tree starting at the given node
        int height(BinaryNode<T>* node) const;
        // Returns the number of nodes in the tree starting at the given node
        int size(BinaryNode<T>* node) const;
        void inorder(BinaryNode<T>* node) const; // Traverses the tree in inorder starting at the given node
        void preorder(BinaryNode<T>* node) const; // Traverses the tree in preorder starting at the given node
        void postorder(BinaryNode<T>* node) const; // Traverses the tree in postorder starting at the given node
        void deleteAll(BinaryNode<T>*& node); // Deletes all nodes starting from node

};

#endif // BINARYTREE_H
