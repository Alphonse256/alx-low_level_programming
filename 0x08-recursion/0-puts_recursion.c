#include "main.h"

/**
 * _puts_recursion - Prints the parameter s
 * @s: The pointer to be printed
 * Return: On success nothing
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
