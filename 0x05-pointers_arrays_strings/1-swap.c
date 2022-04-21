#include "main.h"

/**
 * swap_int _ swaping 2 integer using a pointer
 * @a:interger
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
