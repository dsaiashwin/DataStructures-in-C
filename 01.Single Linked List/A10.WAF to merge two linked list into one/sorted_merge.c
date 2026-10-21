/*
Name : Sai Ashwin D
Date : 01 - 07 - 2025
Description : Implement sort function

Sample Input : 
List – 1 : 30 -> 10 -> 50 
List – 2 : 20 -> 5 -> 35

Sample Output : 5 -> 10 -> 20 -> 30 -> 35 -> 50
*/

#include "sll.h"

int sorted_merge( Slist **head1, Slist **head2)
{
    if (( *head1 == NULL) && (*head2 == NULL) )         //checking if both lists are NULL
        return LIST_EMPTY;
    
    if ( (*head1) == NULL)                              //checking if first list is NULL
    {
        *head1 = *head2;                                //making head2 as head1
        sort(head1);                                    //passing the list for sorting function
    }
    
    else if ( (*head2) == NULL)                         //checking if second list is NULL
    {
        sort(head1);                                    //passing the list for sorting function
    }
    
    else
    {
        Slist* t1 = *head1;                             //initializing t1 pointer with head1
        
        while( (t1 -> link) != NULL )                   //checking if next node of t1 is Null or not
        {
            t1 = t1 -> link;                            //traversing t1 till it reaches last node in first list
        }
        t1 -> link = *head2;                            //linking the second list after first list last node
        
        sort(head1);                                    //passing the list for sorting function
    }
    
    
    return SUCCESS;
    
}
