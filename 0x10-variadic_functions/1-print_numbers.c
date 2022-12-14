#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers in ellipsis
 * @separator: seperates the numbers
 * @n: no of elements passed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, j = 0;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (j < n - 1 && separator != NULL)
		{
			printf("%s", separator);
			j++;
		}
	}
	printf("\n");
}
