#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - create an array of characters
 * @size: size of the array
 * @c: the character to be created
 * Return: pointer arrray
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;


	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);
	if (array == NULL)
	{
		printf("Not enough memory\n");
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
