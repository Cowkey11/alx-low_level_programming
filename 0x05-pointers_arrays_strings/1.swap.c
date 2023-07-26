#include "main.h"

/*
*swap_int(): function swaps the values of two integers.
*@*a, @*b: pointers to the integers for swapping.
*
*return: nothing.
*/

void swap_int(int *a, int *b)
{
    int holder;

    holder = *a;
    *a = *b;
    *b = holder;
}