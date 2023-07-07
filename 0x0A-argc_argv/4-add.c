#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - print ou product of two intergers
 * @argc: number of arguments
 * @argv: argumets
 *
 * Return: Always return 1 in erro
 */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
	int i, j;
	int sum = 0;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}
		else
		{
			for (i = 1; i < argc; i++)
			{
				char *arg = argv[i];

				for (j = 0; arg[j] != '\0'; j++)
				{
					if (!isdigit(arg[j]))
					{
						printf("Error\n");
						return (1);
					}
				}

				sum += atoi(arg);
			}
		}
		printf("%d\n", sum);
		return (0);
	}
