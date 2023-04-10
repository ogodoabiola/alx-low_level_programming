#include "main.h"
#include <stdio.h>

/**
 * main - the main entry
 * @argc: first argument
 * @argv: 2nd argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
