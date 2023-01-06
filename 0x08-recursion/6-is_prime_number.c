#include "main.h"

/**
 * is_prime_number - Checks for the prime numbers
 * @n: The input integer
 * Return: On success 1
 */

int is_prime_number(int n)
{
	if (n % 2 == 1 || n == 2)
		return (1);
	else
		return (0);
}
