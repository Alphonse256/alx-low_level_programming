#include "main.h"

/**
 * print_diagonal - Prints diagonals
 * @n: parameter
 * Return: On success 1.
 */

void print_diagonal(int n)
{
	int a;
	int x;

	for (a = 0; a < n; a++)
	{
		for (x = 0; x < a; x++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
}
