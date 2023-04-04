#include "main.h"

/**
 * _strstr - main entry to return value
 * @haystack: first param
 * @needle: 2nd param
 */
char *_strstr(char *haystack, char *needle)
{
char *h;
char *n;
while (*haystack != '\0')
{
h = haystack;
n = needle;
while (*n != '\0' && *h == *n)
{
h++;
n++;
}
if (*n == '\0')
{
return (haystack);
}
haystack++;
}
return ('\0');
}
