#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_alphabet_x10- prints 10 times the alphabet in lowercase
 * Return:(0) success
 */

void print_alphabet_x10(void)
{
        char c;
        for(int i = 0; i < 10; i++)
        {
                c = 'a';
                while (c <= 'z')
                {
                        _putchar(c);
                        c++;
                }
                _putchar('\n');
        }
}
