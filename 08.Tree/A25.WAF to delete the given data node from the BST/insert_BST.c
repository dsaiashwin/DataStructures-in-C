/*
Name : Sai Ashwin D
Date : 05 - 09 - 2025
Description : Implement BST function
*/

#include "tree.h"

/* Function to insert the data's in BST */
int insert_into_BST(Tree_t **root, int data)
{
    Tree_t *new = malloc(sizeof(Tree_t));    //create a node
    if (new == NULL)             //if new node is NULL
    	return FAILURE;          //condition true returns NULL

    new -> data = data;         //if condition false add data to the new node
    new -> left = NULL;         //and put left and right address as NULL
    new -> right = NULL;

    if (*root == NULL)      //if root pointer is equal to NULL
    {
	    *root = new;        //now root pointing to the new node
	    return SUCCESS;    //returns success
    }

    Tree_t *temp = *root, *parent;   //declaration

    while (temp != NULL)          //traverse the node until NULL
    {
	    if (temp -> data > data)  //if inserting data is less than temp of data -> root
	    {
	        parent = temp;        //take temp as parent
	        temp = temp -> left;  //assign the data to the left
	    }
	    else if (temp -> data < data)  //if inserting data is greater than temp of data
	    {
	        parent = temp;
	        temp = temp -> right;  //assign the data to the right
	    }
	    else
	    {
	        return DUPLICATE;   //if repetative value is given than return duplicate
	    }
    }
    if (parent -> data < data)   //if parent of data is less then data
	    parent -> right = new;   //put assign new in right
    else
	    parent -> left = new;   //else left

    return SUCCESS;
}
