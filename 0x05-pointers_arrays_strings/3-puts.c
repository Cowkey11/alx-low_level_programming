#include "main.h"

/*
*_puts(): function prints string then new line on stdout.
*@str: the string to print
*
*return - nothing.
*/

void _puts(char *str)
{
    int index;

    for (index = 0; str[index] != '\0'; index++)
    {
        _putchar(str[index]);
    }
    _putchar('\n');
}