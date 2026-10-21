/*
Name : Sai Ashwin D
Date : 12 - 07 - 2025
Description : Implement Pop function
Sample Output : 
65 -> 89 -> 22 -> 56 -> 44 -> NULL
INFO : Pop operation is successful
89 -> 22 -> 56 -> 44 -> NULL
*/

#include "stack.h"

int Pop(Stack_t **top)
{
    if(*top == NULL)            //checking for Stack Empty
        return FAILURE;         //return Failure as Stack Empty
        
    Stack_t* temp = (*top);     //taking a new pointer to traverse
    *top = (*top) -> link;      // Advance top pointer
	free(temp);                 // Free popped node
	
	return SUCCESS;
}
