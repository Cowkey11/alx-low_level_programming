#include <stdio.h>

/**
 * Main - prints the alphabet reverse
 * Return is 0
 */
int main(void)
{
	char r;
	for (r = 'z'; r >= 'a'; r--)
		putchar(r);
	putchar('\n');
	return (0);
}
