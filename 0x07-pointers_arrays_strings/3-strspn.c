#include "main.h"
/**
 * _strspn - print length
 * @s: pointer variable
 * @accept: pointer variable
 *
 * Return: return length
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int found = 0;
	char *p;

	while (*s != '\0') {
		found = 0;
		for (p = accept; *p != '\0'; p++) {
			if (*s == *p) {
				found = 1;
				break;
			}
		}
		if (!found) {
			break;
		}
		length++;
		s++;
	}

	return length;
}
