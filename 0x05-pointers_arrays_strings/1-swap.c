#include "main.h"
#include <stdio.h>

/**
 *swap_int - swap the value of two integers
 * @i - first integer
 * @c - second integer
 */
void swap_int(int *a, int *b)
{
	int i, c;

	i = *a;
	c = *b;

	*a = c;
	*b = i;
}
