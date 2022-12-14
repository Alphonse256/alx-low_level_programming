#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabet 10 times
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int m = 1;
	char n = 'a';

	while (m <= 10)
	{
		while (n <= 'z')
		{
			_putchar(n);
			n++;
		}
		n = 'a';
		_putchar('\n');
		m++;
	}
}
