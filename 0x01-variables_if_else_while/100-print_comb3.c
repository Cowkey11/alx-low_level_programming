#include <stdio.h>

/*
 * Main - function prints two digit combos.
 *
 * Return: 0 (success)
 */

int main(void)
{
	int a = 0, b;

	while (a < 9)
	{
		int b = 0;

		while (b < 10)
		{
			if (a == b || b == 0)
				b = a + 1;
			putchar(48 + a);
			putchar(48 + b);
			if (a == 8 && b == 9)
			{
				putchar('\n');
				a++;
				b++;
			}
			else
			{
				putchar(',');
				putchar(' ');
				b++;
			}
		}
		a++;
	}
	putchar('\n');
	return (0);
}
