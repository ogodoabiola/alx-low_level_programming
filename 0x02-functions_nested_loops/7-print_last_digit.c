#include "main.h"
/**
 * print_last_digit - this is to print the last digit of a number
 * @n: general argument
 * Return: 0 Always
 */

int print_last_digit(int n)
{
int m;
m = n % 10;
if (m <= 0)
{
m = m * -1;
}
return (m);
}

