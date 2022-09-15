#include "main.h"

/**
 * _isdigit - checks whether a character is digit
 *
 * @c: the character to be printed
 *
 * Return: Always 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
