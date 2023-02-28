#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - function that reverse string
 * @s: the string to be reversed
 */
void rev_string(char *s)
{
	int i = strlen(s);
	int a = 0;
	int z = i - 1;
	char c;

	while (a < z)
	{
		c = s[a];/* c is the temporary variable */
		s[a] = s[z];
		s[z] = c;
		a++;
		z--;
	}
}
