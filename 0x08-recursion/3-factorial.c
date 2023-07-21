#include "main.h"

/*
 * _factorial():function returns factorial of a number.
 * @n: the number whose factorial is required.
 *
 * return: if n < 0, returns -1 indicating error.
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	else
		return (n * factorial(n-1));
}
