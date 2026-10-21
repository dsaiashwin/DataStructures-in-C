/*
Name : Sai Ashwin D
Date : 20 - 08 - 2025
Description : Implement dl_delete_last function

*/
#include "dll.h"

int dl_delete_last(Dlist **head, Dlist **tail)
{
    // Case 1: List is empty
    if (*tail == NULL)
    {
        return FAILURE;
    }

    Dlist *temp = *tail;

    // Case 2: Only one node
    if (*head == *tail)
    {
        *head = *tail = NULL;
    }
    else
    {
        *tail = temp->prev;
        (*tail)->next = NULL;
    }

    free(temp);
    return SUCCESS;
}
