#include "search_algos.h"
/**
 * @brief 
 * 
 */

int binary_search(int *array, size_t size, int value)
{
    size_t mid, left, right = size - 1, i;

    if (array == NULL)
        return -1;

    while (left <= right)
    {
        mid = left + (right - left) / 2;

        printf("Searching in Array: ");
        for (i = left; i <= right; i++)
        {
            if (i == right)
            {
                printf("%d", array[i]);
                break;
            }
            printf("%d, ", array[i]);
        }
        printf("\n");

        if (array[mid] == value)
        {
            return mid;
        }

        if (array[mid] < value)
        {
            left = mid + 1;
        } else
        {
            right = mid - 1;
        }

    }

    return -1;
}