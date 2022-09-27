#include "main.h"
/**
 * _memset - fills memory areapointed to by i
 * @s: pointer s
 * @b: constant byte
 * @n: number of bytes
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i, j;

	j = n;
	for (i = 0; i < j; i++)
		s[i] = b;
	return (s);
}
