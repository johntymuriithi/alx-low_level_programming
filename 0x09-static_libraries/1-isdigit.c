#include <stdio.h>
/**
 * _isdigit - check if c is a digit
 * @c: character to be checked
 * Return: Always return 0 or 1
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
