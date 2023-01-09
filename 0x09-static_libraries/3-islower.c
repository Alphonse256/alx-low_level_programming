#include "main.h"

/**
 * _islower - Prints the lowercase character
 * @c: Prints the character
 * Return: On success 1.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
