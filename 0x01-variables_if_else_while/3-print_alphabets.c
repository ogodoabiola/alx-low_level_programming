#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0 (Success)
 **/
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}
char wifey;
for (wifey = 'A'; wifey <= 'Z'; wifey++)
{
putchar(wifey);
}
putchar('\n');
return (0);
}
