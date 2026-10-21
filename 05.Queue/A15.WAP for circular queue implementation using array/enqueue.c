/*
Name : Sai Ashwin D
Date : 12 - 08 - 2025
Description : Implement Enqueue function
*/

#include "queue.h"

/* Function to Insert the element */
int enqueue(Queue_t *q, int data)
{
                                                                // Checking that list is full or not
    if(IsQueueFull(q) == SUCCESS)
    {
    	return FAILURE;
    }

    if (q -> front == -1)
	{
	    q -> front = 0;
	}
    
    
    // Incrementing both rear and front to 0th index from -1
    q -> rear = (q -> rear + 1) % (q -> capacity );             // Calculation for rear pointing
    
    q -> Que[q -> rear] = data;
    
    ++(q -> count);
    
    return SUCCESS;
}
