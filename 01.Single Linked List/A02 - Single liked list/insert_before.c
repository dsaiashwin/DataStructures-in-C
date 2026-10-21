/*
Name : Sai Ashwin D
Date : 01 -06 - 2025
Description : Implement sl_insert_before function
Sample Input : 
Enter the value of gdata : 30
Enter the ndata that you want to insert before 30 : 20

*/
#include "sll.h"

int sl_insert_before(Slist **head, data_t g_data, data_t ndata)
{
    if(*head == NULL)           //check if list empty
        return LIST_EMPTY;
        
    if( (*head) -> data == g_data )         //checking if the head data is the given g_data
    {
        Slist *new = malloc(sizeof(Slist));
        
        if (!new)                           //if memory is not allocated return failure
            return FAILURE;
            
        new -> data = ndata;                //updating data and link if DMA is done
        new -> link = *head;                //making new link part to ppint towards previous head
        
        *head = new;                        //updating the new head
        
        return SUCCESS;
    }
    
    Slist *t1 = *head;                      //taking backup of head in a pointer
    Slist *t2 = (*head) -> link;            //taking the next node in another pointer
    
    while ( t2 )                    //when t2  is not the last node
    {
        if ( t2 -> data == g_data )
        {
            Slist *new = malloc(sizeof(Slist));
            
            if ( !new)
            {
                return FAILURE;
            }
            new -> data = ndata;            //allocating the user given data to new node
            new -> link = t2;               //updating the newly created link with next node
            
            t1 -> link = new;               //updating the previous node link with newly created node
            return SUCCESS;
        }
        
        t1 = t2;                            //updating or traversing t1 to point to next node
        t2 = t2 -> link;                    //updating or traversing t2 to point to next node
    }
    return DATA_NOT_FOUND;
}
