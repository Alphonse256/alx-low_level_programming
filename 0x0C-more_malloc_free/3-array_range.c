#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: min number of elements
 * @max: max number of elements
 * Return: Pointer to an arr
 */

int *array_range(int min, int max)
{
	int i, *arr;

	if (min > max)
		return (NULL);
	arr = malloc((max - min + 1) * sizeof(int));
	if (arr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}
