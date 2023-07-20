#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - print out strings
 * @separator: to seperate strings
 * @n: number of strings
 *
 * Return: no return
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list lists;
	const char *list;
	unsigned int i;

	va_start(lists, n);

	for (i = 0; i < n; i++)
	{
		list = va_arg(lists, const char*);

		if (list == NULL)
		{
			printf("(nil)");
		}
		printf("%s", list);

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(lists);
}
