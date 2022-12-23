#include "main.h"
#include <stdio.h>

/**
 * reverse_array - function to reverse the array
 * @a: First parameter to be reversed
 * @n: Second parameter giving the number of elements
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;
	int temp;

	i = 0;
	j = n - 1;

	for ( ; i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
