#include 'main.h'

/**
 * print_alphabet_x10 - to alphabets 10 times in lower cases
 */

void print_alphabet_x10(void)
{
char c;
int i = 10;
while (i--)
{
for (c = 'a'; c <= 'z'; ++c)
_putchar(c);
_putchar('\n');
}
return (0);
}
