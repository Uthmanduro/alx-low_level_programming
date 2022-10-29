#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: value to check
 * @index: index of the bit
 * Return: an int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if ((n >> index) == 0 || index > 31)
		return (-1);
	return ((n >> index) & 1);
}
