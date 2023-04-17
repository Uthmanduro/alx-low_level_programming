#include "search_algos.h"
#include <stdio.h>
/**
 * interpolation_search - search for a value in a sorted array of integers
 * @array: the array to search
 * @size: size of the array
 * @value: the value being searched
 * Return: the first index where the value is located
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high, pos;

	if (!array)
		return (-1);
	high = size - 1;
	pos = low + (((double)(high - low) / (array[high] - array[low])) *
				 (value - array[low]));

	while (low <= high)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) *
					 (value - array[low]));
		if (pos > size)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			return (-1);
		}
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (value == array[pos])
			return (pos);
		else if (value < array[pos])
			high = pos - 1;
		else if (value > array[pos])
			low = pos + 1;
	}
	return (-1);
}
