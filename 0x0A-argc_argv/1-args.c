#include <stdio.h>
/**
 * main - prints out the number of argumets passed
 * @argc: number of arguments
 * @argv: arguments passed
 *
 * Return: Always return 0
 */
int main(int argc, char __attribute__((unused)) *argv[])
{

	printf("%d\n", argc - 1);

	return (0);
}
