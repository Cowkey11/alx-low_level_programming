#include "main.h"

/*
 * print_rev: program prints a string in reverse.
 * @*s: the string to be printed.
 *
 * return: nothing
 */

void print_rev(char *s)
{
        int index = 0;

        for (index = 0; s[index] != '\0'; index++)
        {
                index = (index + 1);
        }


        while (index >= 0)
        {
                _putchar(s[index]);
                index--;
        }
        _putchar('\n');
}
