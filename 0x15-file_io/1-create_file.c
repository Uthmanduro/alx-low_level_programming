#include "main.h"
#include <string.h>
/**
 * create_file - creates a file
 * @filename: name of the file to be created
 * @text_content: string to be created
 * Return: 1 on success -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wr;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY, 0600);
	if (fd == -1)
		return (-1);
	wr = write(fd, text_content, strlen(text_content) + 1);
	if (wr == -1)
		return (-1);
	close(fd);
	return (1);

}
