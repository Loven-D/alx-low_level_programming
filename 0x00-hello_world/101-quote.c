#include <unistd.h>
/*
 * main is Entry
 * Return 1
 */
int main(void)
{
    char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    write(2, msg, 59);
    return 1;
}

