#include "Set.h"
#include <set>

using namespace std;

Set::Set()
{
    root = NULL;
}

Set::~Set()
{
    freeMemory(root);
}

void Set::freeMemory(NodePtr node)
{
    if(node != NULL){
        freeMemory(node->left);
        freeMemory(node->right);
        delete node;
    }
}

// REMEMBER TO ADD TIME COMPLEXITY TO Set.h
void Set::insert(int n)
{
    if(root == NULL){
        NodePtr node = new TreeNode(n, NULL);
        root = node;
    }
    else{
        insertAt(root, n);
    }
}

void Set::insertAt(NodePtr &node, int n) {

    if (node == NULL) {
        node = new TreeNode(n);
    }
    else if (n > node->data) {
        insertAt(node->right, n);
    }
    else if (n < node->data) {
        insertAt(node->left, n);
    }
    else
        return;
}

// REMEMBER TO ADD TIME COMPLEXITY TO Set.h
void Set::print()
{
    inorder(root);
    cout << endl;
}

void Set::inorder(NodePtr node) const {
    if (node != NULL) {
        inorder(node->left);
        cout << node->data << " ";
        inorder(node->right);
    }
}

// REMEMBER TO ADD TIME COMPLEXITY TO Set.h
int Set::range()
{
    int min, max;

    if (root == NULL) {
        throw TreeException();
    }
    else {
        for (NodePtr p = root; p != NULL; p = p->left)
            min = p->data;
        for (NodePtr p = root; p != NULL; p = p->right)
            max = p->data;
    }
    return max-min;
}

// REMEMBER TO ADD TIME COMPLEXITY TO Set.h
void Set::remove_min(unsigned int k)
{
    for (unsigned int i = 1; i <= k; i++)
        removeMinFrom(root);
}

int Set::removeMinFrom(NodePtr &node) {
    if (node == NULL)
        return 0;

    if (node->left != NULL) {
        return removeMinFrom(node->left);
    }
    else {
        if (node->right == NULL) {
            int value = node->data;
            node = NULL;
            //delete node;  // Hér þarf að passa að eyða hnútnum - þið klárið það!
            return value;
        }
        else {
            int value = removeMinFrom(node->right);
            node->data = value;
            return value;
        }
    }
}


