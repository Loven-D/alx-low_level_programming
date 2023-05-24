#include "main.h"

/**
 * _strcmp - ompares two strings
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: an integer that is les than, equal to, or greater than 0.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] && s2[i]; i++)
	{
		if (s1[i] != s2[i])
		{
			break;
		}
	}

	return (s1[i] - s2[i]);
}
