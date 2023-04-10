#include "main.h"
#include <stdio.h>

/**
 * main - the main entry
 * @argc: 1st arg
 * @argv: 2nd arg
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num_args;
(void)argv;
num_args = argc - 1;
printf("%d\n", num_args);
return (0);
}
