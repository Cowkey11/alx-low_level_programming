#include "main.h"

/*
 * _pow_recursion(): function returns value of x^y.
 * @x: the number
 * @y: the power value
 *
 * return: on error(y less than 0) returns -1.
 */

int _pow_recursion(int x, int y)
{
        int count;
        int value = x;

        if (y == 0)
        {
                return (1);
        }
        if (y == 1)
        {
                return (value);
        }
        if (y < 0)
        {
                return (-1);
        }
        else
        {
                for (count = 2; count <= y; count++)
                {
                        value = (value * x);
                }
                return (value);
        }