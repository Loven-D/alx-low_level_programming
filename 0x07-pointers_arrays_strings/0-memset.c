#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: a pointer to the memory area to be filled.
 * @b: the constant byte to be used.
 * @n: the number of byte to fill.
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
char *p = s;

while (n-- > 0)
{
*p++ = b;
}
return (s);
}
