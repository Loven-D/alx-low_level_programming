#include <stdio.h>
#include <stdlib.h>


/**
 * main - Program that prints alphabet in lowercase
 * followed by a new line
 * Return: 0 (Success)
 */

int _putchar(char c);
void print_alphabet(void)
{
    char c = 'a';

    while (c <= 'z') {
        _putchar(c,'\n');
        c++;
    }
    
}

