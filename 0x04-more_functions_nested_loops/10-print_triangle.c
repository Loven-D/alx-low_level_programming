#include "main.h"

/**
 * Prototype: void print_triangle(int size);
 * You can only use _putchar function to print
 * Where size is the size of the triangle
 * If size is 0 or less, the function should print only a new line
 * Use the character # to print the triangle
 */
void print_triangle(int size)
{
	int row, col;
	if (size <= 0) 
	{
		_putchar('\n');
		return;
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
