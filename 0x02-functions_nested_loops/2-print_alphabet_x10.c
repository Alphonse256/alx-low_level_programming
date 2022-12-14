#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabet 10 times
 * @m: The character prints alphabet 10 times
 * Return: On success 1.
 */

void print_alphabet_x10(void)
{
	int n = 'a';

	for (m = 0; m < 10; m++)
	{
		if (n >= 'a' && n <= 'z')
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}
