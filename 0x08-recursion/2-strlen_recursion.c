#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @s: Parameter storing a string
 * Return: On success 0
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
