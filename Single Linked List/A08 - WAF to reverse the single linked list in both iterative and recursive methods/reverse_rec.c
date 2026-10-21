/*
Name : Sai Ashwin D
Date : 01 - 07 - 2025
Description : Implement reverse_recursive function
Sample Input : 33 → 40 → 30 → 20 → 10
Sample Output : 10 → 20 → 30 → 40 → 33
*/

#include "sll.h"

static Slist *prev = NULL;                      //taking previeous node as Static

int reverse_recursive(Slist ** head)
{
    static int first_call = 1;              //taking a flag variable to ensure the condition is checked only once at starting
    if (first_call)                         //checking if it starting execution
    {
        if (*head == NULL)                  //checking if list Empty
        {
            prev = NULL;                    // Ensure static is reset even if list is empty
            return LIST_EMPTY;
        }
        first_call = 0;                     //making first_call variable to 0 as one time it is executed
    }
    
    Slist *cur = *head;                 //Initializing current node pointer with head
    Slist *nxt;                         //Initializing next node pointer with current node Link
    
    if (cur)
    {
        nxt = cur -> link;
        cur -> link = prev;         //updating Current node link to point to previous node
        prev = cur;                 //updating previous node with current node 
        *head = nxt; 
        
        reverse_recursive(head);    //calling the function itself recursively
    }
    
    else
    {
        *head = prev;               //restore Head after reversing the list
        prev = NULL;                //assigning prev back to NULLfor next calls
    }

    return SUCCESS;
}
