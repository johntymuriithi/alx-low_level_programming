#include "main.h"

/**
 * print_alphabet_x10: fucntion to print out alphabets 10 times in lower case
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
