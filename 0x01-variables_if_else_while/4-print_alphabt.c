#include <stdio.h>

/**
 * main - prints lower case alphabet except e and q
 * return: 0
 */
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		if (l != 'e' && l != 'q')
			putchar(l);
	}
	putchar('\n');
	return (0);
}
