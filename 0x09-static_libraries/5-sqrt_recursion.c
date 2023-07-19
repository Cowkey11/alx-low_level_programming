#include "main.h"

/*
 * _sqrt_recursion(): function returns the natural square root of a number.
 * @n: the number whose square root is required.
 *
 * return: on error, return -1.
 */

int _sqrt_recursion(int n)
{
        int start = 0, count = 0, end = n;

        if (n <= 0)
        {
                return (-1);
        }
        if (n >= 1)
        {
                for (count = 0; count <= n; count++)
                {

                }
}

int main()
{
        int r;

        r = _sqrt_recursion(1);
        printf("%d\n", r);
        r = _sqrt_recursion(1024);
        printf("%d\n", r);
        r = _sqrt_recursion(16);
        printf("%d\n", r);
        r = _sqrt_recursion(17);
        printf("%d\n", r);
        r = _sqrt_recursion(25);
        printf("%d\n", r);
        r = _sqrt_recursion(-1);
        printf("%d\n", r);
        return (0);
}