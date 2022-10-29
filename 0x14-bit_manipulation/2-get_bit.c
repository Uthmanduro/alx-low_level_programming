#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: value to check
 * @index: index of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if ((n >> index) == 0)
		return (-1);
	return ((n >> index) & 1);
}
