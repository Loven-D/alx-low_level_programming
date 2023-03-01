#include "main.h"
#include <ctype.h>

/**
 * _atoi - function that converts string to integrer
 * @s: this is the string to be converted.
 * return: 0 always
 */
int _atoi(char *s)
{
int sign = 1;
int num = 0;

while (*s)
{
if (*s == '-')
{
sign = -1;
s++;
}
else if(*s == '+')
{
sign = 1;
s++;
}
else if (isdigit(*s))
{
num = num * 10 + (*s - '0');
s++;
}
else
{
s++;
}
}
return sign * num;
}
