#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: the integers to be swaped
 * @b: the integers to be swaped
*/
void swap_int(int *a, int *b)
{
int m;

m = *a;
*a = *b;
*b = m;
}
