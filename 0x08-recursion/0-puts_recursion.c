#include "main.h"
/**
 * _puts_recursion - print out a characters
 * @s: pointer to the string
 * Return: no return
 */
void _puts_recursion(char *s)
{
	char *ptr = s;

	if (*ptr != '\0')
	{
		_putchar(*ptr);
		ptr++;
		_puts_recursion(ptr);
	}
	else
	{
		_putchar('\n');
	}
}
