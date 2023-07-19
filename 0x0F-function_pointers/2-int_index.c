#include "function_pointers.h"
/**
 * int_index - function to compare values
 * @array: array of values
 * @size: size of the array
 * @cmp: function to call
 *
 * Return: return -1 if no value compares or first element of the array
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int equal, i;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		equal = cmp(array[i]);

		if (equal != 0)
		{
			return (i);
		}
	}

	return (-1);
}
