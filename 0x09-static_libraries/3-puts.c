#include "main.h"
/**
 * _puts - prints out a string
 * @str: pointer to the variable string
 *
 * Return: Always return 0
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
