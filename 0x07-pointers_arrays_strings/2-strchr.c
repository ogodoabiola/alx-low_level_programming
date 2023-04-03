#include "main.h"
/**
 * _strchr - main entry
 * @s: param 1
 * @c: param 2
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int i;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}
