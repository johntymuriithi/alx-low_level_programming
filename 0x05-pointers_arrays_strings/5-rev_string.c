#include "main.h"
#include <stdio.h>
/**
 * rev_string - print out string in reverse
 * @s: pointer to a string variable
 *
 * Return: no return
 */
void rev_string(char *s)
{
	int i = 0, len = 0;
	char tmp;

	while (s[i++])
		len++;

	for (i = len - 1; i >= len / 2; i--)
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
	}
}
