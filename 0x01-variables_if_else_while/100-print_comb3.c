#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 * Return: 0 (Success)
 */
int main(void)
{
	for (int i = 0; i < 10; i++)
		{
			for (int j = i+1; j < 10;j++)
				{
					putchar('0' + i);
					putchar('0' + j);
					if (i < 8)
						{
							putchar(',');
							putchar(' ');
						}
				}
		}
	return 0;
}

