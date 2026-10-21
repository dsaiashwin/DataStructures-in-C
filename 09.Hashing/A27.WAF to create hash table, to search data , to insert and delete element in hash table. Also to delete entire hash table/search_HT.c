#include"hash.h"

int search_HT(hash_t *arr, int data, int size)
{
    int index = data % size;                        // Calculating the index value

    if (arr[index].value == data)                   // Checking the condition if data is present
    {
        return SUCCESS;                             // Returning success
    }
    
    hash_t *temp = arr[index].link;

    while (temp != NULL)                            // Running the loop untill null
    {
	    if (temp -> value == data)                  // Checking condition temp of value equal to data
	    {
	        return SUCCESS;
	    }
	    temp = temp -> link;                        // Updating the temp of link in temp
    }
    return DATA_NOT_FOUND;                          // Condition false if data is not present
}
