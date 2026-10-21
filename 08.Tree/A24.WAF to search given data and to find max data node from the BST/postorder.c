/*
Name : Sai Ashwin D
Date : 12 - 08 - 2025
Description : Implement postorder function
*/
#include "tree.h"

/* Function to print the tree in post order */
int postorder(Tree_t *root)
{
    if (root == NULL)
        return FAILURE;

    if (root->left)
        postorder(root->left);

    if (root->right)
        postorder(root->right);

    printf("%d ", root->data);

    return SUCCESS;

}
