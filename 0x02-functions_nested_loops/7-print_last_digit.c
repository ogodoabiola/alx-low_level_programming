#include "main.h"
/**
 * print_last_digit - this is to print the last digit of a number
 * @n: general argument
 * Return: 0 Always
 */

int print_last_digit(int n)
{
	if (n <= 0)
		n = (-1 * n) % 10;
			return (n);
	else
	n = n % 10;
	return (n);
}
