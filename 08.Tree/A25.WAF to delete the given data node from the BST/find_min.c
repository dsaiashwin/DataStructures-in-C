/*
Name : Sai Ashwin D
Date : 05 - 09 - 2025
Description : Implement BST function
*/

#include "tree.h"

int findmin(Tree_t * root)
{
    if (root == NULL)           //check condition for root is null or not
    	return FAILURE;
	Tree_t *temp = root;  
    while (temp -> left != NULL)   //moving towards the left to find the minimum value 
	    temp = temp -> left;
    return temp -> data;
}
