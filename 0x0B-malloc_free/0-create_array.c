#include "main.h"
#include <stdlib.h>
/**
 * create_array - main Entry
 * @size: argument
 * @c: input
 * Return: 0 always
 */
char *create_array(unsigned int size, char c)
{
		char *arr;
		unsigned int i;

		if (size == 0)
		{
			return ('\0');
		}

		arr = malloc(sizeof(char) * size);

		if (arr == '\0')
		{

			return ('\0');
		}

		for (i = 0; i < size; i++)
		{
			arr[i] = c;
		}

		return (arr);
}
