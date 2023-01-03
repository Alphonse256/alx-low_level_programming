#include "main.h"

/**
 * _memcpy - Prints memory destination in hexa
 * @dest: The address memory to print
 * @src: The address memory to copy
 * @n: The size of memory to print
 * Return: On success dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
