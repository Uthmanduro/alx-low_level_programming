#include "main.h"
#include <stdio.h>
/**
 * closefile - close a file and print error if failed
 * @fd: file decriptor to close
 * Return: cl
 */
int closefile(int fd)
{
	int cl;

	cl = close(fd);
	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	return (cl);
}
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector]
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int fto, ffrom, wrto, rdfrom;
	char *buf = malloc(1024);

	if (!buf)
	{
		dprintf(STDERR_FILENO, "Can't write to %s\n", argv[2]);
		exit(99);
	}
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
	fto = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664 & ~0000);
	wrto = write(fto, buf, rdfrom);
	if (fto == -1 || wrto == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	closefile(ffrom);
	closefile(fto);
	free(buf);
	return (0);
}
