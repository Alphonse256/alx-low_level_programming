#include "main.h"

/**
 * print_line - Function that prints the lines
 * @n: Parameter to print lines
 * Return: On success 1.
 */

void print_line(int n)
{
	int m = 0;

	while (m <= n)
	{
		_putchar('_');
		m++;
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
