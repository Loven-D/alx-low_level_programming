#include <stdio.h>

/**
 * sudo_main - function to print before the main
 */
void sudo_main(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}

/**
 * main - entry of the main code
 * Return: always 0
 */
int main(void)
{
	sudo_main();

	return (0);
}
