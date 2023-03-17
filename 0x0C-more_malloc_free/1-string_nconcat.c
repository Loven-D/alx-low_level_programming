#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings up to n bytes
 * @s1: the first string
 * @s2: the second string
 * @n: the maximum number of bytes to concatenate from s2
 *
 * Return: a pointer to the concatenated string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2;
	char *newstr, *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
	{
		n = len2;
	}

	newstr = malloc(len1 + n + 1);

	if (newstr == NULL)
	{
		return (NULL);
	}

	ptr = newstr;

	while (n-- > 0 && *s2 != '\0')
	{
		*ptr++ = *s2++;
	}

	*ptr = '\0';

	return (newstr);
}
