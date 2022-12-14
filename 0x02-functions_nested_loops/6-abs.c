#include "main.h"

/**
 * _abs - Prints the absolute value
 * @m: Display the absolute value
 * Return: On success 1.
 */

int _abs(int m)
{
	int neg = m * -1;

	if (m >= 0)
	{
		return (m);
	}
	else
	{
		return (neg);
	}
}
