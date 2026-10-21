/*
Name : Sai Ashwin D
Date : 05 - 09 - 2025
Description : Implement BST function
*/

#include "tree.h"

extern int status;
/* Function to delete the node  */
Tree_t * delete_BST(Tree_t * root, int data)
{
    int min;
    Tree_t *temp;
    if(root == NULL)                        //check condition for root is null or not
    {
	    printf("INFO : Element not found\n");
    	return NULL;
    }
    if(root -> data < data)                //if data value is high moving towards right
	    root -> right = delete_BST(root -> right, data);
    else if(root ->data > data)            //if data value is low moving towards left
	    root -> left = delete_BST(root -> left, data);
    else
    {
	    if(root -> right == NULL && root -> left == NULL) //condition to delete the leaf node
	    {
	        free(root);                                   //deleting the leaf node
	        root = NULL;                                  
	    }
	    else if(root ->right == NULL && root -> left != NULL) //when parent contains only left child
	    {
	        temp = root; 
	        root = root -> left;                         //updating the root to the next node
	        free(temp);
	    }
	    else if(root ->right != NULL && root -> left == NULL) //when the parent contains only right child
	    {
	        temp = root;
	        root = root -> right;                      //making root point towards the next node
	        free(temp);                                //deleting the node
	    }
	    else
	    {
	        min = findmin(root -> right);             //when parent contains  two children
	        root -> data = min;                       //making root of data as min value
	        root -> right = delete_BST(root -> right, min); //recursive function to delete the required node 
	    }
	    printf("INFO : Element deleted successfully\n");
    }
    return root;
}
