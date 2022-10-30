#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: value of the bit
 * @index: index to set to 0
 * Return: 1 if successful and -1 if not
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 31)
		return (-1);
	*n = ((*n >> (index + 1)) << (index + 1));
	return (1);
}
