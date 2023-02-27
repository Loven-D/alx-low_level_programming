#include "main.h"
#include <stdio.h>

/**
 *
 */
void swap_int(int *a, int *b)
{
	int i, c;

	i = *a;
	c = *b;

	*a = c;
	*b = i;
}
