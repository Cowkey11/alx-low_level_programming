#include <stdio.h>

/**
 * main - prints numbers in base 16
 * return: is 0
 */
int main(void)
{
	int num;
	char a;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	for (a = 'a'; a <= 'f'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
