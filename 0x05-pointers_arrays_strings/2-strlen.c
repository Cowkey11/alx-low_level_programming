#include "main.h"

/*
*_strlen(): function prints length of a string passed to it.
*@s: string whose length we want to print.
*
*return - length of string or otherwise, 1 on error.
*/

int _strlen(char *s)
{
    int index = 0, count = 0;

    for (index = 0; s[index] != '\0'; index++)
    {
        count = (count + 1);
    }
    return (count);
}
