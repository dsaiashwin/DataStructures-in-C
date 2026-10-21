/*
Name : Sai Ashwin D
Date : 12 - 08 - 2025
Description : Implement IsQueueFull,IsQueueEmpty function
*/

#include "queue.h"

int IsQueueFull(Queue_t *q)                         // Operation for Queue is full
{
    if (q -> count == q -> capacity)
    {
        return SUCCESS;
    }
    else
    {
        return FAILURE;
    }
}



int IsQueueEmpty(Queue_t *q)                        // Operation for Queue is empty
{
    if (q -> count == 0)
    {    
        return SUCCESS;
    }
    else
    {
        return FAILURE;
    }
}
