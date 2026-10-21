/*
Name : Sai Ashwin D
Date : 12 - 08 - 2025
Description : Implement inorder function
*/
#include "tree.h"

/* Function to print the data in in order printing */
int inorder(Tree_t *root)
{
    if (root == NULL)
    return FAILURE;

    if (root->left)
        inorder(root->left);

    printf("%d ", root->data);

    if (root->right)
        inorder(root->right);

    return SUCCESS;

}
