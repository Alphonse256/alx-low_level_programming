#include "main.h"

/**
 * _isupper - Prints the uppercase
 * @c: Parameter passed in the function
 *Return: On success 1.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
