#include "main.h"

/**
 * more_numbers - Print numbers 10 times
 * Return: On success 1.
 */

void more_numbers(void)
{
	int k = 0;
	int m;

	while (k < 10)
	{
		m = 0;
		while (m <= 16)
		{
			_putchar(m + '0');
			m++;
		}
		_putchar(k + '0');
		_putchar('\n');
		k++;
	}
}
