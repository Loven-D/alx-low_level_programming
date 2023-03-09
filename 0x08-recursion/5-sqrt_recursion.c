#include "main.h"

/**
 * _sqrt_recursion - main funct
 * @n: int n
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}

	int i = _sqrt_recursion(n / 4) * 2;

	if (i * i > n)
	{
		return (-1);
	}
	if ((i + 1) * (i + 1) <= n)
	{
		return (_sqrt_recursion(n));
	}
	else
	{
		return (i);
	}
}
