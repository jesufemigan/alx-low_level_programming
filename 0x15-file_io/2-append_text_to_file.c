#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: name of file
 * @text_content: string to add to end of file
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes = 0, len = strlen(text_content);

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	bytes = write(fd, text_content, len);
	close(fd);
	return (bytes == len ? 1 : -1);
}
