#include "main.h"
/**
 * *_strncat  - concatinate dest with src
 * @dest: pointer to the first string
 * @src: pointer to the second string
 * @n: number of charcters from src string
 *
 * Return: Return dest pointer variable
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;
	int i;

	while (*ptr != '\0')
	{
		ptr++;
	}

	for (i = 1; i <= n; i++)
	{
		if (*src != '\0')
		{
			*ptr = *src;
			ptr++;
			src++;
		}
	}
	return (dest);
}
