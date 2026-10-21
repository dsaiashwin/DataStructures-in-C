/*
Name : Sai Ashwin D
Date : 12 - 08 - 2025
Description : Implement selection sort function
*/
#include "main.h"

data_t selection(data_t *arr, data_t size )
{
    if (arr == NULL || size <= 1)
    return -1; // Error case

    for (data_t i = 0; i < size - 1; i++)
    {
        data_t min_idx = i;

        // Find the index of the minimum element in the remaining array
        for (data_t j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }

        // Swap if a smaller element was found
        if (min_idx != i)
        {
            data_t temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
        }
    }

    return 0; // Success

}
