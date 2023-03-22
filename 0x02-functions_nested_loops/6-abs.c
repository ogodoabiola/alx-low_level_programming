#include "main.h"

/**
 * _abs - entry point
 * @int: a general parameter
 * Return: 0 Always
 */

int _abs(int)
{
int a;
if (a < 0)
{
a = (-1) * a;
_putchar(a);
}
else
{
_putchar(a);
}
return (0);
}
