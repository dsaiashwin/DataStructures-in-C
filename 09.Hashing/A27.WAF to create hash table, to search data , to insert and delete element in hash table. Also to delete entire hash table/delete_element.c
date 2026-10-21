#include"hash.h"

int delete_element(hash_t *arr, int data, int size)
{
    int index = data % size;                        // Calculating the index
    
    if (arr[index].value == data)                   // if array index has data in it
    {
        if (arr[index].link == NULL)                // Camparing the link null or not   
        {
	        arr[index].value = -1;                  // Inserting -1 in the index value
	        
	        return SUCCESS;                         // Returning success
        }
        else                                        // Checking the condition array has data and link is not equal to NULL
        {
	                                                // Updating the values
	        hash_t *temp = arr[index].link;
	        
	        arr[index].value = temp -> value;
	        
	        arr[index].link = temp -> link;
	        
	        free(temp);                             // free the temp variable
	        
	        return SUCCESS;
        }
    }
    else
    {
        hash_t *temp = arr[index].link, *prev = NULL;
                                                    // Traversing till the last node
        while (temp != NULL)
        {
	        if (temp -> value == data)              // Checking the condition temp has datain it
	        {
	            if (temp == arr[index].link)        // Checking if one node occur
	            {
	                arr[index].link = temp -> link;
	        
	                free(temp);
	        
	                return SUCCESS;
	            }
	            else
	            {
	                prev -> link = temp -> link;   // If condition is true take temp link as previous link
	                
	                free(temp);                    // free temp
	                
	                return SUCCESS;
	            }
	        }
	        prev = temp;
	        
	        temp = temp -> link;                    // Updating the link
        }
        return DATA_NOT_FOUND;                      // Returning failure
    }
}
