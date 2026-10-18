/*
Name : Sai Ashwin D
Date : 31 - 05 - 2025
Description : Implement sl_delete_last function
Sample Input : 20
Sample Output : Delete last successfull
*/
#include "sll.h"

int sl_delete_last(Slist **head)
{
    if (*head == NULL)                              //checking whether list is empty or not
        return FAILURE;
        
    if ((*head) -> link == NULL)                    //if list empty the deleting the first node itself
    {
        free(*head);
        *head = NULL;
        return SUCCESS;
    }
    
    Slist *temp = *head;                            //taking first node link in temp to traverse to last before node
    
    while ( temp -> link -> link != NULL)           //Traversing temp to last before node
    {
        temp = temp -> link;                                    
    }
    
    free(temp -> link);                              //freeing/deleting the last node   
    temp -> link = NULL; 
    
                                                 
    
    return SUCCESS;             
}
