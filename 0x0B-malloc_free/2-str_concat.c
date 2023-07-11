#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * str_concat - concatinate strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 *
 * Return: Return the concatinatend string
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr1 = s1;
	char *ptr2 = s2;
	char *str;
	int len1 = 0, len2 = 0;
	int index, size;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}
	while (*ptr1 != '\0')
	{
		len1++;
		ptr1++;
	}
	while (*ptr2 != '\0')
	{
		len2++;
		ptr2++;
	}
	size = len1 + len2;
	ptr1 = s1;
	ptr2 = s2;
	str = (char *) malloc((size + 1) * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	for(index = 0; index < len1; index++)
	{
		str[index] = *ptr1;
		ptr1++;
	}
	for(index = len1; index <= size; index++)
	{
		str[index] = *ptr2;
		ptr2++;
	}
	str[size] = '\0';
	return (str);

}
