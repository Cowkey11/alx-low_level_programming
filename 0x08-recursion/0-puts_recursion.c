#include "main.h"

/*
 * _puts_recursion()-function prints a string
 * @*s: pointer to the string to print
 *
 * return: void
 */

void _puts_recursion(char *s)
{
        int index = 0;

        if (s[index] == '\0')
        {
                _putchar('\n');
                return;
        }
        else
        {
                _putchar(s[index]);
                _puts_recursion(s + 1);
        }
}
