#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: pointer to destination memory
 * @src: pointer to source memory
 * @n: number of bytes to copy
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;
	char *q = src;

	while (n--)
	{
		*p++ = *q++;
	}
	return (dest);
}
