#ifndef BINARYNODE_H
#define BINARYNODE_H
#include <cstdlib>
using namespace std;

template <class T>
class BinaryNode {
    public:
        BinaryNode() {};
        BinaryNode(const T& nodeItem, BinaryNode<T> *left = NULL, BinaryNode<T> *right = NULL) :
                    item(nodeItem), leftChild(left), rightChild(right) {}
        ~BinaryNode() {};
        bool isLeaf() const { return (leftChild==NULL && rightChild==NULL); };

        T item;                     // The item
        BinaryNode<T> *leftChild;   // The left child
        BinaryNode<T> *rightChild;  // The right child
};
#endif // BINARYNODE_H
