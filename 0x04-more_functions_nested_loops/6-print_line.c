#include "main.h"

/**
* print_line - main entry
* @n: params for test
* Return: 0 Always
*/

void print_line(int n)
{
for (n >= 1; n < 14; n++)
{
if (n <= 0)
{
	_putchar('\n');
}
_putchar('_');
}
putchar('\n');
}
