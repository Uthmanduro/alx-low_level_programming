#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * _strdup - returns a pointer to a newly allocated space
 * @str: pointer to copy
 * Return: temp
 */
char *_strdup(char *str)
{
	char *temp;
	int i = 0;

	if (str == NULL)
		return (NULL);

	temp = malloc(strlen(str) + 1);
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
