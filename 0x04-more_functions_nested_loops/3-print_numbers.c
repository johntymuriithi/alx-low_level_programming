#include <stdio.h>
#include "main.h"
/**
 * print_numbers - print out numbers from 0 to 9
 *
 * Return : Always return 0
 */
void print_numbers(void)
{
	char d;

	for (d = 48; d <= 57; d++)
	{
		_putchar(d);
	}
	_putchar('\n');
}
