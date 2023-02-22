#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 * @c: print from this number
 */
void print_to_98(int c)
{
	int i, j;

	if (c <= 98)
	{
		i = c;
		while (i <= 98)
		{
			if (i != 98)
				printf("%d, ", i);
			else if (i == 98)
				printf("%d\n", i);
			i++;
		}
	}
	else
	{
		j = c;
		while (j >= 98)
		{
			if (j != 98)
				printf("%d, ", j);
			else if (j == 98)
				printf("%d\n", j);
			j--;
		}
	}
}
