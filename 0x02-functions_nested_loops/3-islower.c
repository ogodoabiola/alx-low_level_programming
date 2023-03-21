#include "main.h"

/**
 * _islower - this is to check the lower cases
 * @c: parameter for the argument
 * Description: Adding this for the return value
 * Return 1 if char is lowercase, otherwise 0.
 */

int _islower(int c)
{
if (c <= 'z')
{
return (1); /* this is when c is lowercase */
}
else
{
return (0); /* this is when c is uppercase */
}
}
