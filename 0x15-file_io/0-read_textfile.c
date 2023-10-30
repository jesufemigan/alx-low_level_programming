#include "main.h"

/**
 * read_textfile - reads a text fileand prints to POSIX standard output
 *
 * @filename: name of file
 * @letters: number of letters to be printed
 *
 * Return: number of letters printed
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char buf[BUF_SIZE * 8];
	ssize_t bytes;
	int fd;

	if (!filename || !letters)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	bytes = read(fd, buf, letters);
	bytes = write(STDOUT_FILENO, buf, bytes);
	close(fd);
	return (bytes);
}
