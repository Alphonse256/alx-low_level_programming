#include "main.h"

/**
 * print_square - Function for printing the square
 * @size: the parameter taking the dimensions
 * Return: On success 1.
 */

void print_square(int size)
{
	int h;
	int w;

	for (h = 0; h < size; h++)
	{
		w = 0;
		while (w < size)
		{
			_putchar('#');
			w++;
		}
		_putchar('\n');
	}
}
