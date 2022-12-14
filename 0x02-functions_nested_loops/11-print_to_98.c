#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Printing numbers to 98
 * @q: The function parameter
 * Return: On success 1.
 */

void print_to_98(int q)
{
	if (q >= 98)
	{
		while (q > 98)
		{
			printf("%d, ", q);
			q--;
		}
		printf("%d\n", q);
	}
	else
	{
		while (q < 98)
		{
			printf("%d, ", q);
			q++;
		}
		printf("%d\n", q);
	}
}
