#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: pointer to the array.
 * @n: number of elements in the array.
 */
void reverse_array(int *a, int n)
{
	int c, i;

	for (i = 0; i < n / 2; i++)
	{
		c = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = c;
	}
}
