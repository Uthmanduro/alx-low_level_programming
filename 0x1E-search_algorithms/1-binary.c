#include <stdio.h>
#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: the array to search
 * @size: the size of the array
 * @value: the value to be searched
 * Return: the index where the value is found or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	/*int i = 0;*/
	size_t j, middle_value;
	int new_array[50];

	middle_value = array[size / 2];
	if (value == array[middle_value])
	{
		return (array[middle_value]);
	}
	else if (value < array[middle_value])
	{
		for (j = 0; j < middle_value; j++)
			new_array[j] = array[j];
		binary_search(new_array, middle_value, value);
	}
	else
	{
		for (j = 0; middle_value + 1 < size; j++)
            new_array[j] = array[middle_value + 1];
        binary_search(new_array, middle_value, value);
	}
	return (-1);
}
