/*
Name : Sai Ashwin D
Date : 12 - 07 -2025
Description :implement  dl_delete_element function
Sample Input : 

Head -> 10 <-> 20 <-> 30 <-> 40 <- Tail                                         
Enter the element you have to delete : 20

Sample Output : Head -> 10 <-> 30 <-> 40 <- Tail
*/
#include "dll.h"

int dl_delete_element(Dlist **head, Dlist **tail, int data)
{
    if (*head == NULL)      // Check if the list is empty
        return LIST_EMPTY;  // Return list empty status
        
    if((*head) -> data  == data)    // Check if head node contains the data
    {
        free(*head);                 // Free the head node
        *head = *tail = NULL;       // Update head and tail to NULL
        return SUCCESS;             // Deletion successful
    }
    
    Dlist* temp = *head;            // Start traversal from the head
    
    while( temp != NULL)            // Traverse until end of list
    {
        
        if( temp -> data == data)   // If matching data found
        {
            temp -> prev -> next = temp -> next;    //making pevious node next link of temp points to the next node of temp 
            
            if (temp->next)     // If not the last node
                temp->next->prev = temp->prev;  // Fix backward link

            else if (temp == *tail)     // If deleting the tail node
                *tail = temp->prev;     // Update tail pointer
                
            free(temp);     // Free the node
            return SUCCESS; // Deletion successful
        }
        
        temp = temp -> next;    // Move to the next node
    }
    return DATA_NOT_FOUND;  // Data not found in the list
    
}
