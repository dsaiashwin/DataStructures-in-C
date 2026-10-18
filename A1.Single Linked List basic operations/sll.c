/*
Implement the functions given below :-
1.insert_at_first(head, data)
2.insert_at_last(head, data)
3.delete_first(head)
4.delete_last(head)
5.delete_list(head)
6.find_node(head, data)

1. insert_at_first :
Input : head → pointer to first node.
           data → data to be inserted.
Read data from user and insert the given data in first position.
Cases : List empty, data = 10
head = NULL , After inserting data into list, list contains
10 → NULL
List not empty, data 40
10 → 20 → 30 → NULL, After inserting 40 into list
40 → 10 → 20 → 30 → NULL

2. Insert_at_last :
Input : head → pointer to first node
           data → data to be inserted at the end.
Cases : List empty
             List not empty
             1. List empty – Update the head with new node address.
             2. List not empty – Traverse to the last node and establish the link between last node and new node.

3. delete_first :
Input : head → pointer to the first node.
Cases : List empty
              List not empty
             1. List empty → Return LIST_EMPTY (in empty list node can’t be deleted)
             2. List not empty → Update the head with next node address, delete the first node.
Example :
    head → 10 → 20 → 30 → 40 → 50 → NULL
    head 10 → 20 → 30 → 40 → 50 → NULL
    head → 20 → 30 → 40 → 50 → NULL

4. delete_last
Input : head → pointer to first node
Cases : List empty
List not empty
1. List empty → Return LIST_EMPTY (in empty list node can’t be deleted)
2. List not empty → Traverse to the last node, update the previous node address and delete
the last node.

5. delete_list
Input : head → pointer to first node
Cases : List empty
List not empty
1. List empty → Return LIST_EMPTY (in empty list node can’t be deleted)
2. List not empty → Delete all nodes one by one.
NOTE : Should not update head directly with NULL without freeing the nodes.

6. find_node
Inputs : head → pointer to first node.
             data → data to be found in the list.
Cases : List empty
List not empty
1. Data found
2. Data not found
1. List empty → Return LIST_EMPTY (in empty list can’t search data)
2. List not empty
      1. Traverse through the list to search the data
      2. If data found return DATA_FOUND
3. Else return DATA_NOT_FOUND
*/
#include "sll.h"

int main()
{
	
	int option, data, key;


	Slist *head = NULL; //initialize the header to NULL

	printf("1. Insert last\n2. Insert first\n3. Delete Last\n4. Delete first\n5. Delete list\n6. Find node\n7. Print list\n8. Exit\nEnter your choice : ");

	while (1)
	{

		/*ask user options*/

		scanf("%d", &option);
		
		switch (option)
		{
			case 1:
				printf("Enter the number that you want to insert at last: ");
				scanf("%d", &data);
			
                
				/*insert_at_last function call*/
				if (insert_at_last(&head, data) == FAILURE) //pass by reference
				{
					printf("INFO : Insertion Failure\n");
				}
				break;
			case 2:
				/*To insert the element at first */
				printf("Enter the element you have to insert at the first : ");
				scanf("%d", &data);
				
				if (insert_at_first(&head, data) == -1)
				{
					printf("INFO : Insertion Failure\n");
				}
				break;

			case 3:
				/* Delete a last link*/
				if (sl_delete_last(&head) == -1)
				{
					printf("INFO : Delete last Failure\nList is empty\n");
				}
				else
				{
				    printf("INFO : Delete last successfull\n");
				}
			
				break;
			case 5:
				/* Delete list */
				if (sl_delete_list(&head) == -1)
				{
					printf("INFO : Delete list Failure\nList is empty\n");
				}
				else
				{
					printf("INFO : Delete list Successfull\n");
				}
	
				break;
			case 4:
				/*To delete first node */
				if (sl_delete_first(&head))
				{
					printf("INFO : Delete first Failure\n List is empty\n");
				}
				else
				{
				    printf("INFO : Delete first successfull\n");
				}
				break;
			case 6:
				printf("Enter the key to find : ");
				scanf("%d", &key);
				int count;
				if ((count = find_node(head, key)) == FAILURE)
				{
					printf("INFO : Failure\nList is empty or Key not found\n");
				}
				else
				{
					printf("%d found in the list at the position %d\n", key, count);
				}
		
				break;
			case 7:
				/* print list function call*/
				print_list(head);
					break;
	
			case 8:
				return SUCCESS;
			default: printf("Enter proper choice !!\n");
			
					 break;
		}
	    

	}
}

