#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - function to call
 * @size: size of the array
 * @array: array of numbers
 * @action: function to call with the array
 *
 * Return: no return
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
