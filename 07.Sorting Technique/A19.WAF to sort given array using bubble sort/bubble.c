/*
Name : Sai Ashwin D
Date : 12 - 08 - 2025
Description : Implement bubble function
*/

#include "main.h"

data_t bubble(data_t *arr, int size )
{
        if (arr == NULL || size <= 1)
        return -1;  // Error condition

    for (data_t i = 0; i < size - 1; i++)
    {
        for (data_t j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                data_t temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    return 0; // Success

}
