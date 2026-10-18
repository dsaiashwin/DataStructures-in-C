/*
Name : Sai Ashwin D
Date : 31 - 05 - 2025
Description : Implement sl_delete_list function
Sample Input : 
Sample Output : Delete list Successfull
*/
#include "sll.h"

int sl_delete_list(Slist **head)
{
	if (*head == NULL)                  //if List empty return failure
	    return FAILURE;
	
	Slist *temp;                        //creating new pointer temp
	
	while (*head != NULL)               //trversing head pointer till head points to null
	{
	    temp = *head;                   //assigning/copying head to temp
	    *head = (*head) -> link;        // updating head with next node's link
	    free(temp);                     //freeing up the previous head 
	}
	return SUCCESS;
}
