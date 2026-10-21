/*
Name : Sai Ashwin D
Date : 12 - 08 - 2025
Description : Implement insert_into_BST function
*/
#include "tree.h"

/* Function to insert the data's in BST */
int insert_into_BST(Tree_t **root, int data)
{
    Tree_t *new_node = (Tree_t *)malloc(sizeof(Tree_t));
    if (!new_node)
        return FAILURE;

    new_node->data = data;
    new_node->left = new_node->right = NULL;

    if (*root == NULL)
    {
        *root = new_node;
        return SUCCESS;
    }

    Tree_t *temp = *root;
    Tree_t *parent = NULL;

    while (temp != NULL)
    {
        parent = temp;
        if (data < temp->data)
            temp = temp->left;
        else if (data > temp->data)
            temp = temp->right;
        else
        {
            free(new_node);
            return DUPLICATE; // duplicate value
        }
    }

    if (data < parent->data)
        parent->left = new_node;
    else
        parent->right = new_node;

    return SUCCESS;
}
