/*
Name : Sai Ashwin D
Date : 12 - 07 - 2025
Description : Implement Peek function
Sample Output : INFO : Peek element is 67 
*/
#include "stack.h"

/* Function for display the top of the element in Stack */
int Peek(Stack_t *s)
{
	if(s -> top == -1)          //checking for Stack Empty
	    return FAILURE;         //returning Failure as Stack is Empty
	    
	return (s -> stack[s -> top]);    //else returning the Top Element
	
}
