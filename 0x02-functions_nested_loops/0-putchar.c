#include <unistd.h>
#include "main.h"
/**
 * main - Entry point of program
 *
 * Return: Always 0
 */
int main(void)
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');
	return (0);
}
/**
 * _putchar - writes the characte to output
 * @c: the character to print
 * Return: Aways g
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
