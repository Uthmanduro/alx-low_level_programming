#include "main.h"
/**
 * *_strcat - concatenates  strings
 *
 * @dest: first string to concatenate
 * @src: second string to concatenate
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int count1 = 0;
	int count2 = 0;

	while (*(dest + count1) != '\0')
		count1++;

	while (count2 >= 0)
	{
		*(dest + count1) = *(src + count2);
		if (*(src + count2) == '\0')
			break;
		count1++;
		count2++;
	}
	return (dest);
}
