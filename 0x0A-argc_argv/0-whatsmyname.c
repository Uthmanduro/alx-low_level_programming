#include <stdio.h>
/**
 * main - entry point
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;
	if (argc > 1)
	{
		for (i = 0; i < argc; i++)
		{	
		} 	
		printf("%s\n", argv[i]);
	}
	else
		printf("%s\n", *argv);
	return (0);
}
