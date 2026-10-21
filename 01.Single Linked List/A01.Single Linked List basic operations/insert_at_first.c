/*
Name : Sai Ashwin D
Date :31 - 05 - 2025
Description : Implement insert_at_first function
Sample Input : Enter the element you have to insert at the first : 10
*/
#include "sll.h"

int insert_at_first(Slist **head, data_t data)
{
	Slist *new = malloc(sizeof(Slist));        //Dynamically Allocating Size
    if (new == NULL)
        return FAILURE;
        
    new -> data = data;                         //loading  the data
    new -> link = NULL;                         //loading the link
    
    new -> link = (*head) ;                     //updating the link of newly created node with previous link of head
    
    *head = new ;                               //updating the head to poin to new
    
    return SUCCESS;
        
}
