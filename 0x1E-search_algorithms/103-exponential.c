#include "search_algos.h"
#include <stdio.h>
/**
 * print_array - prints an array
 * @low: beginning of the array
 * @high: end of the array
 * @array: array to print
 */
void print_array(int *array, size_t low, size_t high)
{
	size_t i;

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i != high)
			printf(", ");
	}
	printf("\n");
}
/**
 * exponential_search - searchs for a value in a sorted array
 * @array: the array to search
 * @size: the size of the array
 * @value: the value being searched
 * Return: the first index to the value being searched
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t low, high, index = 1;

	if (!array)
		return (-1);
	
	low = 0;
	high = size - 1;
	if (array[low] == value)
		return (low);
	low = 1;
	while (low <= high)
	{
		printf("Value checked array[%lu] = [%d]\n", low, array[low]);
		if (array[low] > value)
		{
			printf("Value found between indexes [%lu] and [%lu]\n", low, high);
			while (low <= high)
			{
				index = low + (high - low) / 2;
				print_array(array, low, high);
				if (array[index] == value)
					return (index);
				else if (array[index] < value)
					high = index - 1;
				else if (array[index] > value)
					low = index + 1;
			}
		}
		low = low * 2;
	}
	return (-1);
}
