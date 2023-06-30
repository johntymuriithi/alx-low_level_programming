#include "main.h"
#include <ctype.h>
/**
 * string_toupper  - convert string characters to uppercase
 * @src: pointer to the string varible
 *
 * Return: return pointer src
 */
char *string_toupper(char *src)
{
	char *ptr = src;

	while (*ptr != '\0')
	{
		*ptr = toupper((unsigned char) *ptr);
		ptr++;
	}

	return (src);
}
