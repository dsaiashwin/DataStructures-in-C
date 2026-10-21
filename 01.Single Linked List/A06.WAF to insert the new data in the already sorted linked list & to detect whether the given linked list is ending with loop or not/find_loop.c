/*
Name : Sai Ashwin D
Date : 25 - 06 - 2025
Description : Implement find_loop function
Sample Input : 
10 → 20 → 30 → 40 → 50 -> null
Enter the data to be inserted : Loop not detected
*/

#include "sll.h"

/* Function for finding the loop in the link */
int find_loop(Slist *head)
{

    if ( head == NULL)                      //checking for List is Empty or not
    {
        return LIST_EMPTY;
    }
    
    Slist* fast = head;                     //Initializing fast pointer with head
    Slist* slow = head ;                    //Initializing slow pointer with head
    
    while ( (fast != NULL)  && (fast -> link != NULL))      //checking that fast and also 
                                                            //link of fast pointing node are not null
    {
        fast = fast -> link -> link;                        //if the condition satisfy moving fast pointer +2 nodes
        slow = slow -> link;                                //if the condition satisfy moving slow pointer to next node
        
        if (fast == slow)
        {
            return SUCCESS;
        }
    }

    return LOOP_NOT_FOUND;
}
