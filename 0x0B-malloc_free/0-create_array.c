#include "main.h"
#include <stdlib.h>

/**
 * create_array - Function creating and array of chars
 * @size: The size of memory bytes to be allocated
 * @c: The character to be stored
 * Return: Pointer or NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = (char *)malloc(size * sizeof(c));

	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			*(ptr + i) = c;
		}
	return (ptr);
	}
}
