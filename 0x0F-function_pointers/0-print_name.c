#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - function to print name
 * @name: pointer to the name to be printed
 * @f: pointer to a function that takes a string and returns void.
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if  (name == NULL || f == NULL)
	{
		return (0);
	}

	f(name);
}
