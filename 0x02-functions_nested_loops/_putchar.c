#include "main.h"
#include <unistd.h>

/**
 * main - Entry point
 * 
 * Return: always 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
