#include "main.h"

/*
 * _strlen_recursion: function prints length of a string.
 * @s: the string whose length is printed.
 *
 * return: (0) if successful, 1 on error.
 */

int _strlen_recursion(char *s)
{
        int count, i;

        count = 0;
        for(i = 0; s[i] != '\0';i++)
        {
                count = count + 1;
        }
        return (count);
}