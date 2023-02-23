#include <stdio.h>

/**
 * Main - function prints alphabet in lower case followed by new line except e and q
 * Return always 0
 */
int main(void)
{
	char l;
	for (l = 'a';l <= 'z';l++)
	{
		if (l != 'e' && l != 'q')
			putchar(l);
	}
	putchar('\n');
	return (0);
}
