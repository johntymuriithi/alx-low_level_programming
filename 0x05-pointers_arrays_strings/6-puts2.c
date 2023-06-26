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
	int num = 0;
	int a;

	while (*ptr != '\0')
	{
		num++;
		ptr++;
	}

	for (a = 0; a < num; a += 2)
	{
		_putchar(str[a]);
	}

	_putchar('\n');
}
