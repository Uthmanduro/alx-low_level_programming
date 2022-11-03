#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector]
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int fto, ffrom, wrto, rdfrom, clto, clfrom;
	char *buf = malloc(1024);

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	ffrom = open(argv[1], O_RDONLY);
	rdfrom = read(ffrom, buf, 1024);
	if (ffrom == -1 || rdfrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fto = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	wrto = write(fto, buf, rdfrom);
	if (fto == -1 || wrto == -1)
	{
		dprintf(STDERR_FILENO, "Cant write to %s\n", argv[2]);
		exit(99);
	}
	clfrom = close(ffrom);
	clto = close(fto);
	if (clfrom == -1 || clto == -1)
	{
		dprintf(STDERR_FILENO, "Cant close fd %d\n", fto);
		exit(100);
	}
	return (0);
}
