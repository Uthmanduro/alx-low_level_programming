#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * strdup - returns a pointer to a newly allocated space
 * @str: pointer to copy
 * Return: temp
 */
char *_strdup(char *str)
{
	char *temp;
	int i = 0;

	temp = malloc(sizeof(str));
	if (temp == NULL)
	{
		printf("No memory allocated\n");
		return (NULL);
	}
	while (str[i] != '\0')
	{
		temp[i] = str[i];
		i++;
	}
	return (temp);
}
