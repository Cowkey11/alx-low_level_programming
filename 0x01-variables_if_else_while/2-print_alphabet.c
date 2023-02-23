#include <stdio.h>

/**
 * Main- prints the alphabet in lower case
 * Return alwys 0
 */
int main (void)
{
	char l;

	for (l = 'a';l <= 'z';l++)
	{
		putchar(l);
	}
	putchar('\n');
	return 0;
}
