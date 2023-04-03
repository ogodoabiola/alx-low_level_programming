#include "main.h"

/**
 * _memcpy - a function that copies from a memory to another
 * @dest: destination memory
 * @src: source memory
 * @n: integer param
 * Return: 0 always
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
char *dest_ptr = dest;
char *src_ptr = src;
while (n-- > 0)
{
*dest_ptr++ = *src_ptr++;
}
return (dest);
}
