/*
Name : Sai Ashwin D
Date : 31 - 05 - 2025
Description : Implement find_node function
Sample Input : Enter the key to find : 20
Sample Output : "20 found in the list at the position 2
*/

#include "sll.h"

int find_node(Slist *head, data_t data)
{
    int position = 1;                   //Initialising the position to 1
    
	if(head == NULL)
	    return FAILURE;
	   
	while(head != NULL)                 //checking the head for list empty or not
	{
	    if(head -> data == data)        //comparint the required data with all the list data
	    {
	        return position;            //if matches returning the position
	    }
	    
	    else
	    {
	        position++;                 //if not incrementing the position
	        head = head -> link;        //updating the head to point to next nodes address
	    }
	}
	return FAILURE;
}
