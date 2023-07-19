#include "main.h"

/*
 * is_prime_number(): checks whether a number is prime or otherwise.
 * @n: the number to check.
 *
 * return: 1 if prime, otherwise returns 0.
 */

int is_prime_number(int n)
{

        if (n <= 1)
        {
                return (0);
        }
        else if ((n % 2) != 0 && (n % 3) != 0 && (n % 5) != 0)
        {
                return (1);
        }
        else
        {
                return (0);
        }
}