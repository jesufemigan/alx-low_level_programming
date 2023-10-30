#include "main.h"

/**
 * create_file - creates a file
 *
 * @filename: name of file
 * @text_content: content of file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes = 0, len = strlen(text_content);

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);
	if (fd == -1)
		return (-1);
	if (len)
	{
		bytes = write(fd, text_content, len);
	}
	close(fd);
	return (bytes == len ? 1 : -1);
}
