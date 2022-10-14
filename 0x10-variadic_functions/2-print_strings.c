#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints numbers in ellipsis
 * @separator: seperates the numbers
 * @n: no of elements passed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, j = 0;
	char *k;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		k = va_arg(ap, char*);
		if (k == NULL)
			printf("(nil)");
		else
			printf("%s", k);
		if (j < n - 1 && separator != NULL)
		{
			printf("%s", separator);
			j++;
		}
	}
	printf("\n");
}
