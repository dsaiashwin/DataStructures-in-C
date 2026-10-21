/*
Name : Sai Ashwin D
Date : 20 - 08 - 2025
Description : Implement dl_delete_list function

*/
#include "dll.h"

int dl_delete_list(Dlist **head, Dlist **tail)
{
    // Check if list is empty
    if (*head == NULL)
    {
        return FAILURE;
    }

    Dlist *temp = *head;
    Dlist *next_node;

    while (temp != NULL)
    {
        next_node = temp->next;
        free(temp);
        temp = next_node;
    }

    *head = NULL;
    *tail = NULL;

    return SUCCESS;
}
