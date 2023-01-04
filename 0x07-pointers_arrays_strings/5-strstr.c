#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: Location of the substring
 * @needle: The substring to be located
 * Return: On success haystack
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
	{
		return (haystack);
	}

	while (*haystack)
	{
		i = 0;
		if (needle[i] == haystack[i])
		{
			while (haystack[i] == needle[i])
			{
				if (needle[i + 1] == '\0')
				{
					return (haystack);
				}
				i++;
			}
		}
		haystack++;
	}
	return (0);
}
