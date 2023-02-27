#include "main.h"
#include <stdio.h>

/**
 * _strlen: gives the length of a variable.
 * @s: variable to know the length
 */
int _strlen(char *s)
{
	int len = 0;
	while(*s != '\0')
	{
		len++;
		s++;
	}
	return(len);
}
