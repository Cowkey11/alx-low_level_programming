#include <stdio.h>

/**
 * main - prints alphabet in lower and upper case
 * return is always 0
 */
int main(void)
{
	char c;

	for (c = 'a';c <= 'z';c++)
	{
		putchar(c);
	}
	for (c = 'A';c <= 'Z';c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
