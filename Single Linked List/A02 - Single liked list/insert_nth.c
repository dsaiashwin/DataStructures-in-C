/*
Name : Sai Ashwin D
Date : 01 - 06 - 2025
Description : Implement sl_insert_nth function
Sample Input : 
Enter the node number : 4
Enter the number that you want to insert 4 th position : 40
Sample output :
40 is successfully inserted at the position 4\n
*/
#include "sll.h"

int sl_insert_nth(Slist **head, data_t data, data_t n)
{
    if(n <= 0 )                                         //checking if required data is negative 
        return POSITION_NOT_FOUND;
        
    if (n==1)                                           // if new node to be inserted at first itself means Head to be changed so
    {
        Slist *new = malloc(sizeof(Slist));             // allocating memory Dynamically
        
        if (new == NULL)                                //checking if memory allocated or not
            return FAILURE;
        
        new -> data = data;                             //updating data to the new node created
        new -> link = *head;                            //updating link for the new node created
        *head = new ;
        
        return SUCCESS;
    }
    if (*head == NULL)                                  //checking if list is null
        return LIST_EMPTY;
    
    Slist *temp = *head;                                //taking another pointer to traverse to nth position
    int c = 1;
    
    while ( (temp != NULL) && (c < (n-1) ))             // traversing by checking the position till n-1
    {
        temp = temp -> link;
        c++;
    }
    if (temp == NULL)                                   // if temp reaches last but  data not found then return Data not fount
        return POSITION_NOT_FOUND;
        
    Slist *new1 = malloc(sizeof(Slist));
    
    if (new1 == NULL)                                    // if memory not allocated then return failure
        return FAILURE;
        
    new1 -> data = data;                                 //updating data to the new node created
    new1 -> link = temp -> link;                         //updating link for the new node created
    temp -> link = new1;                                 //making temp point to new node link
    
    return SUCCESS;
    
}
