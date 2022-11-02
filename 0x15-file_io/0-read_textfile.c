#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the standars output
 * @filename: name of the file to read from
 * @letters: no of letters to print to the buffer
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rd, wr;
	char *buf = malloc(letters);
	char *buf2 = malloc(letters);

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY, 600);
	if (fd == -1)
		return (0);
	rd = read(fd, buf, letters);
	if (rd == -1)
		return (0);
	wr = write(STDERR_FILENO, buf2, letters);
        if (wr == -1)
                return (0);
	close(fd);
	printf("%s", buf);
	return (rd);
}
