/*
Name : Sai Ashwin D
Date : 12 - 08 - 2025
Description : Implement search_BST function
*/
#include "tree.h"

/* Iteratively */
int search_BST(Tree_t * root, int data)
{
    if (root == NULL)
        return FAILURE;  // Tree empty

    if (data == root->data)
        return SUCCESS;

    else if (data < root->data)
    {
        if (root->left == NULL)
            return NOELEMENT; // Not found
        return search_BST(root->left, data);
    }
    else
    {
        if (root->right == NULL)
            return NOELEMENT; // Not found
        return search_BST(root->right, data);
    }
}
