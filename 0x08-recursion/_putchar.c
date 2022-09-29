#include <unistd.h>
/**
 * _putchar - prints a character to output
 * @c: character to be printed
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
