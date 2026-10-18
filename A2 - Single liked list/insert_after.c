/*
Name : Sai Ashwin D
Date : 01 - 06 - 2025
Description : Implement sl_insert_after function
Sample Input : 
Enter the value of gdata : 10
Enter the ndata that you want to insert after 10 : 20
Sample Output : String to integer is 12345
*/
#include "sll.h"

int sl_insert_after(Slist **head, data_t g_data, data_t ndata)
{
    if(*head == NULL)                           //cheking if list is empty or not
    return LIST_EMPTY;
    
    Slist *temp = *head;                        //copying head to temp as to traverse to g_data
    
    while(temp != NULL)
    {
        if( temp -> data == g_data)             //comparing/searching each node  for g_data
        {
            Slist *new = malloc(sizeof(Slist)); //allocating size Dynamically to create a new node
            
            if(new == NULL)                     //if Size by DMA is not allocated then return Failure
                return FAILURE;
            
            new -> data = ndata;                //updating data to new node
            
            new ->link = temp -> link;          //updating link of new node 
            
            temp -> link = new;                 //making the g_data node point to new node 
            
            return SUCCESS;
        }
        temp = temp -> link;                    //making the temp point to new node
    }

    return DATA_NOT_FOUND;                      //if g_data not matched the return data not found
    
}
