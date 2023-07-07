#include <stdio.h>
/**
 * main - print out the arguments passed
 * @argc: number of arguments
 * @argv: argument passed
 *
 * Return: Alway return 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
