#include <unistd.h>
/**
 * _putchar - writes a character to output
 * @c: character to write
 * Return: always 1
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
