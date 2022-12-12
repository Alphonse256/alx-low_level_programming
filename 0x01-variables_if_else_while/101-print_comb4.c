#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int p;
	int q;
	int r;

	for (p = 0; p < 8; p++)
	{
		for (q = p + 1; q < 9; q++)
		{
			for (r = q + 1; r < 10; r++)
			{
				putchar(p + '0');
				putchar(q + '0');
				putchar(r + '0');
				if (p == 7 && q == 8 && r == 9)
				{
					continue;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
