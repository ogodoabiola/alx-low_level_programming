#include "main.h"

/**
 * _puts - main entry
 * @str: the string
 * Return: 0 Always
 */

void _puts(char *str)
{
while (*str != '\0') 
{
	_putchar(*str);
	str++;
}
_putchar('\n');
}
