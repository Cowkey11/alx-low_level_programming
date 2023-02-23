#include <stdio.h>

/**
 * Main - prints combinations of single digits
 * Return is 0
 */
int main(void)
{
	int a;
	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	putcharz('\n');
	return (0);
}
