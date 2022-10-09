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
	unsigned int i;
	
	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == 0)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;
	return (ptr);
}
