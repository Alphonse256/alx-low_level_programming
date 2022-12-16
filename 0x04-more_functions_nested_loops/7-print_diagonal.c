#include "main.h"

/**
 * print_diagonal - Prints diagonals
 * @n: parameter
 * Return: On success 1.
 */

void print_diagonal(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
}
