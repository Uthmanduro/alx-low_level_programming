#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory using calloc
 * @nmemb: number of memory in bytes
 * @size: size of data type
 * Return: pointer that has allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	ptr = calloc(nmemb, size);
	if (ptr == 0)
		return (NULL);
	return (ptr);
}
