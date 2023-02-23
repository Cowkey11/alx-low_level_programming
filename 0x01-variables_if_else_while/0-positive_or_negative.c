#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*Main - this function assigns a random interger value to n and prints the number, including whether it is zero, positive or negative
* return is 0
*/
int main (void)
{
int n;

srand (time(0));
n = rand() - RAND_MAX / 2;

if (n == 0)
	printf("%d is zero\n", n);
else if (n < 0)
	printf("%d is negative\n", n);
else if (n > 0)
	printf("%d is positive\n", n);

return 0;
}

