#include "main.h"

/**
 * _strpbrk - main entry
 * @s: first int
 * @accept: 2nd int
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)
{
char *p;
while (*s != '\0')
{
for (p = accept; *p != '\0'; p++)
{
if (*s == *p)
{
return (s);
}
}
s++;
}
return ('\0');
}

