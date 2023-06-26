#include "main.h"
/**
 * print_rev - print out string in reverse
 * @s: pointer to a string variable
 *
 * Return: no return
 */
void print_rev(char *s)
{
	int num = 0;
	int a;
	char *ch = s;
	while (*ch != '\0')
	{
		num++;
		ch++;
	}
	
	for (a = num - 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
