#include "main.h"

/**
 * _strcmp - Function comparing two strings
 * @s1: First string parameter
 * @s2: Second string parameter
 * Return: On success 0
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			break;
		}
	}
	if (s1[i] < s2[i])
	{
		return (-15);
	}
	else if (s1[i] > s2[i])
	{
		return (15);
	}
	else if (s1[i] == s2[i])
	{
		return (0);
	}
	return (0);
}
