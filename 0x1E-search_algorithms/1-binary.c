#include "search_algos.h"
/**
* binary_search - function to check fot he index of the value passed
* @array: the input array
* @size: size of the array
* @value: target to check
*
* Return: index of the target value
*/
int binary_search(int *array, size_t size, int value)
{
size_t right = size - 1, left = 0, i, mid;

if (array == NULL)
return (-1);

while (left <= right)
{
mid = left + (right - left) / 2;

printf("Searching in array: ");
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
return (mid);
}


if (array[mid] < value)
{
left = mid + 1;
}

else
{
right = mid - 1;
}
}


return (-1);
}
