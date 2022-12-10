#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int N = 'A';
	int n = 'a';
	int Small;
	int Capital;

	while (N <= 'Z')
	{
		Small = tolower(N);

		putchar(Small);
		N++;
	}

	while (n <= 'z')
	{
		Capital = toupper(n);

		putchar(Capital);
		n++;
	}
	putchar('\n');
	return (0);
}
