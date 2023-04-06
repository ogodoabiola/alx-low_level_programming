#include "main.h"

/**
 * _prime - main entry
 * @n: num
 * @i: iterant
 *
 * Return: 1 if n is prime and 0 if otherwise
 */
int _prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (_prime(n, i - 1));
}

/**
 * is_prime_number - prime entry.
 * @n: number
 * Return: 1 if n is prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime(n, n - 1));
}
