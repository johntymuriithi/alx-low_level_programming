#include <stdio.h>
#include <stdlib.h>
/**
 * main - print ou product of two intergers
 * @argc: number of arguments
 * @argv: argumets
 *
 * Return: Always return 1 in erro
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	long int mult;
	int i;

	if (argc > 3 || argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 0; i < argc; i++)
		{
			if (i == 1)
			{
				num1 = atoi(argv[i]);
			}
			if (i == 2)
			{
				num2 = atoi(argv[i]);
			}
		}
	}
	mult = num1 * num2;
	printf("%ld\n", mult);

	return (0);
}
