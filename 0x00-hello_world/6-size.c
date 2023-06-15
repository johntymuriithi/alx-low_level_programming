#include <stdio.h>
/**
 * main - prints out sizes of data type
 *
 * Return: 0
 */
int main(void)
{
    printf("Size of char: %zu byte(s)\n", sizeof(char));
    printf("Size of short: %zu byte(s)\n", sizeof(short));
    printf("Size of int: %zu byte(s)\n", sizeof(int));
    printf("Size of long: %zu byte(s)\n", sizeof(long));
    printf("Size of long long: %zu byte(s)\n", sizeof(long long));

    return (0);
}
