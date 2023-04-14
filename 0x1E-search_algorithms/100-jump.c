#include <stdio.h>
#include <math.h>
#include "search_algos.h"
/**
 * jump_search - searches for a value in a sorted arrays of integers
 * @array: the array to search
 * @size: size of the array
 * @value: value to be searched
 * Return: the index of the value being searched or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, block, i, block_high;

	if  (!array)
		return (-1);
	block = sqrt(size);
	block_high = block;
	while (low <= high)
	{
		printf("Value checked array[%lu] = [%lu]\n", low, low);
		if (value <= array[block_high])
		{
			printf("Value found between indexes [%lu] and [%lu]\n", low, block_high);
			for (i = low; i <= block_high; i++)
			{
				printf("Value checked array[%lu] = [%lu]\n", i, i);
				if (value == array[i])
					return (i);
			}
		}
		low = low + block;
		block_high = block + low;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", low - block, low);
    printf("Value checked array[%lu] = [%lu]\n", low - block, low - block);

	return (-1);
}
