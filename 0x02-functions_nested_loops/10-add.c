#include "main.h"

/**
 * add - Adding 2 integers
 * @r,t: Parameters giving the output
 * Return: On success 0
 */

int add(int r, int t)
{
	int sum = r + t;
	_putchar(sum + '0');
	return (sum);
}
