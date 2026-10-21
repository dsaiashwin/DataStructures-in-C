/*
Name : Sai Ashwin D
Date : 12 - 07 - 2025
Description : Implement Push function
Sample Input : Enter the element you have to insert at the first : 65
Sample Output : 65 -> 89 -> 22 -> 56 -> 44 -> NULL
*/

#include "stack.h"

int Push(Stack_t **top, data_t data)
{
    Stack_t* nnode = malloc(sizeof(Stack_t));   // Allocate memory for the new stack node
    
    if(!nnode)  // Check for allocation failure
        return FAILURE; // Return failure status if malloc fails
        
    nnode -> data = data;   // Assign data to the new node
    nnode -> link = NULL;   // Initialize link to NULL
    
    if(*top == NULL)    // Checking for Stack Empty
    {
        *top = nnode;   // Set new node as top
        return SUCCESS; // Return success status
    }
    
    if(*top != NULL)    // If stack has existing nodes
    {
        nnode -> link = *top;   // Link new node to current top
        *top = nnode;   // Update top to new node
        return SUCCESS; // Return success status
    }
}
