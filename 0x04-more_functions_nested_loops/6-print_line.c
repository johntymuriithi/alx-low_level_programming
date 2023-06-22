#include "main.h"
/**
 * print_line - print a lines
 *@n: value for numer of times line to be printed
 *
 */
void print_line(int n)
{
	int ch;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (ch = 1; ch <= n; ch++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
