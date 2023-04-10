#include "main.h"
#include <string.h>

/**
 * main - the proper entry
 * @argc: 1st argument
 * @argv: 2nd argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("Argument %d: %s\n", i, argv[i]);
}
return (0);
}
