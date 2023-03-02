#include "main.h"
/**
 * leet -  encodes a string into 1337.
 * @s: string to code
 * Return: the enconde string.
 */
char *leet(char *str)
{
	int i;
	int j;
	int k;

	char l[] = "aAeEoOtTlL";
	char e[] = "4433007711";

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		k = 0;
		while (l[j] != '\0')
		{
			if (str[i] == l[j])
			{
				k = j;
				str[i] = e[k];
			}
			j++;
		}
		i++;
	}
	return (s);
}
