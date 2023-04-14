#include <stdio.h>
#include "search_algos.h"
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
 * binary_search - searches for a value in a sorted array of integers
 * @array: the array to search
 * @size: the size of the array
 * @value: the value to be searched
 * Return: the index where the value is found or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t middle_index, low = 0, high;

	high = size - 1;
	if (!array)
		return (-1);

	while (low <= high)
	{
		middle_index = (low + high) / 2;
		print_array(array, low, high);
		if (value == array[middle_index])
		{
			return (middle_index);
		}
		else if (value < array[middle_index])
		{
			high = middle_index - 1;
		}
		else if (value > array[middle_index])
		{
			low = middle_index + 1;
		}
	}
	return (-1);
}
