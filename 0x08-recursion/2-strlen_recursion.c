#include "main.h"
/**
 * _strlen_recursion - print length of a string
 * @s: pointer to the string
 *
 * Return: lenght
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
