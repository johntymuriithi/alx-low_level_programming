#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - call a function
 * @name: name of a person
 * @f: function to call
 *
 * Return: no return
 */
void print_name(char *name, void (*f)(char *))
{
	(f)(name);
}
