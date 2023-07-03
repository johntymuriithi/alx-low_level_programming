#include <stddef.h>
#include "main.h"
/**
 * _strchr - print the first occuerence of a character
 * @s: pointer variable
 * @c: character to compare
 * Return: return result
 */
char *_strchr(char *s, char c)
{
	char *ptr = s;
	char *result = NULL;

	while (*ptr != '\0')
	{
		if (*ptr == c)
		{
			result = ptr;
			break;
		}
		ptr++;
	}
	return (result);
}
