#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * fill_file - copy content between files
 * @fd_from: file descriptor from
 * @fd_to: file descriptoy to
 * @argv: arguments
 */
void fill_file(int fd_from, int fd_to, char *argv[])
{
	char buffer[1024];
	ssize_t fd_rfrom, fd_wto;
	int max_buffer = 1024, cont = 0;

	while (fd_rfrom == max_buffer || cont == 0)
	{
		fd_rfrom = read(fd_from, buffer, max_buffer);
		if (fd_rfrom < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		fd_wto = write(fd_to, buffer, fd_rfrom);
		if (fd_wto < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		cont++;
	}
}
/**
 * main - similar function cp
 * @argc: cant. argc
 * @argv: parameters
 * Return: int
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, fd_error;
	/* ssize_t l_from; */
	/* char buffer[1024]; */

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);
	if (fd_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	fill_file(fd_from, fd_to, argv);
	fd_error = close(fd_from);
	if (fd_error < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	fd_error = close(fd_to);
	if (fd_error < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}
