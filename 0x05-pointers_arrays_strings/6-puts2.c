#include "main.h"
#include <string.h>

/**
* puts2 - main entry
* @str: for string
* Return: 0 Always
*/

void puts2(char *str)
{
int i = 0;
while (str[i] != '\0')
{
_putchar(str[i]);
i += 2;
}
_putchar('\n');
}
