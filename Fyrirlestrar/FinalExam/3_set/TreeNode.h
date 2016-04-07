#ifndef TREENODE_H
#define TREENODE_H

#include <cstddef>

struct TreeNode
{
    TreeNode(int data = 0, TreeNode* left = NULL, TreeNode* right = NULL)
        : data(data), left(left), right(right)
    { }

    int data;
    TreeNode* left;
    TreeNode* right;

};

typedef TreeNode* NodePtr;

#endif
