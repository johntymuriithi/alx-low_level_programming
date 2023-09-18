#include "main.h"
/**
 * *_strcpy - copy src to dest
 * @dest: a buffer
 * @src: copy to
 *
 * Return: return dest
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}
	dest[index] = '\0';

	return (dest);
}
