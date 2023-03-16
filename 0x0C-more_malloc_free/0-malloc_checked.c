#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - a function that allocates memory using malloc.
 * @b: number of bytes to allocate.
 * Return: pointer to allocated memory,
 *	or terminate with exit status 98 on failure.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		perror("malloc_checked");
		exit(98);
	}
	return (ptr);
}
