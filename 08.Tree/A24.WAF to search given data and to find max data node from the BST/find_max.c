/*
Name : Sai Ashwin D
Date : 12 - 08 - 2025
Description : Implement findmax function
*/
#include "tree.h"

int findmax(Tree_t * root)
{
    if (root == NULL)
        return FAILURE;   // Tree empty

    while (root->right != NULL)
    {
        root = root->right;
    }

    return root->data;

}
