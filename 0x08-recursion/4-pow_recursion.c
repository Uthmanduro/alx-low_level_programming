#include "main.h"
/**
 * _pow_recursion - finds x raised to the power of y
 * @x: number multiples
 * @y: power raised
 * Return: the final result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return -1;
	if (x == 0)
		return 0;
	if (y == 0)
		return 1;
	y--;
	return (x *_pow_recursion(x,y));
}
