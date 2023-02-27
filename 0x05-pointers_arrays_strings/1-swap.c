#include "main.h"
#include <stdio.h>

/**
 *swap_int - swap the value of two integers
 * @a - first integer
 * @b - second integer
 * @i - first integer to be swapped
 * @c - second integer to be swapped
 */
void swap_int(int *a, int *b)
{
	int i, c;

	i = *a;
	c = *b;

	*a = c;
	*b = i;
}
