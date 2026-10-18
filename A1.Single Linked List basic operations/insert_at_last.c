/*
Name : Sai Ashwin D
Date : 31-05-2025
Description : Implement insert_at_last function
Sample Input : Enter the number that you want to insert at last: 20
*/
#include "sll.h"

int insert_at_last(Slist **head, data_t data)           //inserting at last of Linked List
{
    Slist *new = malloc(sizeof(Slist));                 //Dynamically Allocating Size
    if (new == NULL)
        return FAILURE;
                                                        // as DMA done so updating DATA & LINK part
    new -> data = data;
    new -> link = NULL;
    
    if (*head == NULL)                                  //checking if link is Empty or not
    {
        *head = new;                                    //if Empty then updating HEAD
        return SUCCESS;
    }
    Slist *temp = *head;                                //if list not empty Copying Address of First node into pointer Temp
    while ( temp -> link != NULL)                       //Traversing temp to last node
    {
        temp = temp -> link;                            //now temp holds last node link part
    }
    
    temp -> link = new;                                 //updating temp with last nodes link
    
    return SUCCESS;
}
