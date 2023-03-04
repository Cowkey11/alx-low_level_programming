#include <stdio.h>

/*
 * Main - function prints single digits
 *
 * Return: 0
 */

int main(void)
{
	int a = 0;

	while (a < 10)
	{
		if (a <= 8)
		{
			putchar(48 + a);
			putchar(',');
			putchar(' ');
			a++;
		}
		else
		{
			putchar(48 + a);
			a++;
		}
	}
	return (0);
}
