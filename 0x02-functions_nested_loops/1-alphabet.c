#include "main.h"

/**
 * print_alphabet - writes the character c to stdout
 *
 * Return: 0
 */

void print_alphabet(void)

{
	char x = 'a';

	while (x <= 'z')
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
}
