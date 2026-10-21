/*
Name : Sai Ashwin D
Date : 01 - 07 -2025
Description : Implement reverse_iter function
Sample Input : 50 → 40 → 45 → 20 → 10
Sample Output : 10 → 20 → 45 → 40 → 50
*/

#include "sll.h"

/* Function to reverse the given single linked list */
int reverse_iter(Slist **head) 
{ 
    if (*head == NULL)          //checking if List Empty
        return LIST_EMPTY;
        
    Slist *prev = NULL;         // Intializing prev ,prev will point to the previous node
    Slist *cur = *head;         // Intializing cur ,cur will point to the current node
    Slist *nxt = NULL;          // Intializing nxt ,nxt will point to the next node
        
    while(cur != NULL)          //traversing cur till it reaches last node
    {
        nxt = cur -> link;          //updating nxt with next node of current node
        cur -> link = prev;         //updating Current node link to point to previous node
        prev = cur;                 //updating previous node with current node 
        cur = nxt;                //updating current node with next node
    }
    
     *head = prev;              //updating the Head with last node as reversing
     
    return SUCCESS;
} 
