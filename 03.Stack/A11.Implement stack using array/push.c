/*
Name : Sai Ashwin D
Date : 12 - 07 - 2025
Description : Implement Push function
Sample Input :30
*/
#include "stack.h"

/* Fuction for inserting the element */
int Push(Stack_t *s, int element)
{
	if(s -> top == (s -> capacity) -1 )     //checking if Stack is full or not
	    return FAILURE;                     //returning Failure as stack is full
	    
	s -> top++;                             //as Stack is not full so incrementing Top to point towards next index
	
	(s -> stack [s -> top]) = element;           //loading / pushing the newdata into next index of stack
	return SUCCESS;                         // returning Success
}
