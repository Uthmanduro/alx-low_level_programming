#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimum value of array
 * @max: maxixmum value of array
 * Return: a pointer
 */
int *array_range(int min, int max)
{
	int i, j, *ptr;

	j = max - min;
	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * max + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i <= j; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
