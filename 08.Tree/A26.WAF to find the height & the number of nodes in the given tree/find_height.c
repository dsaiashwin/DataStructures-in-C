#include "tree.h"

int find_height(Tree_t *root)
{
    if (root == NULL)
        return 0; // Empty tree height = 0 (node count method)
    int left_h = find_height(root->left);
    int right_h = find_height(root->right);
    return (left_h > right_h ? left_h : right_h) + 1;
}
