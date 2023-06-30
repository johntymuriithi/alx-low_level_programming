#include "main.h"
/**
 * reverse_array - reverse an array
 * @a: pointer to the array variable
 * @n: numbers of elemts in the array
 *
 * Return: no return
 */
void reverse_array(int *a, int n)
{
	int swap, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		swap = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = swap;
	}
}
