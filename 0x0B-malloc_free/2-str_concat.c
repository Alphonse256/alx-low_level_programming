#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Function concatenating two strings
 * @s1: First string
 * @s2: Second string
 * Return: Pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int len1, len2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;
	ptr = (char *)malloc(sizeof(char) * ((len1 + len2) + 1));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		ptr[i] = s2[j];
		j++;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
