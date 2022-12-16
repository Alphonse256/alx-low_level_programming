#include "main.h"

/**
 * _isdigit - Checks for the digit
 * @c: Stores the digit
 * Return: On success 1.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
