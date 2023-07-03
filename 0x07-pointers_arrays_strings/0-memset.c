#include "main.h"
#include <string.h>
/**
 * _memset - print and update memory with the provided value
 * @s: adress of the memory to print
 * @b: value to print
 * @n: size of the memory to print
 *
 * Return: return s variable
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*ptr = b;
		ptr++;
	}
	return (s);
}
