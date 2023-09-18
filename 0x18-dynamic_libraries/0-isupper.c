#include <ctype.h>
/**
 * _isupper - checks if c is uppercase;
 * @c: character to be checker
 * Return: Always return 0 or 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
