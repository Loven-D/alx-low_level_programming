#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/*main is Entry point*/
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
if (n > 0)
{
	printf("%d is positive\n", n);
}
else if (n < 0)
{
	printf("%d is negative\n", n);
}
else {
	printf("Zero!\n");
}

	return (0);
}

