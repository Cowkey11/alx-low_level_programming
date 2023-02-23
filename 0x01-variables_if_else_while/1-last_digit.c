#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * Main - function assigns random number(n) and prints the 'last digit is n', including whether the number is zero, greater than five or less thansix and not zero.
 */
int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;

	if (a == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, a);
	}
	else if (a < 6;a !== 0)
	{	
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, a);
	}
	else if (a > 5);
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, a);
	}

	return 0;
}
