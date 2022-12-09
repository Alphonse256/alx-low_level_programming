#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int m = 'A';

	while (m <= 'Z')
	{

		int lowerCase = tolower(m);

		putchar(lowerCase);
		putchar('\n');
		m++;
	}
	return (0);
}
