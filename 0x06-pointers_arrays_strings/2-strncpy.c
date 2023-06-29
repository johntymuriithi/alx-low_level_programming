#include "main.h"
/**
 * *_strncpy  - concatinate dest with src
 * @dest: pointer to the first string
 * @src: pointer to the second string
 * @n: number of charcters from src string
 *
 * Return: Return dest pointer variable
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		ptr[i] = src[i];
	}

	for (; i < n; i++)
	{
		ptr[i] = '\0';
	}

	return (dest);
} 
