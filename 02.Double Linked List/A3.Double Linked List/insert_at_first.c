/*
Name : Sai Ashwin D
Date : 20 - 08 - 2025
Description : Implement dl_insert_first function

*/

#include <stdlib.h>
#include "dll.h"

int dl_insert_first(Dlist **head, Dlist **tail, int data)
{
    // Allocate memory for new node
    Dlist *new = (Dlist *)malloc(sizeof(Dlist));
    if (new == NULL)
        return FAILURE;

    // Initialize new node
    new->data = data;
    new->prev = NULL;
    new->next = *head;

    // If the list is empty
    if (*head == NULL)
    {
        *head = *tail = new;  // Head and tail point to the new node
    }
    else
    {
        (*head)->prev = new; // Current head's prev points to new node
        *head = new;         // New node becomes the new head
    }

    return SUCCESS;
}
