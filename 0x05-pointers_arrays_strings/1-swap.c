#include "main.h"
#include <stdio.h>

/**
 *
 */
void swap_int(int *a, int *b)
{
	*a = &b;
	*b = &a;
}
