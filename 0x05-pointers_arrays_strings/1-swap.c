#include "main.h"
#include <stdio.h>

/**
 *swap_int - swap the value of two integers
 * @i - first integer
 * @c - second integer
 * @a - first integer to be swapped
 * @b - second integer to be swapped
 */
void swap_int(int *a, int *b)
{
	int i, c;

	i = *a;
	c = *b;

	*a = c;
	*b = i;
}
