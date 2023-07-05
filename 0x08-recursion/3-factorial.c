#include "main.h"
/**
 * factorial - find the factorial of a given number
 * @n: interger to find its factorial
 *
 * Return: factorial number
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
