#include "main.h"

/**
 * swap_int - main entry
 * @a: first param
 * @b: 2nd param
 * Return: 0 Always
 */
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
