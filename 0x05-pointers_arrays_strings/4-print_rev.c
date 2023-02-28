#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints strings in reverse
 * @s: the string to be reversed
 */
void print_rev(char *s)
{
	int i = strlen(s);
	
	for (i = i - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
