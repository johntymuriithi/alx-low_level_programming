#include "main.h"
/**
 * *_strcat - concatinate strings
 * @dest: pointer to the first string
 * @src: pointer to the second string
 *
 * Return: Return dest variable pointer
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}

	*ptr = '\0';

	return (dest);
}
