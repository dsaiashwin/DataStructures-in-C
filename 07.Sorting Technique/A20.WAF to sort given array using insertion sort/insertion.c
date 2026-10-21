/*
Name : Sai Ashwin D
Date : 12 - 08 - 2025
Description : Implement insertion sort function
*/

#include "main.h"
data_t insertion(data_t *arr, data_t size)
{
    for (int i = 1; i < size; i++)
    {
        data_t key = arr[i];
        int j = i - 1;

        // Shift elements greater than key to one position ahead
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }

    return 0;  // SUCCESS

}
