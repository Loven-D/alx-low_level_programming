#include "main.h"
/**
 * print_triangle - Prints a triangle made of '#' characters to stdout.
 * @size: The size of the triangle to print.
 */

void print_triangle(int size)
{
	int row, col;
	if (size <= 0) 
	{
		_putchar('\n');
		return(0);
	}

	for (row = 1; row <= size; row++) 
	{
		for (col = 1; col <= row; col++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
