#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - returns the poiter to an array
 * @size: size of the arrray
 * @c: the character
 *
 * Return: Return array
 */
char *create_array(unsigned int size, char c)
{
	char *charArr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		charArr = (char *)malloc(size * sizeof(char));

		if (charArr == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i  = 0; i < size; i++)
			{
				charArr[i] = c;
			}
			charArr[size] = '\0';
		}
		return (charArr);
	}
}
