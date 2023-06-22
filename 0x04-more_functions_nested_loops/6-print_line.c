#include "main.h"
/**
 * print_line - print a lines
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
