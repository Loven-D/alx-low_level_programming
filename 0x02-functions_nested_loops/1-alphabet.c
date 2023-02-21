#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_alphabet - print the alphabet in lower case
 * followed by a new line
 * Return: 0 (Success)
*/
void print_alphabet(void)
{
	char c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}

	_putchar('\n');
}
