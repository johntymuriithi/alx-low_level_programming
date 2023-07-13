#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - allocate memory
 * @b: size of the memory block to be allocated
 *
 * Return: return pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *ch;

	ch = malloc(b);

	if (ch == NULL)
	{
		exit(98);
	}

	return (ch);
}
