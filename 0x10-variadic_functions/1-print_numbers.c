#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 *print_numbers - print out numbers
 *@separator: separator
 *@n: first argument
 *
 * Return: no return
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		if (i != 0)
		{
			printf("%s", separator);
		}
		printf("%d", va_arg(list, int));
	}
	printf("\n");
	va_end(list);
}
