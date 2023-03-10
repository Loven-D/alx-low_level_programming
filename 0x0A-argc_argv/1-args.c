#include  <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: an integer that holds the number of arguments
 * @argv: the pointer to the argument
 * Return: 0 always.
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
