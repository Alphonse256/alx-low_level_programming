#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry
 *
 * Return: 0 Always (Success)
 */

int main(void)
{
	int a = 'A';

	for (a = 'A'; a <= 'Z'; a++)
	{


		if ((a != 'Q' && a != 'E') && a <= 'Z')
		{
			int lowerCase = tolower(a);
			putchar(lowerCase);
		}
	}
	putchar('\n');
	return (0);
}

