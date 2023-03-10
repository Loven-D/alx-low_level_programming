#include "main.h"
#include <stdio.h>

/**
 * _strncat - Concatenate two strings, using at most n bytes from src
 * @dest: pointer to destination string
 * @src: string which may/may not be null terminated.
 * @n: max number of byte to be coppied from src
 *
 * Return: it return dest if successful
 */
char *_strncat(char *dest, char *src, int n)
{
	int c;
	char *i = dest;

	while (*i != '\0')
	{
		i++;
	}
	for (c = 0; c < n && src[c] != '\0'; c++)
	{
		*i = src[c];
	}
	*i = '\0';
	return (dest);
}
