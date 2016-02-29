#include <iostream>
#include "binarytreeattachable.cpp"
using namespace std;

int main() {
    /* The test tree looks like this:
                  +
                /    \
               *      -
              / \    / \
             6  2   5   3
    */
    try {
        BinaryTreeAttachable<char>* tree1 = new BinaryTreeAttachable<char>('*');
        tree1->attachLeft('6');
        tree1->attachRight('2');

        BinaryTreeAttachable<char>* tree2 = new BinaryTreeAttachable<char>('-');
        tree2->attachLeft('5');
        tree2->attachRight('3');

        BinaryTreeAttachable<char>* tree3 = new BinaryTreeAttachable<char>('+');
        tree3->attachLeftTree(tree1);
        tree3->attachRightTree(tree2);

        cout << "The height of the binary tree is: " << tree3->height() << endl;
        cout << "The number of nodes in the binary tree is: " << tree3->size() << endl;
        cout << "Inorder: ";
        tree3->inorder();
        cout << endl;
        cout << "Preorder: ";
        tree3->preorder();
        cout << endl;
        cout << "Postorder: ";
        tree3->postorder();
        cout << endl;

        delete tree3;

        BinaryTreeAttachable<int>* tree4 = new BinaryTreeAttachable<int>();
        cout << "The height of the binary tree is: " << tree4->height() << endl;
        cout << "The number of nodes in the binary tree is: " << tree4->size() << endl;
        tree4->attachLeft(5);
        tree4->attachRight(8);
        delete tree4;

    }
    catch (TreeException e) {
        cout << e.getMessage() << endl;
    }
    return 0;
}
