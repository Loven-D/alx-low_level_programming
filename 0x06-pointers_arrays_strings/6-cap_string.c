#include "main.h"

/**
 * cap_string - Capitalize all words of a string
 * @str: input to capitalize
 *
 * Return: capitalized string.
 */
char *cap_string(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i - 1] == ' ' || str[i - 1] == '\n'
		|| str[i - 1] == '\t' || str[i - 1] == ','
		|| str[i - 1] == ';' || str[i - 1] == '!'
		|| str[i - 1] == '?' || str[i - 1] == '"'
		|| str[i - 1] == '(' || str[i - 1] == ')'
		|| str[i - 1] == '{' || str[i - 1] == '}'
		|| str[i - 1] == '.')
		&& (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
		}
		else if ((str[0] >= 97 && str[0] <= 122))
		{
			str[0] = str[0] - 32;
		}
		else
		{
			str[i] = str[i];
		}
		i++;
	}
	return (str);
}
