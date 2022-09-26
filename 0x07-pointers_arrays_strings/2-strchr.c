#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: string s
 * @c: character to be located
 * Return: a pointer to the first occurrence
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
	{
		i++;
	}
	if (s[i] == c)
		return (&s[i]);
	else
		return (0);
}
