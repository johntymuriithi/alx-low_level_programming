#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - functions to add the arguments passed
 * @n: first argument
 *
 * Return: return the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, unsigned int);
	}
	va_end(list);

	return (sum);
}
