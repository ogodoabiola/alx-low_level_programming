#include "main.h"

/**
 * print_sign - entry for the print
 * @n: parameter for the argument
 * Description: To return signs
 * Return: 1 or 0 as the case may be
 */

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n == 0)
	{
	_putchar(48);
	return (0);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
}
