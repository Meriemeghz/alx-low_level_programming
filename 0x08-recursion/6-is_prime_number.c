#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - function that returns 1 if the i
 * @n: number
 *
 * Return: 1 if n is a prime, 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculate if a number is prime recursively
 * @n: number
 * @i: iterator
 *
 * Return: a or 0
 */

int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}