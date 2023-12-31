#include <stdlib.h>
#include "main.h"
/**
 * _strdup - copy string
 * @str: pointer ot the string
 *
 * Return: pointer to the copy string
 */
char *_strdup(char *str)
{
	int i;
	char *ptr = str;
	int num = 0;
	char *str2;

	if (str == NULL)
		return (NULL);

	while (*ptr != '\0')
	{
		num++;
		ptr++;
	}
	ptr = str;

	str2 = (char *)malloc((num + 1) * sizeof(char));

	if (str2 == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < num; i++)
		{
			str2[i] = *ptr;
			ptr++;
		}
		str2[num] = '\0';
		return (str2);
	}
	free(str);
}
