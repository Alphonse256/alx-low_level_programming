#include "main.h"

/**
 * swap_int - Function swapping the values
 *@a: First integer
 *@b: Second integer
 */

void swap_int(int *a, int *b)
{
	*a = *(&b);
	*b = *(&a);
}
