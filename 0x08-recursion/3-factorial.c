#include "main.h"

/**
* factorial - main entry
* @n: param
* Return: 0 always
*/

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}

