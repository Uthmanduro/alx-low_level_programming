#include "main.h"
/**
 * binary_to_uint - converts binary to int
 * @b: string of binary to convert
 * Return: unsigned int of the decimal
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, convert = 0;

	if (!b)
		return (0);
	while (b[i])
	{
		if (b[i] - '0' != 0 && b[i] - '0' != 1)
			return (0);
		convert = ((convert * 2) + (b[i] - '0'));
		i++;
	}
	return (convert);
}
