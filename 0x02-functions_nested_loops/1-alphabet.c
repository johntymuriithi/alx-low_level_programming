#include "main.h"

/**
 *  print_alphabet - prints alphabet in lowercases
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
