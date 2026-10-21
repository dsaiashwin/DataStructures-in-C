/*
Name : Sai Ashwin D
Date : 16 -06 - 2025
Description : Implement find_mid node data function
Sample Input : 10 -> 20 -> 30 -> 40 -> 50
Sample Output : 30
*/
#include "sll.h"
/* Function to get the middle of the linked list*/
int find_mid(Slist *head, int *mid) 
{ 
    Slist *f = head;                    //Intializing the Fast Pointer with Head
    Slist *s = head;                    //Intializing the Slow Pointer with Head
    
    if ( head == NULL)                  //cheking for List is Empty
        return LIST_EMPTY;
        
    while ( f != NULL && f -> link != NULL )        //traversing till fast pointer reaches last node 
    {                                               //or till it is null
        f = f -> link -> link;                      //traversing the fast pointer with +2
        s = s -> link;                              //traversing slow pointer normally
    }
    *mid = s -> data;                               //assigning the slow pointer node data to mid
    
    return SUCCESS;
} 
