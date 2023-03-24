#include "main.h"

/**
 * _isupper - entry for prototype
 * @c: testing parameter
 * Return: 1 for uppercase and 0 for otherwise
 */

int _isupper(int c)
{
	c = c + '0';
		if (c == 65 && c <= 90)
		{
			return (1);
		}
		else
			return(0)
}
