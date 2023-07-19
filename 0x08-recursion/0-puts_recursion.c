#include "main.h"

/*
 * _puts_recursion()-function prints a string
 * @*s: pointer to the string to print
 *
 * return: nothing
 */

void _puts_recursion(char *s)
{
        int n;

        for (n = 0; s[n] != '\0'; n++)
                _putchar(s[n]);
        _putchar('\n');
}