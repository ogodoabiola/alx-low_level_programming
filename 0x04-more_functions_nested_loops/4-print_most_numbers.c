#include "main.h"

/**
 * print_most_numbers - main entry
 * Return: 0 Always
 */

void print_most_numbers(void)
{
int c;
for (c = 0; c <= 9; c++)
{
if (c == 2 || c == 4)
{
continue;
}
else
{
_putchar(c + '0');
}
}
_putchar('\n');
}
