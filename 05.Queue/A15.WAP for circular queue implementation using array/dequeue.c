/*
Name : Sai Ashwin D
Date : 12 - 08 - 2025
Description : Implement Dequeue function
*/
#include "queue.h"

/* Function to deque the element */
int dequeue(Queue_t *q)                                 // Checking if queue is empty or not
{
    if (IsQueueEmpty(q) == SUCCESS)
	{
	    return FAILURE;
    }
    
    
    q -> front = ( q -> front + 1 ) % (q -> capacity);  // Logical calculation for front
    
    --(q -> count);                                     // Decrementing the count
    
    return SUCCESS;                                     // Returning the SUCCESS
}
