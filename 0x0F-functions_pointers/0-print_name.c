#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - name printer
 * @name: entity name
 * @f: is pointer
**/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	else
	{
		f(name);
	}
}
