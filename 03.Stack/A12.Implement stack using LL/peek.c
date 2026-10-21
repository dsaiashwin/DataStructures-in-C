/*
Name : Sai Ashwin D
Date : 12 - 07 - 2025
Description : Implement Peek function
Sample Output : 65 -> 89 -> 22 -> 56 -> 44 -> NULL
*/

#include "stack.h"

int Peek(Stack_t **top)
{
    if(*top == NULL)            //checking for is Stack Empty or not
        return FAILURE;         //return Failureas Stack Empty
        
    return ((*top) -> data);    //returning the top data
}
