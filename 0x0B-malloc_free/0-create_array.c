#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - it creates an array of char
 * @size: size of the array
 * @c: char to initialize the array with
 * Return: a pointer to the array, 
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		arr = malloc(sizeof(char) * size);

		if (arr == NULL)
		{
			return (NULL);
		}

		for (i = 0; i < size; i++)
		{
			arr[i] = c;
		}
		return (arr);
	}
}
