#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates a random valid password for 101-crackme
 *
 * Return: 0 on success
 */
int main(void)
{
	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	const int charset_size = sizeof(charset) - 1;
	char password[6];
	int i, index;
	
	srand(time(NULL));
	
	for (i = 0; i < 100; i++)
	{
		index = rand() % charset_size;
		password[i] = charset[index];
	}
	password[5] = '\0';
	printf("%s\n", password);
	return (0);
}
