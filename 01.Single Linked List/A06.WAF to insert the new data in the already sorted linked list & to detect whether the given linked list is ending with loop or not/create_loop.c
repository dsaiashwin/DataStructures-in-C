/*
Name : Sai Ashwin D
Date : 28 - 06 - 2025
Description : Implement create_loop function
Sample Input : 10 → 20 → 30 → 40 → 45 → 50, 55
Sample Output : 55 not found at the list
*/
#include "sll.h"

/* Function to create the loop */
int create_loop(Slist **head, data_t data)
{
    
    if (! *head )                                           //checking if list is Empty
    {
        return FAILURE;
    }
    
    Slist *p1 = *head;                                      //initialising pointer pi with Head
    Slist *p2 = *head;                                      //initialising pointer pi with Head
    
    while ( p1 -> link != NULL )                                    //traversing until p1 reaches last node
    {
        p1 = p1 -> link;                                    //traversing p1 to point to next node

        if ( (p2 -> data != data) && ( p2 != NULL) )        //checking that if p2 data matches with given data 
        {
            p2 = p2 -> link;                                //traversing pointer p2 to next node
        }
        
        
    }
    
    if ( (p2 -> link == NULL) || (p2 -> data != data) ) //checking if p2 reached null and data not found
    {
        return DATA_NOT_FOUND;
    }
        
    p1 ->link = p2;                                         //creating loop by making last node link point to given data
    return SUCCESS;

}
