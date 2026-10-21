/*
Name : Sai Ashwin D
Date : 12 - 08 - 2025
Description : Implement create_HT function
*/
#include "hash.h"

void create_HT(hash_t *HT, int size)
{
    int i;                              // Declaring the variable
    
    for (i = 0; i < size; i++)          // Running the loop upto size
    {
    	                                // Each node having 3 blocks
	    HT[i].index = i;         
	   
	    HT[i].value = -1; 
	   
	    HT[i].link = NULL;
    }
}
