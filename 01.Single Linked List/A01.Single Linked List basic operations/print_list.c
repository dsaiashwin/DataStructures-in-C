/*
Name : Sai Ashwin D
Date : 31 - 05 - 2025
Description : Implement print_list function
Sample Output : 10 -> 20 -> 30 -> NULL
*/
#include "sll.h"

void print_list(Slist *head)
{
	if (head == NULL)
	{
		printf("INFO : List is empty\n");
	}
    else
    {
	    while (head)		
	    {
		    printf("%d -> ", head -> data);
		    head = head -> link;
	    }

	    printf("NULL\n");
    }
}
