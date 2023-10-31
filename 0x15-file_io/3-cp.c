#include "main.h"

#define READ_ERROR "Error: Can't read from file %s\n"
#define WRITE_ERROR "Error: Can't write to %s\n"
#define CLOSE_ERROR "Error: Can't close fd %d\n"
#define ARG_ERROR "Usage: cp file_from file_to"

/**
 * main - entry point
 *
 * @argc: argument count
 * @argv: arrray of argument
 *
 * Return: int
 */

int main(int argc, char **argv)
{
	char buf[BUF_SIZE];
	int fd1 = 0, fd2 = 0;
	ssize_t b;

	if (argc != 3)
		dprintf(STDERR_FILENO, ARG_ERROR), exit(98);
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
		dprintf(STDERR_FILENO, READ_ERROR, argv[1]);
	fd2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd2 == -1)
		dprintf(STDERR_FILENO, WRITE_ERROR, argv[2]), exit(99);
	while ((b = read(fd1, buf, BUF_SIZE)) > 0)
		if (write(fd2, buf, b) != b)
			dprintf(STDERR_FILENO, WRITE_ERROR, argv[2]), exit(99);
	if (b == -1)
		dprintf(STDERR_FILENO, READ_ERROR, argv[2]), exit(98);
	fd1 = close(fd1);
	fd2 = close(fd2);

	if (fd1)
		dprintf(STDERR_FILENO, CLOSE_ERROR, fd1), exit(100);
	if (fd2)
		dprintf(STDERR_FILENO, CLOSE_ERROR, fd2), exit(100);
	return (EXIT_SUCCESS);
}
