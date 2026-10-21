/*
Name : Sai Ashwin D
Date : 12 - 08 - 2025
Description : Implement merge sort function
*/

#include "main.h"

int merge_sort(int *array, int narray)
{
    if (narray < 2)
        return SUCCESS;

    int mid = narray / 2;                                       //taking middle index

    int *left = (int *)malloc(mid * sizeof(int));
    int *right = (int *)malloc((narray - mid) * sizeof(int));

    if (left == NULL || right == NULL)
        return FAILURE;

                                                                // Copy elements to left and right subarrays
    for (int i = 0; i < mid; i++)
        left[i] = array[i];
    for (int i = mid; i < narray; i++)
        right[i - mid] = array[i];

                                                                // Recursive sort
    merge_sort(left, mid);
    merge_sort(right, narray - mid);

                                                                // Merge both halves
    merge(array, narray, left, mid, right, narray - mid);

    free(left);
    free(right);

    return SUCCESS;

}
