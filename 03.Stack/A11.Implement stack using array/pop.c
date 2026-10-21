/*
Name : Sai Ashwin D
Date : 12 - 07 - 2025
Description : Implement Pop function
Sample Output : Enter the element to be pushed in stack : 30
*/
#include "stack.h"

/* Function for Poping the element */
int Pop(Stack_t *s)
{	
	if( s-> top == -1)      //Checking if Stack is Empty
	    return FAILURE;     //returning Failure as Stack is Empty
	    
	    s -> top--;         //decreasing the value top points to.taken as Deleted/ Popped
	    return SUCCESS;     //returning Success
}
