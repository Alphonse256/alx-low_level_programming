#include "main.h"

/**
 * print_line - Function that prints the lines
 * @n: Parameter to print lines
 * Return: On success 1.
 */

void print_line(int n)
{
	int m;

		for (m = 0; m < n; m++)
		{
			_putchar('_');
		}
		_putchar('\n');
}
