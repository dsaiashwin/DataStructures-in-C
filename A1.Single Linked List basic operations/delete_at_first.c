/*
Name : Sai Ashwin D
Date : 31 - 05 - 2025
Description : Implement delete_at_first function
Sample Input : 10
Sample Output : INFO : Delete first successfull
*/
#include "sll.h"

int sl_delete_first(Slist **head)
{
    if (*head == NULL)          //checking whether list is empty or not
        return FAILURE;
    
    Slist *temp = *head;        //taking first node backup in temp to free it after updating head
    
    *head = (*head) -> link;    //updating head to next node
    
    free(temp);                 //freeing/deleting the first node
    
    return SUCCESS;             

}
