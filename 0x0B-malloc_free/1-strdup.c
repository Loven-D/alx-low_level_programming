#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _strdup -  returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the string to duplicate
 *
 * Return: a pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *c;
	int len, i;

	if (str == 0)
	{
		return (NULL);
	}
	else
	{
		len = 0;

		while (str[len] != '\0')
		{
			len++;
		}

		c = malloc(sizeof(char) * (len + 1));

		if (c == NULL)
		{
			return (NULL);
		}

		for (i = 0; i <= len; i++)
		{
			c[i] = str[i];
		}
		return (c);
	}
}
