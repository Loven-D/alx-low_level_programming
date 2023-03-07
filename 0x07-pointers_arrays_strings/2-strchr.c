#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: pointer to the string searched
 * @c: character to be located
 * Return: NULL if character not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
			s++;
		}
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
