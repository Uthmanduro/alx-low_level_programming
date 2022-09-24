#include "main.h"
/**
 * _strncat - function that concactenate 2 strings
 * @dest: string one
 * @src: string 2 to concat
 * @n : no of byte
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int count = 0;
	int count1 = 0;

	while (*(dest + count) != '\0')
		count++;
	while (count1 < n)
	{
		*(dest + count) = *(src + count1);
		count++;
		count1++;
	}
	return (dest);
}
