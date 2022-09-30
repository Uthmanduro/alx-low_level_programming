#include <stdio.h>
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0
 */
int main(int argc, char __attribute__((__unused__)) **argv)
{
	int i = 0;

	if (argc == 1)
	printf("%d\n", i);
	else
	printf("%d\n", argc - 1);
	return (0);
}
