#include "main.h"
#include "6-abs.c"

/**
 * print_last_digit - Displays the last digit
 * @p: prints the last digit
 * Return: On success 1.
 */

int print_last_digit(int p)
{
	int last;

	last = _abs(p) % 10;
	_putchar(last + '0');
	return (last);
}
