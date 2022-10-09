#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a new memory
 * @ptr: void pointer
 * @old_size: old size of memory
 * @new_size: new size of memory
 * @Return: a pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *newp;

	newp = malloc(old_size);
	if (newp == NULL)
	{
		return (NULL);
	}
	ptr = realloc(newp, new_size);
	if (ptr == NULL)
		ptr = malloc(new_size);
	return (ptr);
}
