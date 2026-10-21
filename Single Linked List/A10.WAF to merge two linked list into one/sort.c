/*
Name : Sai Ashwin D
Date : 01 - 07 - 2025
Description : Implement sort function
Sample Input : 30 -> 10 -> 50 -> 20 -> 5 -> 35
Sample Output : 5 -> 10 -> 20 -> 30 -> 35 -> 50
*/

#include "sll.h"    

//sortList() will sort nodes of the list in ascending order  
int sort(Slist **head) 
{  
    if (*head == NULL )                     //checking if List is Empty
    {
        return LIST_EMPTY;
    }

    int c = 0;                              //initializing a count Variable
    Slist *temp = *head;                    //taking a temporary pointer same as pointing to first node

    while (temp != NULL)                    //traversing temp till it reaches last Node
    {
        c++;                                //increasing the count as temp reads each node
        temp = temp->link;                  //traversing temp to next node
    }
                                            //taking nested loops to do Bubble Sort
    for (int i = 0; i < c - 1; i++) 
    {
        Slist *prev = NULL;                 //Initializing the Temp back to NULL
        Slist *t1 = *head;                  //Initializing t1 pointer to head
        Slist *t2 = t1->link;               //Initializing t2 pointer to link of t1

        for (int j = 0; j < c - i - 1; j++)
        {
            if ((t1->data) > (t2->data))        //comparing the data of each node
            {
                // Swap nodes
                if (t1 == *head)            //if the first node itself to be sorted 
                {
                    t1->link = t2->link;    //updating t1 link with t2 link
                    t2->link = t1;          //updating t1 to point to link of t2
                    *head = t2;             //updating head as t2
                    prev = *head;           //updating the temp with new head 
                }
                else
                {
                    prev->link = t2;        //updating t2 to temp node's link
                    t1->link = t2->link;    //updating t1 link with t2 link
                    t2->link = t1;          //updating t1 to point to t2 link
                    prev = t2;              //updating temp with t2
                }

                t2 = t1->link;              // After swap, t2 is now after t1
            }
            else
            {                               //else if node is in sorted order then traversing pters forward 
                prev = t1;                  //updating temp with t1
                t1 = t1->link;              //updating t1 with next node
                t2 = t2->link;              //updating t2 with next node
            }
        }
    }

    return SUCCESS;
}  
