#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - function on each element of an array
 * @array: pointer to an array.
 * @size: size of the array.
 * @action: pointer to the function to be executed on each element
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action ++ NULL)
		return;

	for (size_t i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
