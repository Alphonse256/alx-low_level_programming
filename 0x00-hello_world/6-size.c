#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char x;
int y;
long int m;
long long int b;
float z;
	printf("Size of a char: %zu byte(s)\n", sizeof(x));
	printf("Size of an int: %zu byte(s)\n", sizeof(y));
	printf("Size of a long int: %zu bytes(s)\n", sizeof(m));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(b));
	printf("Size of a float: %zu byte(s)\n", sizeof(z));
	return (0);
}
