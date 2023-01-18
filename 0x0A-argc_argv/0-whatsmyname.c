#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: array size
 * @argv: count of array elements
 * Return: always 0 Success
 */

int main(int argc, char **argv)
{
	puts(argv[argc - 1]);
	return (0);
}
