#include "main.h"
/**
 * _pow_recursion  - given number x returns to power y
 * @x: base number
 * @y: exponetial number
 *
 * Return: return power of x
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
