#include <iostream>
#include "binarysearchtree.cpp"

using namespace std;

int main() {
    cout << "Create a Binary Search Tree (BST):" << endl;
    BinarySearchTree<int> bst;

    bst.insert(15);
    bst.insert(6);
    bst.insert(18);
    bst.insert(3);
    bst.insert(7);
    bst.insert(7);  // Should not have any effect!
    bst.insert(17);
    bst.insert(20);
    bst.insert(2);
    bst.insert(4);
    bst.insert(13);
    bst.insert(9);
    bst.insert(9);  // Should not have any effect!

    /* bst then looks like this:
                  15
                /   \
               6     18
              / \   / \
             3  7  17  20
            / \  \
           2  4   13
                 /
                 9
    */

    cout << "The height of the BST is: " << bst.height() << endl;
    cout << "The number of nodes in the BST is: " << bst.size() << endl;
    cout << "The item at the root is now: " << (bst.getRoot())->item << endl;

    cout << "Inorder: ";
    bst.inorder();
    cout << endl;

    BinaryNode<int>* node;
    node = bst.find(7);
    if (node != NULL) {
        cout << "Found 7 in the BST" << endl;
    }

    node = bst.find(10);
    if (node != NULL) {
        cout << "Found 10 in the BST" << endl;
    }

    node = bst.maxNode();
    if (node != NULL) {
        cout << "Largest item in the BST is: " << node->item << endl;
    }

    node = bst.minNode();
    if (node != NULL) {
        cout << "Smallest item in the BST is: " << node->item << endl;
    }

    bst.remove(4);
    cout << "Inorder after first remove: ";
    bst.inorder();
    cout << endl;
    bst.remove(15);
    cout << "Inorder after second remove: ";
    bst.inorder();
    cout << endl;
    cout << "The item at the root is now: " << (bst.getRoot())->item << endl;
    bst.remove(7);
    cout << "Inorder after third remove: ";
    bst.inorder();
    cout << endl;
    bst.remove(10); // Not in the tree!
    cout << "Inorder after fourth remove: ";
    bst.inorder();
    cout << endl;

    return 0;
}
