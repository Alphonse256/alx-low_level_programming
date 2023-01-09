#include "main.h"

/**
 * _memset - Function that fills the memory with a constant byte
 * @s: The pointer pointed to by the bytes
 * @b: the constant byte
 * @n: the size of the byte
 * Return: On success s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
