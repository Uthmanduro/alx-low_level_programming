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
	int fd, wr, count;

	if (!filename)
		return (-1);
	if (!text_content)
		text_content = "";
	count = strlen(text_content);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	wr = write(fd, text_content, count);
	if (wr == -1)
		return (-1);
	close(fd);
	return (1);

}
