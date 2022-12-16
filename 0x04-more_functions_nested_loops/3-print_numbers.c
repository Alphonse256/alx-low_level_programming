#include "main.h"

/**
 * print_numbers - Function printing the single digits
 * Return: On success 1.
 */

void print_numbers(void)
{
	int num;

	num = 48;

	while (num < 58)
	{
		_putchar(num);
		num++;
	}
	_putchar('\n');
}
