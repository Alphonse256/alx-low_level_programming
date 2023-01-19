#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * isnumeric - checks if a string is a number or not
 * @str: string to be checked
 * Return: true if number, otherwise false
 */

int isnumeric(char *str)
{
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

/**
 * main - adds positive numbers
 * @argc: array size
 * @argv: array of elements
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	int count = 1, sum = 0;

	while (count < argc)
	{
		if (isnumeric(argv[count]) == 0)
		{
			puts("Error");
			return (1);
		}
		sum = sum + atoi(argv[count]);
		count++;
	}
	printf("%d\n", sum);
	return (0);
}
