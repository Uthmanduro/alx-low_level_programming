#include "main.h"
/**
 * _memcpy - copies n bytes from one memory to another
 * @dest: detination  to copy
 * @src: source to copy
 * @n: bytes from memory area
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i, j;

	j = n;
	for (i = 0; i < j; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
