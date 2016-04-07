#include "Set.h"
#include <set>

using namespace std;

Set::Set()
{
    root = NULL;
    teljari = 0;
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

    }

}

// REMEMBER TO ADD TIME COMPLEXITY TO Set.h
void Set::print()
{
    for(NodePtr p = root; p != NULL; p = p->data){
        cout << p->data << " ";
    }
}

// REMEMBER TO ADD TIME COMPLEXITY TO Set.h
int Set::range()
{
    return 0;
}

// REMEMBER TO ADD TIME COMPLEXITY TO Set.h
void Set::remove_min(unsigned int k)
{
}


