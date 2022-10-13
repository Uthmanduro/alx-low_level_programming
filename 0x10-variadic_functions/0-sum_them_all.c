#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sums all parameters
 * @n: number of parameters
 * Return: j
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list po;
	unsigned int i, j = 0;

	va_start(po, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		j += va_arg(po, int);
	va_end(po);
	return (j);
}
