#include "main.h"

/**
 * _memset - main entry
 * @s: the pointer
 * @b: character to print
 * @n: the unsigned integer
 * Return: 0 ALways
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;								        }
}
return (s);
}
