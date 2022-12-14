#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - writes the character c to stdout
 * @x: The character to print
 *
 * Return: On success 1.
 */

void print_alphabet(void)
{
	int x = 'a';

	while (x <= 'z')
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
}
