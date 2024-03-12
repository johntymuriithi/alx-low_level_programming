#include "search_algos.h"
/**
* linear_search - function to check fot he index of the value passed
* @array: the input array
* @size: size of the array
* @value: target to check
*
* Return: index of the target value
*/
int linear_search(int *array, size_t size, int value)
{
size_t i = 0;

if (array == NULL)
return (-1);

while (i < size)
{
printf("Value checked array[%ld] = [%d]\n", i, array[i]);
if (array[i] == value)
{
return (i);
}
i++;
}

return (-1);
}
