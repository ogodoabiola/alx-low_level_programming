#include "main.h"

/**
 * _sqrt - recursor
 * @k: 1st param
 * @i: iterant param
 *
 * Return: sqrt
 */
int _sqrt(int k, int i)
{
	if (i * i > k)
		return (-1);
	if (i * i == k)
		return (i);
	return (_sqrt(k, i + 1));
}

/**
 * _sqrt_recursion - sqrt of a number.
 * @k: number to be evaluated
 *
 * Return: sqrt
 */
int _sqrt_recursion(int k)
{
	if (k < 0)
		return (-1);
	return (_sqrt(k, 0));
}
