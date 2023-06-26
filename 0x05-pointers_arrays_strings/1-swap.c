#include "main.h"
/**
 * swap_int - swap two variables and print them
 * @a: a pointer to the first integer we want to swap
 * @b: a pointer to the second integer we want to swap
 *
 * Return : no return
 */
void swap_int(int *a, int *b)
{
	int num1 = *a;
	int num2 = *b;

	*a = num2;
	*b = num1;
}
