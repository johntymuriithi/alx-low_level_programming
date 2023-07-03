#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - print sumof diagnals
 * @a: pointer to an array
 * @size: size of the array
 *
 * Return: no return
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", sum1, sum2);

}
