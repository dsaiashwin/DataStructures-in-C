/*
Name : Sai Ashwin D
Date : 23 - 06 - 2025
Description : Implement insert_sorted function
Sample Input : 
10 → 20 → 30 → 40 → 50 -> null
Enter the data to be inserted : 45
Sample Output : 10 → 20 → 30 → 40 → 45 → 50 -> null
*/

#include "sll.h"

/* Function for insert the number in sorted linked list */
int insert_sorted( Slist **head, data_t data) 
{ 
    Slist *nnode = malloc(sizeof( Slist ));     //allocating some memory Dynamically to newly created node
    
    if (nnode == NULL)                  //checking that is new node is allocated Dynamic Memory or not
        return FAILURE;
        
    nnode -> data = data;               //updating the newly created node with given data
    nnode -> link = NULL;               //temporaryly giving newly created node link with null
    
    Slist *prev = *head;
    Slist *temp = *head;
    
    if ( *head == NULL )                //verifying if Linked List is Empty
    {
        *head = nnode ;
        return SUCCESS;
    }
    
    if ( data < ((*head) -> data) )     //checking that if the is smaller than Head / first node data 
    {
        *head = nnode  ;                //updating the first node / head
        nnode -> link = temp ;          //updating the new node's link part 
        return SUCCESS;
    }
    
    
    while ( (temp != NULL) &&  (data > (temp -> data)) )  //traverse till temp reaches null and 
                                                           // when data is larger than first node data
    {
        prev  = temp;
        temp  = temp -> link;
            
    }
    prev -> link = nnode;                       //updating the previous node link to point to new value
    nnode -> link = temp;                       //updating the new node link to point to next node        
    
    return SUCCESS;
    
} 
