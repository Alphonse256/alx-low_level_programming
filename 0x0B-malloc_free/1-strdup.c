#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Function duplicating a string
 * @str: The string to be duplicated
 * Return: Pointer
 */

char *_strdup(char *str)
{
	int length;
	char *ptr;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	ptr = (char *)malloc(sizeof(char) * (length + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}
