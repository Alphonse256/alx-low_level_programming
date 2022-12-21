#include "main.h"

/**
 * _strcat - Function concatenating strings
 * @dest: First string parameter
 * @src: Second string parameter
 * Return: On success 0
 */

char *_strcat(char *dest, char *src)
{
int a = -1, i;

for (i = 0; dest[i] != '\0'; i++)
;

do {
	a++;
	dest[i] = src[a];
	i++;
}
	while (src[a] != '\0');
	return (dest);
}
