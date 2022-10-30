#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to the value
 * @index: index to set 1
 * Return: 1 if succesful or -1 if not
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > ((sizeof(unsigned int) * 8) - 1))
		return (-1);
	*n = (*n | (((*n >> index) | 1) << index));
	return (1);
}
