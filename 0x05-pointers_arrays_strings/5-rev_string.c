#include "main.h"
#include <string.h>
/**
 * rev_string - main entry
 * @s: s array params
 * Return: 0
 */

void rev_string(char *s)
{
int length = strlen(s);
int i, j;
for (i = 0, j = length - 1; i < j; i++, j--)
{
char temp = s[i];
s[i] = s[j];
s[j] = temp;
}
}

