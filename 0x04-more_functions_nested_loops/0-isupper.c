#include "main.h"

/**
 * main - prints  whether a function is upper or lower
 *
 * _isupper - checks whether a function is upper
 *
 * @c: the character to be printed
 *
 * Return: Always 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
