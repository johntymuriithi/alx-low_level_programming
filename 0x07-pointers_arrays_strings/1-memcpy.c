#include "main.h"
/**
 * _memcpy - print the memory values
 * @dest: pointer to the memory to copy to
 * @src: pointer to the memory to copy from
 * @n: size of the memory to copy
 *
 * Return: return dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	return (dest);
}
