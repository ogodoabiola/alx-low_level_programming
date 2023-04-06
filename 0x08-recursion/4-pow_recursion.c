#include "main.h"

/**
 * _pow_recursion - main entry
 * @a: param 1
 * @b: param 2
 * Return: the power
 */
int _pow_recursion(int a, int b)
{
if (a < 0)
{
return (-1);
}
if (b == 0)
return (1);
return (a * _pow_recursion(a, b - 1));
}
