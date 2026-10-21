#include"hash.h"


int destroy_HT(hash_t *arr, int size)
{
    for(int index = 0; index < size ; index++)	
    {
    	if (arr[index].value == -1)	            // If there is no 1st element in array
	    {
	        continue;
        }
	    
	    arr[index].value = -1;		            // Storing -1 it means erasing data
	    
	    hash_t *temp = arr[index].link, *ptr;

	    while(temp)	                            // Traversing till last
	    {
	        ptr = temp;
	    
	        temp = temp -> link;
	    
	        free(ptr);	                        // Free ptr
	    }
	    arr[index].link = NULL;	                // Making that null
    }
    return SUCCESS;
}
