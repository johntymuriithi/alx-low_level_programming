#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - convert bianry to string
 * @b: bianry digit
 *
 * Return: interger number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
		{
			number = (number << 1) + (b[i] - '0');
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (number);
}
