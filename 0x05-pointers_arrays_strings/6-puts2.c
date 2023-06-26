#include "main.h"
/**
 * puts2 - prints numbers multiples of 2
 * @str: pointer to the variable string
 *
 * Return: no return
 */
void puts2(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr % 2 == 0)
		{
		_putchar(*ptr);
		}
		ptr++;
	}
	_putchar('\n');
}
