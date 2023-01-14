#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments
 * @ac: First arg
 * @av: Two dimensional array
 * Return: Pointer
 */

char *argstostr(int ac, char **av)
{
	int i, j, x = 0, y = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			y++;
	}
	y += ac;
	ptr = malloc(sizeof(char) * y + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			ptr[x] = av[i][j];
			x++;
		}
		if (ptr[x] == '\0')
		{
			ptr[x++] = '\n';
		}
	}
	return (ptr);
}
