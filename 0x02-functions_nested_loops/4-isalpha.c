#include "main.h"

/**
 * _isalpha - for checking c
 * @c: parameter for arguments
 * Return: 1 if c is a letter, lowercase or uppercase, else 0
 */

int _isalpha(int c)
{
	if (c != 0 && c >= 'a' && c <= 'z')
		return (1);
	else if (c != 0 && c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
