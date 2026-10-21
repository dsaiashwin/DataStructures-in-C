/*
Name : Sai Ashwin D
Date :12 - 08 - 2025
Description : Implement dequeue function

*/
#include "queue.h"

int dequeue(Queue_t **front, Queue_t **rear)
{
    if (*front == NULL)                             // Checking queue is empty or not
    {
        return FAILURE;
    }
    
    
    if (*front == *rear)                            // Conditin checking for single node is present
    {
    	free(*front);                               // Update front and rear with NULL if not it will be a dangling pointer
	
	    *front = *rear =NULL;
    }
    else                                            // if multiple node is present
    {
	    *front = (*front) -> link;                  // Updating the next node and free the node
	
	    free((*rear) -> link);
	
	    (*rear) -> link =  *front;                  // Last node address will be pointing to rear
	
	    return SUCCESS;
    }

}
