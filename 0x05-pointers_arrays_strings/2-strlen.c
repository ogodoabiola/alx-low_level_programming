#include "main.h"

/**
 * _strlen - get string length
 * @s: first param
 * a: test param
 * Return: 0
 */

int _strlen(char *s)
{
int a;
a = 0;
for (; s++;)
	a++;
return (a);
}
