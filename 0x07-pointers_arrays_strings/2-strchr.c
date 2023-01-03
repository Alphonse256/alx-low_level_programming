#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: Points to the first occurence of a character
 * @c: The character to be checked for
 * Return: On success s
 */

char *_strchr(char *s, char c)
{
	for ( ; *s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	return (0);
}
