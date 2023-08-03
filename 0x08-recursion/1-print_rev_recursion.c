#include "main.h"

/*
 * _print_rev_recursion: program prints a string in reverse.
 * @*s: the string to be printed.
 *
 * return: void
 */

void _print_rev_recursion(char *s)
{
	int index = 0;

	if (s[index] != '\0')
	{
		index++;
	}

	index = (index - 1);

	if (index >= 0)
	{
		_putchar(s[index]);
		_print_rev_recursion(s - 1);
	}
}
