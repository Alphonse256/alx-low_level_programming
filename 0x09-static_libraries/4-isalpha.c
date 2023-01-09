#include "main.h"

/**
 * _isalpha - Checks for an alphabet
 *@c: Prints the alphabet
 * Return: On seccess 1.
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
