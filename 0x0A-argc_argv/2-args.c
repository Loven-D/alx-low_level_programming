#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argv: integer that represents the number of arguments
 * @agrc: an array of strings 
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
