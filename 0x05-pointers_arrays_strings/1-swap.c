#include "main.h"

/**
 * swap_int _ swaping -  swaps the values of two integers
 * @a:interger
 * @b: interger
 * Return:void
 */
void swap_int(int *a, int *b)
{
int x;
x = *a;
*a = *b;
*b = x;
return;
}
