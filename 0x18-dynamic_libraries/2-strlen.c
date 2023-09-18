#include "main.h"
#include <string.h>
/**
 * _strlen - calculate the length of a string
 * @s: character to find its length
 *
 * Return: Return length of @s
 */
int _strlen(char *s)
{
	int num = 0;

	while (*s != '\0')
	{
		num++;
		s++;
	}

	return (num);
}
