#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: Hold the initial segments
 * @accept: The bytes consisted in the first parameter
 * Return: On success 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
			{
				length++;
				return (length);
			}
		}
	}
	return (0);
}
