#include "main.h"
/**
 * _calloc - allocates memory using calloc
 * @nmemb: number of memory in bytes
 * @size: size of data type
 * Return: pointer that has allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;

	ptr = calloc(nmemb, size);
	if ((nmemb || size) == 0)
		return (NULL);
	return (ptr);
}
