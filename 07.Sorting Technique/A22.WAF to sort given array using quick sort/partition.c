/*
Name : Sai Ashwin D
Date : 12 - 08 - 2025
Description : Implement partition for quick sort function
*/

#include "main.h"

/* Function to partition the array */
int partition(int *arr, int first, int last)
{
    int pivot = arr[last];
    int i = first - 1;
    int temp;

    for (int j = first; j < last; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            // Swap arr[i] and arr[j]
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    // Place pivot in correct position
    temp = arr[i + 1];
    arr[i + 1] = arr[last];
    arr[last] = temp;

    return i + 1;  // New pivot index

}
