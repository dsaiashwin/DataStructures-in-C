/*
Name : Sai Ashwin D
Date : 12 - 08 - 2025
Description : Implement insert_HT function
*/
#include"hash.h"

int insert_HT(hash_t *arr, int element, int size)
{
    int index = element % size;                 // Calculating the index value

    if (arr[index].value == -1)                 // Checking the array value has no element
    {
    	arr[index].value = element;             // Inserting the data if condition is true
	 
	    return SUCCESS;
    }

    hash_t *new = malloc(sizeof(hash_t));       // Creating the node 

    if (new == NULL)                            // Checking the new node is null
	{
	    return FAILURE;                         // if condition gets true, then returning failure
    }
    
    new -> value = element;                     // Updating the values in the new node
    
    new -> link = NULL;
    
    new -> index = index;

    if (arr[index].link == NULL)                // Checking condition if the link part is null
    {
	    arr[index].link = new;                  // Updating the link with new node
	    
	    return SUCCESS;
    }
    else
    {
	    hash_t *temp = arr[index].link;         // If the above if condition is false

	    while (temp -> link != NULL)            // Running the loop that temp of link not equal to null
	    {
	        temp = temp -> link;                // Updating the temp of link in temp
        }
	    
	    temp -> link = new;                     // Outer update new with temp of link
	    
	    return SUCCESS;                         // Returning success
    }
}
