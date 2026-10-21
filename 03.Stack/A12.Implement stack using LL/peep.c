/*
Name : Sai Ashwin D
Date : 12 - 07 - 2025
Description : Implement Peep function
Sample Output : 65 -> 89 -> 22 -> 56 -> 44 -> NULL
*/

#include "stack.h"

int Peep(Stack_t *top)
{
	/* Checking the list is empty or not */
	if (top == NULL)
	{
		printf("INFO : Stack is empty\n");
		return FAILURE;
	}

	/* Storing the value in top for traversing */
	Stack_t *temp = top;	
	while (temp)		
	{
		/* Printing the value from stack */
		printf("%d -> ", temp -> data);

		/* Traversing to next node */
		temp = temp -> link;
	}

	printf("NULL\n");
	return SUCCESS;
}
