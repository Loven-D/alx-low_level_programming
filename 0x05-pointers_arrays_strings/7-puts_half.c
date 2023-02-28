#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints the second half of the string
 * @str: the string to print second half
 */
void puts_half(char *str)
{
int length = strlen(str);
int start_index;

if (length % 2 == 0)
{
start_index = length / 2;
}
else
{
start_index = (length - 1) / 2;
}

for (int i = start_index; i < length; i++)
{
printf("%c", str[i]);
}
printf("\n");
}
