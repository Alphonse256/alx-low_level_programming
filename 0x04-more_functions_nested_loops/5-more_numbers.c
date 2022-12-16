#include "main.h"

/**
 * more_numbers - Print numbers 10 times
 * Return: On success 1.
 */

void more_numbers(void)
{
	char num;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
			{
				_putchar('1');
			}
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
