#include "main.h"

/**
*_strchr - main function
*@s: first param
*@c: 2nd param
*Return: 0
*/

char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
return ('\0');
}

