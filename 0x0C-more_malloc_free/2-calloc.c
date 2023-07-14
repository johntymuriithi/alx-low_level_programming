#include <stdlib.h>
#include "main.h"
/**
 * _calloc - allocate memoery for an array
 * @nmemb: array elements
 * @size: number of bytes
 *
 * Return: pointer to the memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arrr;
	char *arr;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arrr = malloc(size * nmemb);

	if (arrr == NULL)
		return (NULL);

	arr = arrr;

	for (index = 0; index < (size * nmemb); index++)
		arr[index] = '\0';

	return (arr);
