#include <stdio.h>

/*
 * Main - function prints single digits
 *
 * Return: 0
 */

int main(void)
{
	int a = 0;

	if (a < 10)
	{
		while (a < 10)
		{
			putchar(48 + a);
			if (a < 9)
			{
				putchar(',');
				putchar(' ');
				a++;
			}
			else
			{
				putchar('\n');
				a++;
			}
		}
	}
	return (0);
}
