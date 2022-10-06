#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_chceked - allocates memory using maloc
 * @b: sizeof memory allocated
 * Return: pointer that checks the memory
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
