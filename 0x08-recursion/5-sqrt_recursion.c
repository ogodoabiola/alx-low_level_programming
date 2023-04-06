#include "main.h"

/**
 * _sqrt_recursion - main ent
 * @n: reg param
 * Return: 0
 */

int _sqrt_recursion(int n)
{
	int i, result;
if (n < 0)
{
return (-1);
}
if (n == 0 || n == 1)
{
return (n);
}
i = 1;
result = 1;
while (result <= n)
{
i++;
result = i *i;
}
return ((result == n) ? i : _sqrt_recursion(n - 1));
}
