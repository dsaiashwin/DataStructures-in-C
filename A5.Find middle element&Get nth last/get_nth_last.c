/*
Name : Sai Ashwin D
Date : 16 -06 - 2025
Description : Implement find_nth_last node data function
Sample Input : Enter a number as position to find
10 -> 20 -> 30 -> 40 -> 50, n = 2
Sample Output : 40 
*/

#include "sll.h"
/* Function to get the nth node from the last of a linked list*/
int find_nth_last(Slist *head, int pos, int *data) 
{ 
    Slist* t1 = head;                           //initializing the t1 pointer with head address
    Slist* t2 = head;                           //initializing the t2 pointer with head address
    
    if ( head == NULL)                          //checking for list is Empty
        return LIST_EMPTY;
    
    if ( pos > 0)                              //Ckecking for position is greater than 0
    {
        for ( int i = 1 ; i <= pos ; i++)           //traverse t1 till position 
        {
            if ( t1 == NULL)
                return FAILURE;
            t1 = t1 -> link;                        //assigning t1 to next link
        }
        
        while ( t1  != NULL )                       
        {
            t1 = t1 -> link;                       //now from pos, traversing t1 till null
            t2 = t2 -> link;                        //traversing t2 till t1 reaches null
        }
        *data = t2 -> data;                         //returning the  t2 pointer data
        
        return SUCCESS;
    }
    return FAILURE;
}
