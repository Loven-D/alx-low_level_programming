#include "main.h"
#include <stdio.h>

/**
 * _strlen - calculates the length of string.
 * @s: variable to know the length
 * Return: length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
