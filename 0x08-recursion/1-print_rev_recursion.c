#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: Parameter for the string to be reversed
 * Return: Nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
