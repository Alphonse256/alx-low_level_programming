#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: Number of command line arguments
 * @argv: Array of pointers to command line arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	(void)(argv);
	printf("%d\n", argc - 1);
	return (0);
}
