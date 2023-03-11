#include <stdio.h>
#include <stdio.h>

/**
 * main - entry point
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: either 1 or 0 always.
 */
int main(int argc, char *argv[])
{
	int a, b, result;

	if (argc != 3)
	{
		printf ("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	result = a * b;
	
	printf ("%d\n", result);
	
	return (0);
}
