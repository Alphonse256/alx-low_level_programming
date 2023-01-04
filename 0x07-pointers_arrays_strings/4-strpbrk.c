#include "main.h"

/**
 * _strpbrk - Checks for string of any byte
 * @s: String to be checked
 * @accept: String to check for
 * Return: On success s
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	for ( ; *s; s++)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
	}
	return ('\0');
}
