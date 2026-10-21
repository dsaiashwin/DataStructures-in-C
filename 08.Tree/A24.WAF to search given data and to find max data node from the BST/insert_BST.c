/*
Name : Sai Ashwin D
Date : 12 - 08 - 2025
Description : Implement insert_into_BST function
*/

#include "tree.h"
#include <stdlib.h> // for malloc


/* Function to insert the data into BST */
int insert_into_BST(Tree_t **root, int data)
{
    // Create a new node
    Tree_t *new_node = (Tree_t *)malloc(sizeof(Tree_t));
    if (new_node == NULL)
        return FAILURE;

    new_node->data = data;
    new_node->left = new_node->right = NULL;
    // If tree is empty, insert as root
    if (*root == NULL)
    {
        *root = new_node;
        return SUCCESS;
    }

    Tree_t *current = *root;
    Tree_t *parent = NULL;

    // Traverse the tree to find correct position
    while (current != NULL)
    {
        parent = current;
        if (data < current->data)
            current = current->left;
        else if (data > current->data)
            current = current->right;
        else
        {
            // Duplicate data not allowed in BST
            free(new_node);
            return FAILURE;
        }
    }

    // Insert the node
    if (data < parent->data)
        parent->left = new_node;
    else
        parent->right = new_node;

    return SUCCESS;
}
