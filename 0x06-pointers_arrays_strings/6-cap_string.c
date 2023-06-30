#include "main.h"
#include <ctype.h>
/**
 * *cap_string - print characters in uppercas
 * @str: pointer to the string variable
 *
 * Return: return str variable pointer
 */
char *cap_string(char *str)
{
	char *ptr = str;
	int len = 0;
	int i;

	while (*ptr != '\0')
	{
		len++;
		ptr++;
	}

	ptr = str;

	while (*ptr != '\0')
	{
		for (i = 0; i <= len; i++)
		{
			if (*ptr == ' ' || *ptr == '.' || *ptr == '\t' || *ptr == '\n')
			{
				ptr++;
				*ptr = toupper((unsigned char) *ptr);
			}
		}

		ptr++;
	}
	return (str);
}
