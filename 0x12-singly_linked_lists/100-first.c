#include <stdio.h>

void sudo_main(void)__attribute__((constructor));

/**
 * sudo_main - function to print before the main
 */
void sudo_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
