#include "main.h"

/**
 * factorial - Finding the factorial of a number
 * @n: The parameter holding the factorial number
 * Return: On success factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
