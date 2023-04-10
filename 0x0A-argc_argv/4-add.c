#include <stdio.h>
#include <stdlib.h>
/**
 * main - main entry
 * @argc: first param
 * @argv: 2nd param
 * Return: 0
 */

int main(int argc, char *argv[])
{
int i;
int sum = 0;
for (i = 1; i < argc; i++)
{
char *arg = argv[i];
int j;
for (j = 0; arg[j] != '\0'; j++)
{
if (arg[j] < '0' || arg[j] > '9')
{
printf("Error\n");
return (1);
}
}
sum += atoi(arg);
}
printf("%d\n", sum);
return (0);
}
