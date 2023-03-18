#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0 (Success)
 **/
int main(void)
{
char letter;
char wifey;
for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}
for (wifey = 'A'; wifey <= 'Z'; wifey++)
{
putchar(wifey);
}
putchar('\n');
return (0);
}
