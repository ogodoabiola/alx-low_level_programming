#include "main.h"

/**
 * main - the proper entry
 * @argc: the main argument
 * @argv: 2nd argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
char *str = argv[0];
for (int i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
return (0);
}
