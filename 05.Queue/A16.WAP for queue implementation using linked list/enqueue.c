/*
Name : Sai Ashwin D
Date : 12 - 08 - 2025
Description : Implement enqueue function
*/
#include "queue.h"

int enqueue(Queue_t **front, Queue_t **rear, int data)
{
    Queue_t *new = malloc(sizeof(Queue_t));             // Creating the node

    if( new == NULL )                                   // Checking the created node is NULL return failure
    {
        return FAILURE;
    }
    
    new -> data = data;                                 // Updating the node with data

    if (*front == NULL)                                 // Checking front is NULL
    {
	    *front = *rear = new;                           // Updating new to front and rear
    }
    else
    {
	    (*rear) -> link = new;                          // Updating the link
	
	    *rear = new;
    }
    new -> link = *front;                               // Updating the new of link with front, since it is circular

    return SUCCESS;

}
