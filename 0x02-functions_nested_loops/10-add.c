#include "main.h"

/**
 * add - Adding 2 integers
 * @r: First Parameter giving the output
 * @t: Second Parameter giving the output
 * Return: On success 0
 */

int add(int r, int t)
{
	int sum = r + t;

	_putchar('0' + sum);
	return (sum);
}
