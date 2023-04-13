#include "search_algos.h"
#include <stdio.h>
/**
 * linear_search - searches for a valie in an array of integers
 * @array: pointer to the first element in the array
 * @size: size of the array
 * @value: value to be searched for
 * Return: the first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
	return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
