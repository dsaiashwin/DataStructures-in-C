/*
Name : Sai Ashwin D
Date : 01 - 07 - 2025
Description : Implement remove_duplicates function
Sample Input : 5 → 3 → 4 → 5 → 2 → 1 → 4 → 5 → 3
Sample Output : 5 → 3 → 4 → 2 → 1
*/
#include "sll.h"

//remove duplicate data's from list
int remove_duplicates( Slist **head )
{
    if (*head == NULL)                  //checking if List is Empty
        return FAILURE;
        
    Slist* t1 = *head;                  //initializing t1 pointer with First Node
    
    while(t1 != NULL)                   //traversing t1 till Last Node
    {
        Slist* pre = t1;                //Intializing evry time pre with t1
        Slist* t2 = t1 -> link;         //Initializing t2 every time with next node of t1
        
        while( t2 != NULL )             //traversing t2 untill it reaches NULL
        {
            if ( (t2 -> data) != (t1 -> data))      //comparing t1 data with t2 data for Duplicates
            {
                pre = t2;                           //traversing prev to next node as duplicate not found
                t2 = t2 -> link;                    //traversing t2 to next node as duplicate not found
            }
            
            else if ( (t1 -> data) == (t2 -> data) )    //comparing t1 data with t2 data for Duplicates
            {
                pre -> link = t2 -> link;               //updating prev to to point to next node of t2 as duplicate found
                free(t2);                               //freeing / deleting the duplicate node
                t2 = pre -> link ;                      //updating t2 to next node of pre pointer
            }
        }
        t1 = t1 -> link;                                //traversing t1 to next node
        
    }
    return SUCCESS;
}
