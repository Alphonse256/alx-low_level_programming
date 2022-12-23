#include "main.h"

/**
 * _strncpy - function for copying characters
 * @dest: First parameter to be copied to
 * @src: Second parameter copied
 * @n: Number of characters copied from src
 * Return: On success dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
	dest[i] = '\0';
	i++;
	}
	return (dest);
}
