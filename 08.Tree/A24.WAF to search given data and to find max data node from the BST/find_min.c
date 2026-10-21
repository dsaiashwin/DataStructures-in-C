#include "tree.h"

int findmin(Tree_t * root)
{
    if (root == NULL)
        return FAILURE;   // Tree empty

    while (root->left != NULL)
    {
        root = root->left;
    }

    return root->data;
}
