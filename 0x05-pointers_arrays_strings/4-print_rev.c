#include "main.h"

/*
 * print_rev: program prints a string in reverse.
 * @*s: the string to be printed.
 *
 * return: nothing
 */

void print_rev(char *s)
{
        int n = 0;

        for (n = 0; s[n] != '\0'; n++)
        {
                n = (n + 1);
        }


        while (n >= 0)
        {
                _putchar(s[n]);
                n--;
        }
        _putchar('\n');
}
