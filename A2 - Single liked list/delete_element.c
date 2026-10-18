/*
Name : Sai Ashwin D
Date : 01 -06 - 2025
Description : Implement sl_delete_element function
Sample Input : 
Enter the element you need to delete : 20
Sample Output : 
Element Successfully deleted
*/
#include "sll.h"

int sl_delete_element(Slist **head, data_t data)
{
    if(*head == NULL)                       //checking if list is empty
    {
        return FAILURE;
    }
    
    Slist *temp = *head;                    //taking backup of Head in temp
    
    if(temp -> data == data)                //if the given data is same as temp -> data
    {
        *head = temp -> link;               //updating the head with second nodes link
        free(temp);                         //freeing / deleting the node 
        return SUCCESS;
    }
    Slist *temp1 = NULL;                    //taking another pointer to traverse through
    
    while ((temp != 0 ) && (temp -> data != data ))   //traverse temp when tem is not null and temp data is not the required data
    {
         temp1 = temp;                                  //copying the temp to temp1
         temp = temp -> link;                            //temp is updated to next node
    }
    
    if ( temp == NULL)                                  //if g_data is not found then return NULL
        return DATA_NOT_FOUND;
        
    temp1 -> link = temp -> link;                       //copying / updating the temp to temp1
    free(temp);                                         //freeing / deleting the temp or that node
    return SUCCESS;
}
