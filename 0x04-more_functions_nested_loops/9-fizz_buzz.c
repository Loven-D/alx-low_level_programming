#include <stdio.h>
/**
 * main - entry point for the code
 * fizz for the multiple of 3.
 * Buzz for the multiple of 5.
 * FizzBuzz for the multiple of both 3 and 5.
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return 0;
}
