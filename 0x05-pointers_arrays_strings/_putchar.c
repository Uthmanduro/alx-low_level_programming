#include <unistd.h>
/**
 * _putchar - prints a character 
 * @c: char to be printed
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
