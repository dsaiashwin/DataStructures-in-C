/*
Name : Sai Ashwin D
Date : 12 - 08 - 2025
Description : Implement preorder function
*/
#include "tree.h"

/* Function to print the tree in pre order */
int preorder(Tree_t *root)
{
    if (root == NULL)
        return FAILURE;

    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);

    return SUCCESS;

}
