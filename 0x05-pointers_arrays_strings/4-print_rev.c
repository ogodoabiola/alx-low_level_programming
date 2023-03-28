#include "main.h"
#include <string.h>

/**
 * print_rev - main entry
 * @s: 2nd param
 * Return: 0 Always
 */

void print_rev(char *s)
{
int length = strlen(s);
for (int i = length - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
