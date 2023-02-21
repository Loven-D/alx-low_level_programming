#include <stdio.h>
#include <stdlib.h>


/**
 * main - Program that prints alphabet in lowercase
 * followed by a new line
 * Return: 0 (Success)
 */
int main (void)
{
	char A;
	for (A = 'a'; A <= z; A++)
	{
		_putchar(A);
		_putchar("\n");
	}

	return (0);
}
