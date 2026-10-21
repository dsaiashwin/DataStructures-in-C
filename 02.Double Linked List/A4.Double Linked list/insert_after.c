/*
Name : Sai Ashwin D
Date : 12 - 07 -2025
Description :implement  dl_insert_after function
Sample Input : 

Enter the gdata : 55                                                            
Enter the number you have to insert after 55 : 56

Sample Output : Head -> 20 <-> 35 <-> 30 <-> 55 <-> 56 <- Tail
*/

#include "dll.h"

int dl_insert_after(Dlist **head, Dlist **tail, int gdata, int ndata)
{
    if (*head == NULL)      // Check if the list is empty
    {
        return LIST_EMPTY;  // Return status if list is empty
    }
    
    Dlist* nnode = malloc(sizeof(Dlist));   // Allocate memory for new node
    
    if (!nnode)             // Check memory allocation failure
        return FAILURE;     // Return failure status
    
	Dlist* temp = *head;    // Start traversal from head
	
	nnode -> data = ndata;  // Assign data to the new node
	
	while(temp != NULL)    // Traverse until end of list
	{
	    if( temp -> data == gdata)  // If target data is found
	    {
	        nnode -> next = temp -> next ;  // Set new node’s next to target's next
	        nnode -> prev =temp;            // Set new node’s prev to target
	        if (temp->next != NULL)         // If target is not the last node
            {
                temp->next->prev = nnode;   // Link next node’s prev to new node
            }
            else                            // If target is the last node
            {
                *tail = nnode; // Update tail since we're adding at the end
            }
            
	        temp -> next = nnode;   // Link target node's next to new node
	
	        return SUCCESS;         // Insertion successful
	    }
	    
	    temp = temp -> next;        // Move to the next node
	}
	return DATA_NOT_FOUND;          // Return status if gdata is not found
	
}
