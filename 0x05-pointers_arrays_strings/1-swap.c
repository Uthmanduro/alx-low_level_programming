#include "main.h"
/**
 * swap_int - swaps 2 integers
 * @a: valuse a
 * @b: values of integers to swap
 */
void swap_int(int *a, int *b)
{
	int p = *a;
	*a = *b;
	*b = p;
}
