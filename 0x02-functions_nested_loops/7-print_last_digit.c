#include "main.h"

/**
 * print_last_digit - Displays the last digit
 * @p: prints the last digit
 * Return: On success 1.
 */

int print_last_digit(int p)
{
	int last;

	last = p % 10;
	if (p < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
