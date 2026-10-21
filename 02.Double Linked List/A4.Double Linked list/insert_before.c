/*
Name : Sai Ashwin D
Date : 12 - 07 -2025
Description : implement dl_insert_before function
Sample Input :

Enter the gdata : 30                                                            
Enter the number you have insert before 30 : 35

Sample Output : Head -> 20 <-> 35 <-> 30 <-> 55 <- Tail  
*/

#include "dll.h"

int dl_insert_before(Dlist **head, Dlist **tail, int gdata, int ndata)
{
    if (*head == NULL)  // Check if the list is empty
    {
        return LIST_EMPTY;  // Return empty status
    }
    
    Dlist* nnode = malloc(sizeof(Dlist));// Allocate memory for the new node
    
    if (!nnode) // Check if allocation failed
        return FAILURE; // Return failure status
    nnode -> data = ndata;  // Assign the new data to the node
    
	Dlist* pre_node = *head;    // Set pre_node to current head
	Dlist* nxt_node = (*head) -> next;  // Set nxt_node to the node after head
	
	if (gdata == (*head) -> data)   // If target data is at the head
	{
	    nnode -> next = *head;  // Link new node to current head
	    nnode -> prev = NULL;   // New node has no previous node
	    (*head)->prev = nnode;  // Link head's prev to new node
	    *head = nnode;  // Update head to new node
	    return SUCCESS; // Insertion successful
	}
	else    // Traverse list to find gdata
	{
	    while(nxt_node != NULL) // Loop until end of list
	    {
	        if (nxt_node -> data == gdata)  // If gdata found
	        {
	            pre_node -> next = nnode;   // Link previous node to new node
	            nnode -> next = nxt_node;   // Link new node to target node
	            nnode -> prev = pre_node;   // Link new node's prev to previous node
	            nxt_node->prev = nnode;     // Link target node's prev to new node
	            return SUCCESS;
	        }
	        pre_node = nxt_node;            // Advance pre_node
	        nxt_node = nxt_node -> next;   // Advance nxt_node
	    }
	    
	}
	return DATA_NOT_FOUND;                  // gdata not found in list
}
