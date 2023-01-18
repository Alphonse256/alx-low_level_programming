#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: Number of command line arguments
 * @argv: Array of pointers pointing to command line arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int m;

	for (m = 0; m < argc; m++)
	{
		printf("%s\n", argv[m]);
	}
	return (0);
}
