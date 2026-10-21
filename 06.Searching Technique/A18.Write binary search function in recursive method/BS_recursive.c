/*
Name : Sai Ashwin D
Date : 12 - 08 - 2025
Description : Implement binarySearch_recursive function
*/

#include "main.h"

/* Function to search the element using binary search */
data_t binarySearch_recursive(data_t *arr, data_t size, data_t key, data_t first, data_t last)
{
    int mid;
    if(first <= last)
    {
        mid = (first + last)/2;
        if(arr[mid] == key)
        {
            return mid;
        }
        else if(arr[mid] > key)
        {
            return binarySearch_recursive(arr,size,key,first,mid-1);
        }
        else
        {
            return binarySearch_recursive(arr,size,key,mid+1,last);
        }
    
    }    
    return -1;
}
